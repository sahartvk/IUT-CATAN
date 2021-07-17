/********************************************************************************
** Form generated from reading UI file 'catan1.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATAN1_H
#define UI_CATAN1_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_catan1
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_4;
    QLabel *label_5;
    QPushButton *next;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *catan1)
    {
        if (catan1->objectName().isEmpty())
            catan1->setObjectName(QString::fromUtf8("catan1"));
        catan1->resize(991, 618);
        centralwidget = new QWidget(catan1);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 991, 581));
        QFont font;
        font.setPointSize(9);
        label->setFont(font);
        label->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani.png")));
        label_4 = new QLabel(centralwidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(240, 30, 621, 131));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bookman Old Style")});
        font1.setPointSize(72);
        font1.setBold(false);
        label_4->setFont(font1);
        label_5 = new QLabel(centralwidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(310, 90, 471, 151));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bell MT")});
        font2.setPointSize(24);
        label_5->setFont(font2);
        next = new QPushButton(centralwidget);
        next->setObjectName(QString::fromUtf8("next"));
        next->setGeometry(QRect(860, 500, 121, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font3.setPointSize(20);
        font3.setBold(true);
        next->setFont(font3);
        catan1->setCentralWidget(centralwidget);
        menubar = new QMenuBar(catan1);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 991, 26));
        catan1->setMenuBar(menubar);
        statusbar = new QStatusBar(catan1);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        catan1->setStatusBar(statusbar);

        retranslateUi(catan1);

        QMetaObject::connectSlotsByName(catan1);
    } // setupUi

    void retranslateUi(QMainWindow *catan1)
    {
        catan1->setWindowTitle(QCoreApplication::translate("catan1", "MainWindow", nullptr));
        label->setText(QString());
        label_4->setText(QCoreApplication::translate("catan1", "--CATAN--", nullptr));
        label_5->setText(QCoreApplication::translate("catan1", "TRADE  BUILD  SETTLE", nullptr));
        next->setText(QCoreApplication::translate("catan1", "NEXT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class catan1: public Ui_catan1 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATAN1_H
