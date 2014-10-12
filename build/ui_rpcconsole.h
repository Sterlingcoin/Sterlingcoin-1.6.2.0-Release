/********************************************************************************
** Form generated from reading UI file 'rpcconsole.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RPCCONSOLE_H
#define UI_RPCCONSOLE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RPCConsole
{
public:
    QVBoxLayout *verticalLayout_2;
    QTabWidget *tabWidget;
    QWidget *tab_info;
    QGridLayout *gridLayout;
    QLabel *label_9;
    QLabel *label_5;
    QLabel *clientName;
    QLabel *label_6;
    QLabel *clientVersion;
    QLabel *label_14;
    QLabel *openSSLVersion;
    QLabel *label_12;
    QLabel *buildDate;
    QLabel *label_13;
    QLabel *startupTime;
    QLabel *label_11;
    QLabel *label_7;
    QLabel *numberOfConnections;
    QLabel *label_8;
    QCheckBox *isTestNet;
    QLabel *label_10;
    QLabel *label_3;
    QLabel *numberOfBlocks;
    QLabel *label_4;
    QLabel *totalBlocks;
    QLabel *label_2;
    QLabel *lastBlockTime;
    QSpacerItem *verticalSpacer_2;
    QLabel *labelDebugLogfile;
    QPushButton *openDebugLogfileButton;
    QLabel *labelCLOptions;
    QPushButton *showCLOptionsButton;
    QSpacerItem *verticalSpacer;
    QWidget *tab_console;
    QVBoxLayout *verticalLayout_3;
    QTextEdit *messagesWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLineEdit *lineEdit;
    QPushButton *clearButton;

    void setupUi(QDialog *RPCConsole)
    {
        if (RPCConsole->objectName().isEmpty())
            RPCConsole->setObjectName(QStringLiteral("RPCConsole"));
        RPCConsole->resize(740, 491);
        QPalette palette;
        QBrush brush(QColor(255, 255, 255, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush1(QColor(207, 207, 207, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Light, brush1);
        QBrush brush2(QColor(172, 172, 172, 255));
        brush2.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Midlight, brush2);
        QBrush brush3(QColor(69, 69, 69, 255));
        brush3.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Dark, brush3);
        QBrush brush4(QColor(92, 92, 92, 255));
        brush4.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Active, QPalette::Text, brush);
        palette.setBrush(QPalette::Active, QPalette::BrightText, brush);
        QBrush brush5(QColor(0, 0, 0, 255));
        brush5.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        QBrush brush6(QColor(138, 138, 138, 255));
        brush6.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette.setBrush(QPalette::Active, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Active, QPalette::AlternateBase, brush);
        QBrush brush7(QColor(255, 255, 220, 255));
        brush7.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Light, brush1);
        palette.setBrush(QPalette::Inactive, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Inactive, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Inactive, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette.setBrush(QPalette::Inactive, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette.setBrush(QPalette::Inactive, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Light, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::Midlight, brush2);
        palette.setBrush(QPalette::Disabled, QPalette::Dark, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Mid, brush4);
        palette.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::BrightText, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush3);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette.setBrush(QPalette::Disabled, QPalette::Shadow, brush5);
        palette.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush7);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush5);
        RPCConsole->setPalette(palette);
        RPCConsole->setAutoFillBackground(true);
        verticalLayout_2 = new QVBoxLayout(RPCConsole);
        verticalLayout_2->setObjectName(QStringLiteral("verticalLayout_2"));
        tabWidget = new QTabWidget(RPCConsole);
        tabWidget->setObjectName(QStringLiteral("tabWidget"));
        QPalette palette1;
        palette1.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Text, brush);
        palette1.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Active, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipBase, brush);
        QBrush brush8(QColor(76, 76, 76, 255));
        brush8.setStyle(Qt::SolidPattern);
        palette1.setBrush(QPalette::Active, QPalette::ToolTipText, brush8);
        palette1.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush8);
        palette1.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette1.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::NoRole, brush6);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush);
        palette1.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush8);
        tabWidget->setPalette(palette1);
        tabWidget->setAutoFillBackground(false);
        tabWidget->setStyleSheet(QStringLiteral("background-color: rgb(138, 138, 138);"));
        tab_info = new QWidget();
        tab_info->setObjectName(QStringLiteral("tab_info"));
        gridLayout = new QGridLayout(tab_info);
        gridLayout->setObjectName(QStringLiteral("gridLayout"));
        gridLayout->setHorizontalSpacing(12);
        label_9 = new QLabel(tab_info);
        label_9->setObjectName(QStringLiteral("label_9"));
        QPalette palette2;
        palette2.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette2.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette2.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette2.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_9->setPalette(palette2);
        QFont font;
        font.setBold(true);
        font.setWeight(75);
        label_9->setFont(font);
        label_9->setAutoFillBackground(false);

        gridLayout->addWidget(label_9, 0, 0, 1, 1);

        label_5 = new QLabel(tab_info);
        label_5->setObjectName(QStringLiteral("label_5"));
        QPalette palette3;
        palette3.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette3.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette3.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette3.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_5->setPalette(palette3);
        label_5->setAutoFillBackground(false);

        gridLayout->addWidget(label_5, 1, 0, 1, 1);

        clientName = new QLabel(tab_info);
        clientName->setObjectName(QStringLiteral("clientName"));
        QPalette palette4;
        palette4.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette4.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette4.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette4.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        clientName->setPalette(palette4);
        clientName->setCursor(QCursor(Qt::IBeamCursor));
        clientName->setAutoFillBackground(false);
        clientName->setTextFormat(Qt::PlainText);
        clientName->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientName, 1, 1, 1, 1);

        label_6 = new QLabel(tab_info);
        label_6->setObjectName(QStringLiteral("label_6"));
        QPalette palette5;
        palette5.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette5.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette5.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette5.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_6->setPalette(palette5);
        label_6->setAutoFillBackground(false);

        gridLayout->addWidget(label_6, 2, 0, 1, 1);

        clientVersion = new QLabel(tab_info);
        clientVersion->setObjectName(QStringLiteral("clientVersion"));
        QPalette palette6;
        palette6.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette6.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette6.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette6.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        clientVersion->setPalette(palette6);
        clientVersion->setCursor(QCursor(Qt::IBeamCursor));
        clientVersion->setAutoFillBackground(false);
        clientVersion->setTextFormat(Qt::PlainText);
        clientVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(clientVersion, 2, 1, 1, 1);

        label_14 = new QLabel(tab_info);
        label_14->setObjectName(QStringLiteral("label_14"));
        QPalette palette7;
        palette7.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette7.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette7.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette7.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_14->setPalette(palette7);
        label_14->setAutoFillBackground(false);
        label_14->setIndent(10);

        gridLayout->addWidget(label_14, 3, 0, 1, 1);

        openSSLVersion = new QLabel(tab_info);
        openSSLVersion->setObjectName(QStringLiteral("openSSLVersion"));
        QPalette palette8;
        palette8.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette8.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette8.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette8.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        openSSLVersion->setPalette(palette8);
        openSSLVersion->setCursor(QCursor(Qt::IBeamCursor));
        openSSLVersion->setAutoFillBackground(false);
        openSSLVersion->setTextFormat(Qt::PlainText);
        openSSLVersion->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(openSSLVersion, 3, 1, 1, 1);

        label_12 = new QLabel(tab_info);
        label_12->setObjectName(QStringLiteral("label_12"));
        QPalette palette9;
        palette9.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette9.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette9.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette9.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_12->setPalette(palette9);
        label_12->setAutoFillBackground(false);

        gridLayout->addWidget(label_12, 4, 0, 1, 1);

        buildDate = new QLabel(tab_info);
        buildDate->setObjectName(QStringLiteral("buildDate"));
        QPalette palette10;
        palette10.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette10.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette10.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette10.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        buildDate->setPalette(palette10);
        buildDate->setCursor(QCursor(Qt::IBeamCursor));
        buildDate->setAutoFillBackground(false);
        buildDate->setTextFormat(Qt::PlainText);
        buildDate->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(buildDate, 4, 1, 1, 1);

        label_13 = new QLabel(tab_info);
        label_13->setObjectName(QStringLiteral("label_13"));
        QPalette palette11;
        palette11.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette11.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette11.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette11.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_13->setPalette(palette11);
        label_13->setAutoFillBackground(false);

        gridLayout->addWidget(label_13, 5, 0, 1, 1);

        startupTime = new QLabel(tab_info);
        startupTime->setObjectName(QStringLiteral("startupTime"));
        QPalette palette12;
        palette12.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette12.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette12.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette12.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        startupTime->setPalette(palette12);
        startupTime->setCursor(QCursor(Qt::IBeamCursor));
        startupTime->setAutoFillBackground(false);
        startupTime->setTextFormat(Qt::PlainText);
        startupTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(startupTime, 5, 1, 1, 1);

        label_11 = new QLabel(tab_info);
        label_11->setObjectName(QStringLiteral("label_11"));
        QPalette palette13;
        palette13.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette13.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette13.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette13.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_11->setPalette(palette13);
        label_11->setFont(font);
        label_11->setAutoFillBackground(false);

        gridLayout->addWidget(label_11, 6, 0, 1, 1);

        label_7 = new QLabel(tab_info);
        label_7->setObjectName(QStringLiteral("label_7"));
        QPalette palette14;
        palette14.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette14.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette14.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette14.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_7->setPalette(palette14);
        label_7->setAutoFillBackground(false);

        gridLayout->addWidget(label_7, 7, 0, 1, 1);

        numberOfConnections = new QLabel(tab_info);
        numberOfConnections->setObjectName(QStringLiteral("numberOfConnections"));
        QPalette palette15;
        palette15.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette15.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette15.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette15.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        numberOfConnections->setPalette(palette15);
        numberOfConnections->setCursor(QCursor(Qt::IBeamCursor));
        numberOfConnections->setAutoFillBackground(false);
        numberOfConnections->setTextFormat(Qt::PlainText);
        numberOfConnections->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfConnections, 7, 1, 1, 1);

        label_8 = new QLabel(tab_info);
        label_8->setObjectName(QStringLiteral("label_8"));
        QPalette palette16;
        palette16.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette16.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette16.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette16.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_8->setPalette(palette16);
        label_8->setAutoFillBackground(false);

        gridLayout->addWidget(label_8, 8, 0, 1, 1);

        isTestNet = new QCheckBox(tab_info);
        isTestNet->setObjectName(QStringLiteral("isTestNet"));
        isTestNet->setEnabled(false);

        gridLayout->addWidget(isTestNet, 8, 1, 1, 1);

        label_10 = new QLabel(tab_info);
        label_10->setObjectName(QStringLiteral("label_10"));
        QPalette palette17;
        palette17.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette17.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette17.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette17.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_10->setPalette(palette17);
        label_10->setFont(font);
        label_10->setAutoFillBackground(false);

        gridLayout->addWidget(label_10, 9, 0, 1, 1);

        label_3 = new QLabel(tab_info);
        label_3->setObjectName(QStringLiteral("label_3"));
        QPalette palette18;
        palette18.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette18.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette18.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette18.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_3->setPalette(palette18);
        label_3->setAutoFillBackground(false);

        gridLayout->addWidget(label_3, 10, 0, 1, 1);

        numberOfBlocks = new QLabel(tab_info);
        numberOfBlocks->setObjectName(QStringLiteral("numberOfBlocks"));
        QPalette palette19;
        palette19.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette19.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette19.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette19.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        numberOfBlocks->setPalette(palette19);
        numberOfBlocks->setCursor(QCursor(Qt::IBeamCursor));
        numberOfBlocks->setAutoFillBackground(false);
        numberOfBlocks->setTextFormat(Qt::PlainText);
        numberOfBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(numberOfBlocks, 10, 1, 1, 1);

        label_4 = new QLabel(tab_info);
        label_4->setObjectName(QStringLiteral("label_4"));
        QPalette palette20;
        palette20.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette20.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette20.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette20.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_4->setPalette(palette20);
        label_4->setAutoFillBackground(false);

        gridLayout->addWidget(label_4, 11, 0, 1, 1);

        totalBlocks = new QLabel(tab_info);
        totalBlocks->setObjectName(QStringLiteral("totalBlocks"));
        QPalette palette21;
        palette21.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette21.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette21.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette21.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette21.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette21.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        totalBlocks->setPalette(palette21);
        totalBlocks->setCursor(QCursor(Qt::IBeamCursor));
        totalBlocks->setAutoFillBackground(false);
        totalBlocks->setTextFormat(Qt::PlainText);
        totalBlocks->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(totalBlocks, 11, 1, 1, 1);

        label_2 = new QLabel(tab_info);
        label_2->setObjectName(QStringLiteral("label_2"));
        QPalette palette22;
        palette22.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette22.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette22.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette22.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label_2->setPalette(palette22);
        label_2->setAutoFillBackground(false);

        gridLayout->addWidget(label_2, 12, 0, 1, 1);

        lastBlockTime = new QLabel(tab_info);
        lastBlockTime->setObjectName(QStringLiteral("lastBlockTime"));
        QPalette palette23;
        palette23.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette23.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette23.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette23.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        lastBlockTime->setPalette(palette23);
        lastBlockTime->setCursor(QCursor(Qt::IBeamCursor));
        lastBlockTime->setAutoFillBackground(false);
        lastBlockTime->setTextFormat(Qt::PlainText);
        lastBlockTime->setTextInteractionFlags(Qt::LinksAccessibleByMouse|Qt::TextSelectableByKeyboard|Qt::TextSelectableByMouse);

        gridLayout->addWidget(lastBlockTime, 12, 1, 1, 1);

        verticalSpacer_2 = new QSpacerItem(20, 20, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer_2, 13, 0, 1, 1);

        labelDebugLogfile = new QLabel(tab_info);
        labelDebugLogfile->setObjectName(QStringLiteral("labelDebugLogfile"));
        QPalette palette24;
        palette24.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette24.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette24.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette24.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette24.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette24.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelDebugLogfile->setPalette(palette24);
        labelDebugLogfile->setFont(font);
        labelDebugLogfile->setAutoFillBackground(false);

        gridLayout->addWidget(labelDebugLogfile, 14, 0, 1, 1);

        openDebugLogfileButton = new QPushButton(tab_info);
        openDebugLogfileButton->setObjectName(QStringLiteral("openDebugLogfileButton"));
        QPalette palette25;
        QBrush brush9(QColor(60, 60, 60, 255));
        brush9.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        QBrush brush10(QColor(178, 178, 178, 255));
        brush10.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette25.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette25.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette25.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette25.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette25.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette25.setBrush(QPalette::Active, QPalette::Shadow, brush);
        QBrush brush11(QColor(240, 119, 70, 255));
        brush11.setStyle(Qt::SolidPattern);
        palette25.setBrush(QPalette::Active, QPalette::Highlight, brush11);
        palette25.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette25.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette25.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette25.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette25.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette25.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette25.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        openDebugLogfileButton->setPalette(palette25);
        openDebugLogfileButton->setAutoFillBackground(false);
        openDebugLogfileButton->setStyleSheet(QStringLiteral("background-color: rgb(178, 178, 178);"));
        openDebugLogfileButton->setAutoDefault(false);

        gridLayout->addWidget(openDebugLogfileButton, 15, 0, 1, 1);

        labelCLOptions = new QLabel(tab_info);
        labelCLOptions->setObjectName(QStringLiteral("labelCLOptions"));
        QPalette palette26;
        palette26.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette26.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette26.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette26.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette26.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette26.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        labelCLOptions->setPalette(palette26);
        labelCLOptions->setFont(font);
        labelCLOptions->setAutoFillBackground(false);

        gridLayout->addWidget(labelCLOptions, 16, 0, 1, 1);

        showCLOptionsButton = new QPushButton(tab_info);
        showCLOptionsButton->setObjectName(QStringLiteral("showCLOptionsButton"));
        QPalette palette27;
        palette27.setBrush(QPalette::Active, QPalette::WindowText, brush9);
        palette27.setBrush(QPalette::Active, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette27.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette27.setBrush(QPalette::Active, QPalette::Text, brush9);
        palette27.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Active, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Active, QPalette::Highlight, brush11);
        palette27.setBrush(QPalette::Inactive, QPalette::WindowText, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Text, brush9);
        palette27.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Inactive, QPalette::Highlight, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Button, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::ButtonText, brush6);
        palette27.setBrush(QPalette::Disabled, QPalette::Base, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Window, brush10);
        palette27.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette27.setBrush(QPalette::Disabled, QPalette::Highlight, brush10);
        showCLOptionsButton->setPalette(palette27);
        showCLOptionsButton->setAutoFillBackground(false);
        showCLOptionsButton->setStyleSheet(QStringLiteral("background-color: rgb(178, 178, 178);"));
        showCLOptionsButton->setAutoDefault(false);

        gridLayout->addWidget(showCLOptionsButton, 17, 0, 1, 1);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        gridLayout->addItem(verticalSpacer, 18, 0, 1, 1);

        gridLayout->setColumnStretch(1, 1);
        tabWidget->addTab(tab_info, QString());
        tab_console = new QWidget();
        tab_console->setObjectName(QStringLiteral("tab_console"));
        verticalLayout_3 = new QVBoxLayout(tab_console);
        verticalLayout_3->setSpacing(3);
        verticalLayout_3->setObjectName(QStringLiteral("verticalLayout_3"));
        messagesWidget = new QTextEdit(tab_console);
        messagesWidget->setObjectName(QStringLiteral("messagesWidget"));
        messagesWidget->setMinimumSize(QSize(0, 100));
        QPalette palette28;
        palette28.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Light, brush);
        palette28.setBrush(QPalette::Active, QPalette::Midlight, brush);
        palette28.setBrush(QPalette::Active, QPalette::Dark, brush);
        palette28.setBrush(QPalette::Active, QPalette::Mid, brush);
        palette28.setBrush(QPalette::Active, QPalette::Text, brush);
        palette28.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Active, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Active, QPalette::NoRole, brush);
        palette28.setBrush(QPalette::Active, QPalette::ToolTipBase, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Light, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Midlight, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Dark, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Mid, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Inactive, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::NoRole, brush);
        palette28.setBrush(QPalette::Inactive, QPalette::ToolTipBase, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::WindowText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Light, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Midlight, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Dark, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Mid, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Text, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ButtonText, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        palette28.setBrush(QPalette::Disabled, QPalette::Shadow, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::NoRole, brush);
        palette28.setBrush(QPalette::Disabled, QPalette::ToolTipBase, brush6);
        messagesWidget->setPalette(palette28);
        messagesWidget->setAutoFillBackground(true);
        messagesWidget->setReadOnly(true);
        messagesWidget->setProperty("tabKeyNavigation", QVariant(false));
        messagesWidget->setProperty("columnCount", QVariant(2));

        verticalLayout_3->addWidget(messagesWidget);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(3);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        label = new QLabel(tab_console);
        label->setObjectName(QStringLiteral("label"));
        QPalette palette29;
        palette29.setBrush(QPalette::Active, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Active, QPalette::Button, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Text, brush);
        palette29.setBrush(QPalette::Active, QPalette::Base, brush6);
        palette29.setBrush(QPalette::Active, QPalette::Window, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::WindowText, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Button, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Text, brush);
        palette29.setBrush(QPalette::Inactive, QPalette::Base, brush6);
        palette29.setBrush(QPalette::Inactive, QPalette::Window, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::WindowText, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Button, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Text, brush3);
        palette29.setBrush(QPalette::Disabled, QPalette::Base, brush6);
        palette29.setBrush(QPalette::Disabled, QPalette::Window, brush6);
        label->setPalette(palette29);
        label->setAutoFillBackground(false);
        label->setText(QStringLiteral(">"));

        horizontalLayout->addWidget(label);

        lineEdit = new QLineEdit(tab_console);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        QPalette palette30;
        palette30.setBrush(QPalette::Active, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Active, QPalette::Button, brush);
        QBrush brush12(QColor(90, 104, 118, 255));
        brush12.setStyle(Qt::SolidPattern);
        palette30.setBrush(QPalette::Active, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Active, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Active, QPalette::Base, brush);
        palette30.setBrush(QPalette::Active, QPalette::Window, brush);
        palette30.setBrush(QPalette::Active, QPalette::AlternateBase, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::WindowText, brush6);
        palette30.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Text, brush12);
        palette30.setBrush(QPalette::Inactive, QPalette::ButtonText, brush12);
        palette30.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette30.setBrush(QPalette::Inactive, QPalette::AlternateBase, brush6);
        QBrush brush13(QColor(159, 158, 158, 255));
        brush13.setStyle(Qt::SolidPattern);
        palette30.setBrush(QPalette::Disabled, QPalette::WindowText, brush13);
        palette30.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Text, brush13);
        palette30.setBrush(QPalette::Disabled, QPalette::ButtonText, brush13);
        palette30.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::Window, brush);
        palette30.setBrush(QPalette::Disabled, QPalette::AlternateBase, brush6);
        lineEdit->setPalette(palette30);
        lineEdit->setFocusPolicy(Qt::NoFocus);
        lineEdit->setAutoFillBackground(false);
        lineEdit->setStyleSheet(QStringLiteral("background-color: rgb(255, 255, 255);"));

        horizontalLayout->addWidget(lineEdit);

        clearButton = new QPushButton(tab_console);
        clearButton->setObjectName(QStringLiteral("clearButton"));
        clearButton->setMaximumSize(QSize(24, 24));
        clearButton->setAutoFillBackground(false);
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/remove"), QSize(), QIcon::Normal, QIcon::Off);
        clearButton->setIcon(icon);
        clearButton->setShortcut(QStringLiteral("Ctrl+L"));
        clearButton->setAutoDefault(false);

        horizontalLayout->addWidget(clearButton);


        verticalLayout_3->addLayout(horizontalLayout);

        tabWidget->addTab(tab_console, QString());

        verticalLayout_2->addWidget(tabWidget);


        retranslateUi(RPCConsole);

        tabWidget->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(RPCConsole);
    } // setupUi

    void retranslateUi(QDialog *RPCConsole)
    {
        RPCConsole->setWindowTitle(QApplication::translate("RPCConsole", "Sterlingcoin - Debug window", 0));
        label_9->setText(QApplication::translate("RPCConsole", "Sterlingcoin Core", 0));
        label_5->setText(QApplication::translate("RPCConsole", "Client name", 0));
        clientName->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_6->setText(QApplication::translate("RPCConsole", "Client version", 0));
        clientVersion->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_14->setText(QApplication::translate("RPCConsole", "Using OpenSSL version", 0));
        openSSLVersion->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_12->setText(QApplication::translate("RPCConsole", "Build date", 0));
        buildDate->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_13->setText(QApplication::translate("RPCConsole", "Startup time", 0));
        startupTime->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_11->setText(QApplication::translate("RPCConsole", "Network", 0));
        label_7->setText(QApplication::translate("RPCConsole", "Number of connections", 0));
        numberOfConnections->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_8->setText(QApplication::translate("RPCConsole", "On testnet", 0));
        isTestNet->setText(QString());
        label_10->setText(QApplication::translate("RPCConsole", "Block chain", 0));
        label_3->setText(QApplication::translate("RPCConsole", "Current number of blocks", 0));
        numberOfBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_4->setText(QApplication::translate("RPCConsole", "Estimated total blocks", 0));
        totalBlocks->setText(QApplication::translate("RPCConsole", "N/A", 0));
        label_2->setText(QApplication::translate("RPCConsole", "Last block time", 0));
        lastBlockTime->setText(QApplication::translate("RPCConsole", "N/A", 0));
        labelDebugLogfile->setText(QApplication::translate("RPCConsole", "Debug log file", 0));
#ifndef QT_NO_TOOLTIP
        openDebugLogfileButton->setToolTip(QApplication::translate("RPCConsole", "Open the Sterlingcoin debug log file from the current data directory. This can take a few seconds for large log files.", 0));
#endif // QT_NO_TOOLTIP
        openDebugLogfileButton->setText(QApplication::translate("RPCConsole", "&Open", 0));
        labelCLOptions->setText(QApplication::translate("RPCConsole", "Command-line options", 0));
#ifndef QT_NO_TOOLTIP
        showCLOptionsButton->setToolTip(QApplication::translate("RPCConsole", "Show the Sterlingcoin-Qt help message to get a list with possible Sterlingcoin command-line options.", 0));
#endif // QT_NO_TOOLTIP
        showCLOptionsButton->setText(QApplication::translate("RPCConsole", "&Show", 0));
        tabWidget->setTabText(tabWidget->indexOf(tab_info), QApplication::translate("RPCConsole", "&Information", 0));
#ifndef QT_NO_TOOLTIP
        clearButton->setToolTip(QApplication::translate("RPCConsole", "Clear console", 0));
#endif // QT_NO_TOOLTIP
        clearButton->setText(QString());
        tabWidget->setTabText(tabWidget->indexOf(tab_console), QApplication::translate("RPCConsole", "&Console", 0));
    } // retranslateUi

};

namespace Ui {
    class RPCConsole: public Ui_RPCConsole {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RPCCONSOLE_H
