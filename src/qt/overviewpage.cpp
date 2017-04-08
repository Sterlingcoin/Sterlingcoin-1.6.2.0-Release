#include "overviewpage.h"
#include "ui_overviewpage.h"

#include "walletmodel.h"
#include "bitcoinunits.h"
#include "optionsmodel.h"
#include "transactiontablemodel.h"
#include "transactionfilterproxy.h"
#include "guiutil.h"
#include "guiconstants.h"
#include "askpassphrasedialog.h"
#include "bitcoinrpc.h"

#include "main.h"
#include "wallet.h"
#include "init.h"
#include "base58.h"
#include "clientmodel.h"
#include "blockbrowser.h"

#include <QAbstractItemDelegate>
#include <QPainter>

#define DECORATION_SIZE 64
#define NUM_ITEMS 7

class TxViewDelegate : public QAbstractItemDelegate
{
    Q_OBJECT
public:
    TxViewDelegate(): QAbstractItemDelegate(), unit(BitcoinUnits::BTC)
    {

    }

    inline void paint(QPainter *painter, const QStyleOptionViewItem &option,
                      const QModelIndex &index ) const
    {
        painter->save();

        QIcon icon = qvariant_cast<QIcon>(index.data(Qt::DecorationRole));
        QRect mainRect = option.rect;
        QRect decorationRect(mainRect.topLeft(), QSize(DECORATION_SIZE, DECORATION_SIZE));
        int xspace = DECORATION_SIZE + 8;
        int ypad = 6;
        int halfheight = (mainRect.height() - 2*ypad)/2;
        QRect amountRect(mainRect.left() + xspace, mainRect.top()+ypad, mainRect.width() - xspace, halfheight);
        QRect addressRect(mainRect.left() + xspace, mainRect.top()+ypad+halfheight, mainRect.width() - xspace, halfheight);
        icon.paint(painter, decorationRect);

        QDateTime date = index.data(TransactionTableModel::DateRole).toDateTime();
        QString address = index.data(Qt::DisplayRole).toString();
        qint64 amount = index.data(TransactionTableModel::AmountRole).toLongLong();
        bool confirmed = index.data(TransactionTableModel::ConfirmedRole).toBool();
        QVariant value = index.data(Qt::ForegroundRole);
        QColor foreground = option.palette.color(QPalette::Text);
        if(qVariantCanConvert<QColor>(value))
        {
            foreground = qvariant_cast<QColor>(value);
        }

        painter->setPen(fUseGreyTheme ? QColor(255, 255, 255) : foreground);
        painter->drawText(addressRect, Qt::AlignLeft|Qt::AlignVCenter, address);

        if(amount < 0)
        {
            foreground = COLOR_NEGATIVE;
        }
        else if(!confirmed)
        {
            foreground = COLOR_UNCONFIRMED;
        }
        else
        {
            foreground = option.palette.color(QPalette::Text);
        }
        painter->setPen(fUseGreyTheme ? QColor(255, 255, 255) : foreground);
        QString amountText = BitcoinUnits::formatWithUnit(unit, amount, true);
        if(!confirmed)
        {
            amountText = QString("[") + amountText + QString("]");
        }
        painter->drawText(amountRect, Qt::AlignRight|Qt::AlignVCenter, amountText);

        painter->setPen(fUseGreyTheme ? QColor(255, 255, 255) : option.palette.color(QPalette::Text));
        painter->drawText(amountRect, Qt::AlignLeft|Qt::AlignVCenter, GUIUtil::dateTimeStr(date));

        painter->restore();
    }

    inline QSize sizeHint(const QStyleOptionViewItem &option, const QModelIndex &index) const
    {
        return QSize(DECORATION_SIZE, DECORATION_SIZE);
    }

    int unit;

};
#include "overviewpage.moc"

OverviewPage::OverviewPage(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::OverviewPage),
    currentBalance(-1),
    currentStake(0),
    currentUnconfirmedBalance(-1),
    currentImmatureBalance(-1),
    txdelegate(new TxViewDelegate()),
    filter(0)
{
    ui->setupUi(this);

    // Recent transactions
    ui->listTransactions->setItemDelegate(txdelegate);
    ui->listTransactions->setIconSize(QSize(DECORATION_SIZE, DECORATION_SIZE));
    ui->listTransactions->setMinimumHeight(NUM_ITEMS * (DECORATION_SIZE + 2));
    ui->listTransactions->setAttribute(Qt::WA_MacShowFocusRect, false);

    connect(ui->listTransactions, SIGNAL(clicked(QModelIndex)), this, SLOT(handleTransactionClicked(QModelIndex)));

    // init "out of sync" warning labels
    ui->labelWalletStatus->setText("(" + tr("out of sync") + ")");
    ui->labelTransactionsStatus->setText("(" + tr("out of sync") + ")");

    // start with displaying the "out of sync" warnings
    showOutOfSyncWarning(true);
    
    if (fUseGreyTheme)
    {
        const char* whiteLabelQSS = "QLabel { color: rgb(255,255,255); }";
        ui->labelBalance->setStyleSheet(whiteLabelQSS);
        ui->labelStake->setStyleSheet(whiteLabelQSS);
        ui->labelUnconfirmed->setStyleSheet(whiteLabelQSS);
        ui->labelImmature->setStyleSheet(whiteLabelQSS);
        ui->labelTotal->setStyleSheet(whiteLabelQSS);
    }
    QTimer *timer = new QTimer(this);
    connect(timer, SIGNAL(timeout()), this, SLOT(timerCountDown()));
    timer->start(1000);
}

