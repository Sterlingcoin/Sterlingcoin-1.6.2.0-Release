#ifndef OVERVIEWPAGE_H
#define OVERVIEWPAGE_H

#include <QWidget>


#include "clientmodel.h"
#include "main.h"
#include "wallet.h"
#include "base58.h"

#include <QTime>
#include <QTimer>
#include <QStringList>


QT_BEGIN_NAMESPACE
class QModelIndex;
QT_END_NAMESPACE

namespace Ui {
    class OverviewPage;
}
class WalletModel;
class ClientModel;
class TxViewDelegate;
class TransactionFilterProxy;

/** Overview ("home") page widget */
class OverviewPage : public QWidget
{
    Q_OBJECT

public:
    explicit OverviewPage(QWidget *parent = 0);
    ~OverviewPage();

    void setModel2(ClientModel *model2);
    int heightPrevious;
    int connectionPrevious;
    uint64_t volumePrevious;
    int stakeminPrevious;
    int stakemaxPrevious;
    double netPawratePrevious;
    QString datePrevious;
    double hardnessPrevious2;

    void setModel(WalletModel *model);
    void showOutOfSyncWarning(bool fShow);

public slots:
    void setBalance(qint64 balance, qint64 stake, qint64 unconfirmedBalance, qint64 immatureBalance);
    void unlockWallet();
    void updateStatistics();
    void timerCountDown();
    void updatePrevious(int, int, int, double, double, QString, int, int);

signals:
    void transactionClicked(const QModelIndex &index);

private:
    Ui::OverviewPage *ui;
    WalletModel *model;
    qint64 currentBalance;
    qint64 currentStake;
    qint64 currentUnconfirmedBalance;
    qint64 currentImmatureBalance;
    ClientModel *model2;
    TxViewDelegate *txdelegate;
    TransactionFilterProxy *filter;

private slots:
    void updateDisplayUnit();
    void handleTransactionClicked(const QModelIndex &index);
};

#endif // OVERVIEWPAGE_H
