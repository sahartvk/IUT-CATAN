/********************************************************************************
** Form generated from reading UI file 'catan.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CATAN_H
#define UI_CATAN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_catan
{
public:
    QWidget *centralwidget;
    QLabel *catan_game;
    QPushButton *loading;
    QLabel *label;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *catan)
    {
        if (catan->objectName().isEmpty())
            catan->setObjectName(QString::fromUtf8("catan"));
        catan->resize(1001, 621);
        centralwidget = new QWidget(catan);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        catan_game = new QLabel(centralwidget);
        catan_game->setObjectName(QString::fromUtf8("catan_game"));
        catan_game->setGeometry(QRect(0, -40, 1081, 571));
        QPalette palette;
        QBrush brush(QColor(0, 0, 0, 255));
        brush.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Active, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Active, QPalette::ToolTipText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ButtonText, brush);
        palette.setBrush(QPalette::Inactive, QPalette::ToolTipText, brush);
        QBrush brush1(QColor(120, 120, 120, 255));
        brush1.setStyle(Qt::SolidPattern);
        palette.setBrush(QPalette::Disabled, QPalette::ButtonText, brush1);
        palette.setBrush(QPalette::Disabled, QPalette::ToolTipText, brush);
        catan_game->setPalette(palette);
        catan_game->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani.png")));
        loading = new QPushButton(centralwidget);
        loading->setObjectName(QString::fromUtf8("loading"));
        loading->setGeometry(QRect(750, 370, 93, 28));
        label = new QLabel(centralwidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(420, 210, 55, 16));
        catan->setCentralWidget(centralwidget);
        menubar = new QMenuBar(catan);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1001, 26));
        catan->setMenuBar(menubar);
        statusbar = new QStatusBar(catan);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        catan->setStatusBar(statusbar);

        retranslateUi(catan);

        QMetaObject::connectSlotsByName(catan);
    } // setupUi

    void retranslateUi(QMainWindow *catan)
    {
        catan->setWindowTitle(QCoreApplication::translate("catan", "catan", nullptr));
        catan_game->setText(QString());
        loading->setText(QCoreApplication::translate("catan", "PushButton", nullptr));
        label->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class catan: public Ui_catan {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CATAN_H