int heightPrevious = -1;
int connectionPrevious = -1;
uint64_t volumePrevious = -1;
double netPawratePrevious = -1;
QString datePrevious = "";
double hardnessPrevious2 = -1;
int stakeminPrevious = -1;
int stakemaxPrevious = -1;
int seconds = 10;

void OverviewPage::updateStatistics() {

        double pHardness2 = GetDifficulty(GetLastBlockIndex(pindexBest, true));
        int nHeight = pindexBest->nHeight;
        double pNetrate = getBlockHashrate(nHeight);
        uint64_t nMinWeight = 0, nMaxWeight = 0, nWeight = 0;
        pwalletMain->GetStakeWeight(*pwalletMain, nMinWeight, nMaxWeight, nWeight);
        uint64_t nNetworkWeight = GetPoSKernelPS();
        uint64_t volume = ((pindexBest->nMoneySupply) / 100000000);
        int peers = this->model2->getNumConnections();
        QString height = QString::number(nHeight);
        QString stakemin = QString::number(nMinWeight);
        QString stakemax = QString::number(nNetworkWeight);
        QString hardness2 = QString::number(pHardness2, 'f', 8);
        QString netrate = QString::number(pNetrate, 'f', 0);
        QString Qldate = model2->getLastBlockDate().toString();
        QString QPeers = QString::number(peers);
        QString qVolume =  QLocale(QLocale::English).toString((qlonglong)volume);

    if (nHeight > heightPrevious) {
        ui->heightBox->setText("<font color=\"LawnGreen\">" + height + "</font>");
    } else {
        ui->heightBox->setText(height);
    }

    if (stakemin.toInt() > stakeminPrevious) {
        ui->minBox->setText("<font color=\"LawnGreen\">" + stakemin + "</font>");
    } else if (stakemin.toInt() < stakeminPrevious) {
        ui->minBox->setText("<font color=\"OrangeRed\">" + stakemin + "</font>");
    } else {
        ui->minBox->setText(stakemin);
    }

    if (stakemax.toInt() > stakemaxPrevious) {
        ui->maxBox->setText("<font color=\"LawnGreen\">" + stakemax + "</font>");
    } else if (stakemax.toInt() < stakemaxPrevious) {
        ui->maxBox->setText("<font color=\"OrangeRed\">" + stakemax + "</font>");
    } else {
        ui->maxBox->setText(stakemax);
    }

    if (pHardness2 > hardnessPrevious2) {
        ui->diffBox2->setText("<font color=\"LawnGreen\">" + hardness2 + "</font>");
    } else if (pHardness2 < hardnessPrevious2) {
        ui->diffBox2->setText("<font color=\"OrangeRed\">" + hardness2 + "</font>");
    } else {
        ui->diffBox2->setText(hardness2);
    }

    if (pNetrate > netPawratePrevious) {
        ui->diffBox2_2->setText("<font color=\"LawnGreen\">" + netrate + "</font>");
    } else if (pHardness2 < hardnessPrevious2) {
        ui->diffBox2_2->setText("<font color=\"OrangeRed\">" + netrate + "</font>");
    } else {
        ui->diffBox2_2->setText(netrate);
    }

    if (Qldate != datePrevious) {
        ui->localBox->setText("<font color=\"LawnGreen\">" + Qldate + "</font>");
    } else {
        ui->localBox->setText(Qldate);
    }

    if (peers > connectionPrevious) {
        ui->connectionBox->setText("<font color=\"LawnGreen\">" + QPeers + "</font>");
    } else if (peers < connectionPrevious) {
        ui->connectionBox->setText("<font color=\"OrangeRed\">" + QPeers + "</font>");
    } else {
        ui->connectionBox->setText(QPeers);
    }

    if (volume != volumePrevious) {
        ui->volumeBox->setText("<font color=\"LawnGreen\">" + qVolume + " SLG" + "</font>");
    } else {
        ui->volumeBox->setText(qVolume + " SLG");
    }

    updatePrevious(nHeight, nMinWeight, nNetworkWeight, pHardness2, pNetrate, Qldate, peers, volume);
}

