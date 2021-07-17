/********************************************************************************
** Form generated from reading UI file 'catan3.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATAN3_H
#define UI_CATAN3_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_catan3
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label1;
    QLabel *label2;
    QLabel *question;
    QPushButton *threeplayer;
    QPushButton *fourplayer;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *catan3)
    {
        if (catan3->objectName().isEmpty())
            catan3->setObjectName(QString::fromUtf8("catan3"));
        catan3->resize(1000, 613);
        centralwidget = new QWidget(catan3);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(0, 0, 1001, 561));
        label->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani6.jpg")));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(690, 20, 211, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT")});
        font.setPointSize(36);
        font.setItalic(false);
        font.setUnderline(true);
        label1->setFont(font);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(720, 80, 151, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bodoni MT")});
        font1.setPointSize(16);
        label2->setFont(font1);
        question = new QLabel(centralwidget);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(720, 170, 161, 41));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bodoni MT")});
        font2.setPointSize(16);
        font2.setItalic(false);
        question->setFont(font2);
        threeplayer = new QPushButton(centralwidget);
        threeplayer->setObjectName(QString::fromUtf8("threeplayer"));
        threeplayer->setGeometry(QRect(710, 240, 171, 28));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bodoni MT")});
        font3.setPointSize(12);
        font3.setItalic(true);
        threeplayer->setFont(font3);
        fourplayer = new QPushButton(centralwidget);
        fourplayer->setObjectName(QString::fromUtf8("fourplayer"));
        fourplayer->setGeometry(QRect(710, 280, 171, 28));
        fourplayer->setFont(font3);
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(20, 490, 101, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font4.setPointSize(24);
        back->setFont(font4);
        catan3->setCentralWidget(centralwidget);
        menubar = new QMenuBar(catan3);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1000, 26));
        catan3->setMenuBar(menubar);
        statusbar = new QStatusBar(catan3);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        catan3->setStatusBar(statusbar);

        retranslateUi(catan3);

        QMetaObject::connectSlotsByName(catan3);
    } // setupUi

    void retranslateUi(QMainWindow *catan3)
    {
        catan3->setWindowTitle(QCoreApplication::translate("catan3", "MainWindow", nullptr));
        label->setText(QString());
        label1->setText(QCoreApplication::translate("catan3", "CATAN", nullptr));
        label2->setText(QCoreApplication::translate("catan3", "UNIVERSE", nullptr));
        question->setText(QCoreApplication::translate("catan3", "Which One ?", nullptr));
        threeplayer->setText(QCoreApplication::translate("catan3", "Three-player Game", nullptr));
        fourplayer->setText(QCoreApplication::translate("catan3", "Four-player Game", nullptr));
        back->setText(QCoreApplication::translate("catan3", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class catan3: public Ui_catan3 {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATAN3_H
