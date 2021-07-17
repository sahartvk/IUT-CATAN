/********************************************************************************
** Form generated from reading UI file 'trade.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRADE_H
#define UI_TRADE_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_trade
{
public:
    QLabel *background;
    QPushButton *sheap;
    QPushButton *wheat;
    QPushButton *wood;
    QPushButton *stone;
    QPushButton *brick;
    QPushButton *sheap_;
    QPushButton *wheat_;
    QPushButton *wood_;
    QPushButton *stone_;
    QPushButton *brick_;
    QLabel *trade_label;
    QComboBox *trade_with;
    QPushButton *tarde_button;
    QPushButton *ok;
    QLabel *sheap_label;
    QLabel *wheat_label;
    QLabel *wood_label;
    QLabel *stone_label;
    QLabel *brick_label;
    QLabel *sheap_label_;
    QLabel *wood_label_;
    QLabel *brick_label_;
    QLabel *wheat_label_;
    QLabel *stone_label_;

    void setupUi(QWidget *trade)
    {
        if (trade->objectName().isEmpty())
            trade->setObjectName(QString::fromUtf8("trade"));
        trade->resize(751, 444);
        background = new QLabel(trade);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 751, 441));
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/trading.jpg")));
        sheap = new QPushButton(trade);
        sheap->setObjectName(QString::fromUtf8("sheap"));
        sheap->setGeometry(QRect(50, 10, 121, 81));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/prefix1/image/sheap.png"), QSize(), QIcon::Normal, QIcon::Off);
        sheap->setIcon(icon);
        sheap->setIconSize(QSize(100, 75));
        wheat = new QPushButton(trade);
        wheat->setObjectName(QString::fromUtf8("wheat"));
        wheat->setGeometry(QRect(50, 100, 121, 81));
        QIcon icon1;
        icon1.addFile(QString::fromUtf8(":/prefix1/image/wheat1.png"), QSize(), QIcon::Normal, QIcon::Off);
        wheat->setIcon(icon1);
        wheat->setIconSize(QSize(100, 75));
        wood = new QPushButton(trade);
        wood->setObjectName(QString::fromUtf8("wood"));
        wood->setGeometry(QRect(50, 190, 121, 71));
        QIcon icon2;
        icon2.addFile(QString::fromUtf8(":/prefix1/image/wood1.png"), QSize(), QIcon::Normal, QIcon::Off);
        wood->setIcon(icon2);
        wood->setIconSize(QSize(100, 75));
        stone = new QPushButton(trade);
        stone->setObjectName(QString::fromUtf8("stone"));
        stone->setGeometry(QRect(50, 270, 121, 81));
        QIcon icon3;
        icon3.addFile(QString::fromUtf8(":/prefix1/image/stone1.png"), QSize(), QIcon::Normal, QIcon::Off);
        stone->setIcon(icon3);
        stone->setIconSize(QSize(100, 75));
        brick = new QPushButton(trade);
        brick->setObjectName(QString::fromUtf8("brick"));
        brick->setGeometry(QRect(50, 360, 121, 81));
        QIcon icon4;
        icon4.addFile(QString::fromUtf8(":/prefix1/image/brick2.png"), QSize(), QIcon::Normal, QIcon::Off);
        brick->setIcon(icon4);
        brick->setIconSize(QSize(100, 75));
        sheap_ = new QPushButton(trade);
        sheap_->setObjectName(QString::fromUtf8("sheap_"));
        sheap_->setGeometry(QRect(580, 10, 121, 81));
        sheap_->setIcon(icon);
        sheap_->setIconSize(QSize(100, 75));
        wheat_ = new QPushButton(trade);
        wheat_->setObjectName(QString::fromUtf8("wheat_"));
        wheat_->setGeometry(QRect(580, 100, 121, 81));
        wheat_->setIcon(icon1);
        wheat_->setIconSize(QSize(100, 75));
        wood_ = new QPushButton(trade);
        wood_->setObjectName(QString::fromUtf8("wood_"));
        wood_->setGeometry(QRect(580, 190, 121, 71));
        wood_->setIcon(icon2);
        wood_->setIconSize(QSize(100, 75));
        stone_ = new QPushButton(trade);
        stone_->setObjectName(QString::fromUtf8("stone_"));
        stone_->setGeometry(QRect(580, 270, 121, 81));
        stone_->setIcon(icon3);
        stone_->setIconSize(QSize(100, 75));
        brick_ = new QPushButton(trade);
        brick_->setObjectName(QString::fromUtf8("brick_"));
        brick_->setGeometry(QRect(580, 360, 121, 81));
        brick_->setIcon(icon4);
        brick_->setIconSize(QSize(100, 75));
        trade_label = new QLabel(trade);
        trade_label->setObjectName(QString::fromUtf8("trade_label"));
        trade_label->setGeometry(QRect(320, 10, 101, 51));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT")});
        font.setPointSize(24);
        font.setUnderline(true);
        trade_label->setFont(font);
        trade_with = new QComboBox(trade);
        trade_with->setObjectName(QString::fromUtf8("trade_with"));
        trade_with->setGeometry(QRect(260, 80, 221, 21));
        tarde_button = new QPushButton(trade);
        tarde_button->setObjectName(QString::fromUtf8("tarde_button"));
        tarde_button->setGeometry(QRect(330, 370, 91, 61));
        QIcon icon5;
        icon5.addFile(QString::fromUtf8(":/prefix1/image/trade1.png"), QSize(), QIcon::Normal, QIcon::Off);
        tarde_button->setIcon(icon5);
        tarde_button->setIconSize(QSize(75, 60));
        ok = new QPushButton(trade);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(260, 110, 220, 21));
        sheap_label = new QLabel(trade);
        sheap_label->setObjectName(QString::fromUtf8("sheap_label"));
        sheap_label->setGeometry(QRect(180, 30, 41, 41));
        wheat_label = new QLabel(trade);
        wheat_label->setObjectName(QString::fromUtf8("wheat_label"));
        wheat_label->setGeometry(QRect(180, 120, 41, 41));
        wood_label = new QLabel(trade);
        wood_label->setObjectName(QString::fromUtf8("wood_label"));
        wood_label->setGeometry(QRect(180, 200, 41, 41));
        stone_label = new QLabel(trade);
        stone_label->setObjectName(QString::fromUtf8("stone_label"));
        stone_label->setGeometry(QRect(180, 290, 41, 41));
        brick_label = new QLabel(trade);
        brick_label->setObjectName(QString::fromUtf8("brick_label"));
        brick_label->setGeometry(QRect(180, 380, 41, 41));
        sheap_label_ = new QLabel(trade);
        sheap_label_->setObjectName(QString::fromUtf8("sheap_label_"));
        sheap_label_->setGeometry(QRect(530, 30, 41, 41));
        wood_label_ = new QLabel(trade);
        wood_label_->setObjectName(QString::fromUtf8("wood_label_"));
        wood_label_->setGeometry(QRect(530, 200, 41, 41));
        brick_label_ = new QLabel(trade);
        brick_label_->setObjectName(QString::fromUtf8("brick_label_"));
        brick_label_->setGeometry(QRect(530, 380, 41, 41));
        wheat_label_ = new QLabel(trade);
        wheat_label_->setObjectName(QString::fromUtf8("wheat_label_"));
        wheat_label_->setGeometry(QRect(530, 120, 41, 41));
        stone_label_ = new QLabel(trade);
        stone_label_->setObjectName(QString::fromUtf8("stone_label_"));
        stone_label_->setGeometry(QRect(530, 290, 41, 41));

        retranslateUi(trade);

        QMetaObject::connectSlotsByName(trade);
    } // setupUi

    void retranslateUi(QWidget *trade)
    {
        trade->setWindowTitle(QCoreApplication::translate("trade", "Form", nullptr));
        background->setText(QString());
        sheap->setText(QString());
        wheat->setText(QString());
        wood->setText(QString());
        stone->setText(QString());
        brick->setText(QString());
        sheap_->setText(QString());
        wheat_->setText(QString());
        wood_->setText(QString());
        stone_->setText(QString());
        brick_->setText(QString());
        trade_label->setText(QCoreApplication::translate("trade", "Trade", nullptr));
        tarde_button->setText(QString());
        ok->setText(QCoreApplication::translate("trade", "OK", nullptr));
        sheap_label->setText(QString());
        wheat_label->setText(QString());
        wood_label->setText(QString());
        stone_label->setText(QString());
        brick_label->setText(QString());
        sheap_label_->setText(QString());
        wood_label_->setText(QString());
        brick_label_->setText(QString());
        wheat_label_->setText(QString());
        stone_label_->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class trade: public Ui_trade {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRADE_H