void OverviewPage::updatePrevious(int nHeight, int nMinWeight, int nNetworkWeight, double pHardness2, double pNetrate, QString Qldate, int peers, int volume) {
    heightPrevious = nHeight;
    stakeminPrevious = nMinWeight;
    stakemaxPrevious = nNetworkWeight;
    hardnessPrevious2 = pHardness2;
    netPawratePrevious = pNetrate;
    datePrevious = Qldate;
    connectionPrevious = peers;
    volumePrevious = volume;
}

void OverviewPage::timerCountDown()
{
    seconds = seconds - 1;
    if (seconds == 0)
    {
        updateStatistics();
        seconds = 10;
    }
}

void OverviewPage::handleTransactionClicked(const QModelIndex &index)
{
    if(filter)
        emit transactionClicked(filter->mapToSource(index));
}

OverviewPage::~OverviewPage()
{
    delete ui;
}

void OverviewPage::setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance)
{
    int unit = model->getOptionsModel()->getDisplayUnit();
    currentBalance = balance;
    currentStake = stake;
    currentUnconfirmedBalance = unconfirmedBalance;
    currentImmatureBalance = immatureBalance;
    ui->labelBalance->setText(BitcoinUnits::formatWithUnit(unit, balance));
    ui->labelStake->setText(BitcoinUnits::formatWithUnit(unit, stake));
    ui->labelUnconfirmed->setText(BitcoinUnits::formatWithUnit(unit, unconfirmedBalance));
    ui->labelImmature->setText(BitcoinUnits::formatWithUnit(unit, immatureBalance));
    ui->labelTotal->setText(BitcoinUnits::formatWithUnit(unit, balance + stake + unconfirmedBalance + immatureBalance));

    // only show immature (newly mined) balance if it's non-zero, so as not to complicate things
    // for the non-mining users
    bool showImmature = immatureBalance != 0;
    ui->labelImmature->setVisible(showImmature);
    ui->labelImmatureText->setVisible(showImmature);
}


void OverviewPage::unlockWallet()
{
    if(model->getEncryptionStatus() == WalletModel::Locked)
    {
        AskPassphraseDialog dlg(AskPassphraseDialog::Unlock, this);
        dlg.setModel(model);
        if(dlg.exec() == QDialog::Accepted)
        {
            ui->unlockWalletButton->setText(QString("Lock Wallet"));
        }
    }
    else
    {
        model->setWalletLocked(true);
        ui->unlockWalletButton->setText(QString("Unlock Wallet"));
    }
}

void OverviewPage::setModel(WalletModel *model)
{
    this->model = model;
    if(model && model->getOptionsModel())
    {
        // Set up transaction list
        filter = new TransactionFilterProxy();
        filter->setSourceModel(model->getTransactionTableModel());
        filter->setLimit(NUM_ITEMS);
        filter->setDynamicSortFilter(true);
        filter->setSortRole(Qt::EditRole);
        filter->setShowInactive(false);
        filter->sort(TransactionTableModel::Status, Qt::DescendingOrder);

        ui->listTransactions->setModel(filter);
        ui->listTransactions->setModelColumn(TransactionTableModel::ToAddress);

        // Keep up to date with wallet
        setBalance(model->getBalance(), model->getStake(), model->getUnconfirmedBalance(), model->getImmatureBalance());
        connect(model, SIGNAL(balanceChanged(qint64, qint64, qint64, qint64)), this, SLOT(setBalance(qint64, qint64, qint64, qint64)));

        connect(model->getOptionsModel(), SIGNAL(displayUnitChanged(int)), this, SLOT(updateDisplayUnit()));

        // Unlock wallet button
        WalletModel::EncryptionStatus status = model->getEncryptionStatus();
        if(status == WalletModel::Unencrypted)
        {
            ui->unlockWalletButton->setDisabled(true);
            ui->unlockWalletButton->setText(QString("Wallet is not encrypted!"));
        }

        else
        {
            ui->unlockWalletButton->setText(QString("Unlock wallet"));
        }
        connect(ui->unlockWalletButton, SIGNAL(clicked()), this, SLOT(unlockWallet()));
    }

    // update the display unit, to not use the default ("SLG")
    updateDisplayUnit();
}

void OverviewPage::setModel2(ClientModel *model2)
{
    //used for stats
    this->model2 = model2;
}

void OverviewPage::updateDisplayUnit()
{
    if(model && model->getOptionsModel())
    {
        if(currentBalance != -1)
            setBalance(currentBalance, model->getStake(), currentUnconfirmedBalance, currentImmatureBalance);

        // Update txdelegate->unit with the current unit
        txdelegate->unit = model->getOptionsModel()->getDisplayUnit();

        ui->listTransactions->update();
    }
}

void OverviewPage::showOutOfSyncWarning(bool fShow)
{
    ui->labelWalletStatus->setVisible(fShow);
    ui->labelTransactionsStatus->setVisible(fShow);
}
