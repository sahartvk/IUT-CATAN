/********************************************************************************
** Form generated from reading UI file 'robber.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROBBER_H
#define UI_ROBBER_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Robber
{
public:
    QLabel *background;
    QPushButton *sheap;
    QPushButton *brick;
    QPushButton *stone;
    QPushButton *wheat;
    QPushButton *wood;
    QPushButton *ok;

    void setupUi(QWidget *Robber)
    {
        if (Robber->objectName().isEmpty())
            Robber->setObjectName(QString::fromUtf8("Robber"));
        Robber->resize(820, 501);
        background = new QLabel(Robber);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(-6, -1, 831, 521));
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani6.jpg")));
        sheap = new QPushButton(Robber);
        sheap->setObjectName(QString::fromUtf8("sheap"));
        sheap->setGeometry(QRect(670, 30, 121, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix1/image/sheap.png"), QSize(), QIcon::Normal, QIcon::Off);
        sheap->setIcon(icon);
        sheap->setIconSize(QSize(100, 75));
        brick = new QPushButton(Robber);
        brick->setObjectName(QString::fromUtf8("brick"));
        brick->setGeometry(QRect(670, 380, 121, 81));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix1/image/brick2.png"), QSize(), QIcon::Normal, QIcon::Off);
        brick->setIcon(icon1);
        brick->setIconSize(QSize(100, 75));
        stone = new QPushButton(Robber);
        stone->setObjectName(QString::fromUtf8("stone"));
        stone->setGeometry(QRect(670, 290, 121, 81));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/prefix1/image/stone1.png"), QSize(), QIcon::Normal, QIcon::Off);
        stone->setIcon(icon2);
        stone->setIconSize(QSize(100, 75));
        wheat = new QPushButton(Robber);
        wheat->setObjectName(QString::fromUtf8("wheat"));
        wheat->setGeometry(QRect(670, 120, 121, 81));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/prefix1/image/wheat1.png"), QSize(), QIcon::Normal, QIcon::Off);
        wheat->setIcon(icon3);
        wheat->setIconSize(QSize(100, 75));
        wood = new QPushButton(Robber);
        wood->setObjectName(QString::fromUtf8("wood"));
        wood->setGeometry(QRect(670, 210, 121, 71));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/prefix1/image/wood1.png"), QSize(), QIcon::Normal, QIcon::Off);
        wood->setIcon(icon4);
        wood->setIconSize(QSize(100, 75));
        ok = new QPushButton(Robber);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(30, 430, 71, 61));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/prefix1/image/ok.png"), QSize(), QIcon::Normal, QIcon::Off);
        ok->setIcon(icon5);
        ok->setIconSize(QSize(50, 50));

        retranslateUi(Robber);

        QMetaObject::connectSlotsByName(Robber);
    } // setupUi

    void retranslateUi(QWidget *Robber)
    {
        Robber->setWindowTitle(QCoreApplication::translate("Robber", "Form", nullptr));
        background->setText(QString());
        sheap->setText(QString());
        brick->setText(QString());
        stone->setText(QString());
        wheat->setText(QString());
        wood->setText(QString());
        ok->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Robber: public Ui_Robber {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROBBER_H
