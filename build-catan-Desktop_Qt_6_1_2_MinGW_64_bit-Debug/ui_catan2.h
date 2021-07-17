/********************************************************************************
** Form generated from reading UI file 'catan2.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATAN2_H
#define UI_CATAN2_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_catan2
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *label1;
    QLabel *label2;
    QPushButton *sign_in;
    QPushButton *sign_up;
    QPushButton *setting;
    QPushButton *guide;
    QPushButton *quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *catan2)
    {
        if (catan2->objectName().isEmpty())
            catan2->setObjectName(QString::fromUtf8("catan2"));
        catan2->resize(1001, 628);
        centralwidget = new QWidget(catan2);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, -20, 1001, 621));
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani3.jpg")));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(680, 30, 211, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT")});
        font.setPointSize(36);
        font.setItalic(false);
        font.setUnderline(true);
        label1->setFont(font);
        label1->setStyleSheet(QString::fromUtf8("color:yellow;"));
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(710, 90, 151, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bodoni MT")});
        font1.setPointSize(16);
        label2->setFont(font1);
        label2->setStyleSheet(QString::fromUtf8("color:orange;"));
        sign_in = new QPushButton(centralwidget);
        sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->setGeometry(QRect(690, 240, 191, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bell MT")});
        font2.setPointSize(20);
        font2.setBold(false);
        sign_in->setFont(font2);
        sign_in->setStyleSheet(QString::fromUtf8(""));
        sign_up = new QPushButton(centralwidget);
        sign_up->setObjectName(QString::fromUtf8("sign_up"));
        sign_up->setGeometry(QRect(690, 320, 191, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bell MT")});
        font3.setPointSize(20);
        sign_up->setFont(font3);
        setting = new QPushButton(centralwidget);
        setting->setObjectName(QString::fromUtf8("setting"));
        setting->setGeometry(QRect(800, 410, 31, 31));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix1/image/2602305.png"), QSize(), QIcon::Normal, QIcon::Off);
        setting->setIcon(icon);
        guide = new QPushButton(centralwidget);
        guide->setObjectName(QString::fromUtf8("guide"));
        guide->setGeometry(QRect(740, 410, 31, 31));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix1/image/21504-middle.png"), QSize(), QIcon::Normal, QIcon::Off);
        guide->setIcon(icon1);
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(740, 480, 93, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bodoni MT Condensed")});
        font4.setPointSize(16);
        quit->setFont(font4);
        catan2->setCentralWidget(centralwidget);
        menubar = new QMenuBar(catan2);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1001, 26));
        catan2->setMenuBar(menubar);
        statusbar = new QStatusBar(catan2);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        catan2->setStatusBar(statusbar);

        retranslateUi(catan2);

        QMetaObject::connectSlotsByName(catan2);
    } // setupUi

    void retranslateUi(QMainWindow *catan2)
    {
        catan2->setWindowTitle(QCoreApplication::translate("catan2", "MainWindow", nullptr));
        background->setText(QString());
        label1->setText(QCoreApplication::translate("catan2", "CATAN", nullptr));
        label2->setText(QCoreApplication::translate("catan2", "UNIVERSE", nullptr));
        sign_in->setText(QCoreApplication::translate("catan2", "SIGN IN", nullptr));
        sign_up->setText(QCoreApplication::translate("catan2", "SIGN UP", nullptr));
        setting->setText(QString());
        guide->setText(QString());
        quit->setText(QCoreApplication::translate("catan2", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class catan2: public Ui_catan2 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATAN2_H
