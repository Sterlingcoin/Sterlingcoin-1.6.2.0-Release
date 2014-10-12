/********************************************************************************
** Form generated from reading UI file 'fiatpage.ui'
**
** Created by: Qt User Interface Compiler version 5.2.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FIATPAGE_H
#define UI_FIATPAGE_H

#include <QtCore/QVariant>
#include <QtWebKitWidgets/QWebView>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_fiatPage
{
public:
    QVBoxLayout *verticalLayout;
    QWebView *webView;
    QFrame *frame;
    QFrame *frame_3;
    QPushButton *back;
    QPushButton *reload;

    void setupUi(QWidget *fiatPage)
    {
        if (fiatPage->objectName().isEmpty())
            fiatPage->setObjectName(QStringLiteral("fiatPage"));
        fiatPage->resize(811, 381);
        QPalette palette;
        QBrush brush(QColor(138, 138, 138, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::Button, brush);
        palette.setBrush(QPalette::Active, QPalette::Base, brush);
        palette.setBrush(QPalette::Active, QPalette::Window, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Button, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Base, brush);
        palette.setBrush(QPalette::Inactive, QPalette::Window, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Button, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Base, brush);
        palette.setBrush(QPalette::Disabled, QPalette::Window, brush);
        fiatPage->setPalette(palette);
        fiatPage->setAutoFillBackground(false);
        fiatPage->setStyleSheet(QLatin1String("QWidget {background : #8a8a8a}\n"
"QWebView #coinsoorten {display: none; visibility: hidden;}\n"
"QWebView #purchase {display:none; visibility: hidden;}"));
        verticalLayout = new QVBoxLayout(fiatPage);
        verticalLayout->setObjectName(QStringLiteral("verticalLayout"));
        webView = new QWebView(fiatPage);
        webView->setObjectName(QStringLiteral("webView"));
        webView->setStyleSheet(QLatin1String("background-color: rgb(255, 255, 255);\n"
"QWebView #coinsoorten {display: none; visibility: hidden;}\n"
"QWebView #purchase {display: none; visibility: hidden;}\n"
"QWebView #currencies {display: none; visibility: hidden;}"));
        webView->setProperty("url", QVariant(QUrl(QStringLiteral("about:blank"))));

        verticalLayout->addWidget(webView);

        frame = new QFrame(fiatPage);
        frame->setObjectName(QStringLiteral("frame"));
        frame->setMinimumSize(QSize(0, 50));
        frame->setStyleSheet(QLatin1String("#coinsoorten {display: none; visibility: hidden;}\n"
"#purchase {display:none; visibility: hidden;}"));
        frame->setFrameShape(QFrame::NoFrame);
        frame->setFrameShadow(QFrame::Raised);
        frame_3 = new QFrame(frame);
        frame_3->setObjectName(QStringLiteral("frame_3"));
        frame_3->setGeometry(QRect(-10, 10, 801, 41));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(frame_3->sizePolicy().hasHeightForWidth());
        frame_3->setSizePolicy(sizePolicy);
        frame_3->setAutoFillBackground(false);
        frame_3->setStyleSheet(QLatin1String("QFrame {background : #8a8a8a\n"
"}\n"
""));
        frame_3->setFrameShape(QFrame::NoFrame);
        frame_3->setFrameShadow(QFrame::Raised);
        back = new QPushButton(frame_3);
        back->setObjectName(QStringLiteral("back"));
        back->setGeometry(QRect(280, 10, 120, 27));
        QSizePolicy sizePolicy1(QSizePolicy::Fixed, QSizePolicy::Fixed);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(back->sizePolicy().hasHeightForWidth());
        back->setSizePolicy(sizePolicy1);
        back->setMinimumSize(QSize(120, 25));
        back->setMaximumSize(QSize(85, 16777215));
        QFont font;
        font.setFamily(QStringLiteral("Lato"));
        font.setPointSize(10);
        font.setStyleStrategy(QFont::PreferAntialias);
        back->setFont(font);
        back->setStyleSheet(QLatin1String("QPushButton { background : #5a6876; border : none; color: #ffffff} QPushButton:hover { background : #b2b2b2; } \n"
"QPushButton:pressed { background : #b2b2b2; }"));
        QIcon icon;
        icon.addFile(QStringLiteral(":/icons/back"), QSize(), QIcon::Normal, QIcon::Off);
        back->setIcon(icon);
        back->setIconSize(QSize(12, 12));
        reload = new QPushButton(frame_3);
        reload->setObjectName(QStringLiteral("reload"));
        reload->setGeometry(QRect(420, 10, 120, 27));
        sizePolicy1.setHeightForWidth(reload->sizePolicy().hasHeightForWidth());
        reload->setSizePolicy(sizePolicy1);
        reload->setMinimumSize(QSize(120, 25));
        reload->setMaximumSize(QSize(85, 16777215));
        reload->setFont(font);
        reload->setStyleSheet(QLatin1String("QPushButton { background : #5a6876; border : none; color: #ffffff} QPushButton:hover { background : #b2b2b2; } \n"
"QPushButton:pressed { background : #b2b2b2; }"));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/icons/reload"), QSize(), QIcon::Normal, QIcon::Off);
        reload->setIcon(icon1);
        reload->setIconSize(QSize(12, 12));

        verticalLayout->addWidget(frame);


        retranslateUi(fiatPage);

        QMetaObject::connectSlotsByName(fiatPage);
    } // setupUi

    void retranslateUi(QWidget *fiatPage)
    {
        fiatPage->setWindowTitle(QApplication::translate("fiatPage", "Form", 0));
        back->setText(QApplication::translate("fiatPage", "Back", 0));
        reload->setText(QApplication::translate("fiatPage", "Reload", 0));
    } // retranslateUi

};

namespace Ui {
    class fiatPage: public Ui_fiatPage {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FIATPAGE_H
