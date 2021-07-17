/********************************************************************************
** Form generated from reading UI file 'sign_in.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_IN_H
#define UI_SIGN_IN_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_in
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *label1;
    QLabel *label2;
    QPushButton *sign_in_2;
    QPushButton *back;
    QPushButton *quit;
    QPushButton *forgotpassword;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *email;
    QLabel *password;
    QLineEdit *email_;
    QLineEdit *password_;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sign_in)
    {
        if (sign_in->objectName().isEmpty())
            sign_in->setObjectName(QString::fromUtf8("sign_in"));
        sign_in->resize(974, 619);
        centralwidget = new QWidget(sign_in);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, -10, 971, 581));
        QFont font;
        font.setFamilies({QString::fromUtf8("Myanmar Text")});
        background->setFont(font);
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani5.jpg")));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(110, 20, 211, 91));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bodoni MT")});
        font1.setPointSize(36);
        font1.setItalic(false);
        font1.setUnderline(true);
        label1->setFont(font1);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(140, 80, 151, 71));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bodoni MT")});
        font2.setPointSize(16);
        label2->setFont(font2);
        sign_in_2 = new QPushButton(centralwidget);
        sign_in_2->setObjectName(QString::fromUtf8("sign_in_2"));
        sign_in_2->setGeometry(QRect(140, 400, 121, 41));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bodoni MT")});
        font3.setPointSize(12);
        font3.setBold(true);
        font3.setItalic(false);
        sign_in_2->setFont(font3);
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(830, 500, 111, 51));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font4.setPointSize(24);
        font4.setBold(false);
        back->setFont(font4);
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(140, 450, 121, 41));
        QFont font5;
        font5.setFamilies({QString::fromUtf8("Bodoni MT")});
        font5.setPointSize(12);
        font5.setBold(true);
        quit->setFont(font5);
        forgotpassword = new QPushButton(centralwidget);
        forgotpassword->setObjectName(QString::fromUtf8("forgotpassword"));
        forgotpassword->setGeometry(QRect(100, 340, 221, 31));
        QFont font6;
        font6.setFamilies({QString::fromUtf8("Bodoni MT")});
        font6.setPointSize(12);
        font6.setItalic(true);
        forgotpassword->setFont(font6);
        formLayoutWidget = new QWidget(centralwidget);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(60, 230, 281, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        email = new QLabel(formLayoutWidget);
        email->setObjectName(QString::fromUtf8("email"));
        email->setFont(font6);

        formLayout->setWidget(0, QFormLayout::LabelRole, email);

        password = new QLabel(formLayoutWidget);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font6);

        formLayout->setWidget(1, QFormLayout::LabelRole, password);

        email_ = new QLineEdit(formLayoutWidget);
        email_->setObjectName(QString::fromUtf8("email_"));
        email_->setAutoFillBackground(false);
        email_->setInputMethodHints(Qt::ImhNone);

        formLayout->setWidget(0, QFormLayout::FieldRole, email_);

        password_ = new QLineEdit(formLayoutWidget);
        password_->setObjectName(QString::fromUtf8("password_"));
        password_->setInputMethodHints(Qt::ImhNone);
        password_->setEchoMode(QLineEdit::Password);

        formLayout->setWidget(1, QFormLayout::FieldRole, password_);

        sign_in->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sign_in);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 974, 26));
        sign_in->setMenuBar(menubar);
        statusbar = new QStatusBar(sign_in);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sign_in->setStatusBar(statusbar);

        retranslateUi(sign_in);

        QMetaObject::connectSlotsByName(sign_in);
    } // setupUi

    void retranslateUi(QMainWindow *sign_in)
    {
        sign_in->setWindowTitle(QCoreApplication::translate("sign_in", "MainWindow", nullptr));
        background->setText(QString());
        label1->setText(QCoreApplication::translate("sign_in", "CATAN", nullptr));
        label2->setText(QCoreApplication::translate("sign_in", "UNIVERSE", nullptr));
        sign_in_2->setText(QCoreApplication::translate("sign_in", "SIGN  IN", nullptr));
        back->setText(QCoreApplication::translate("sign_in", "Back", nullptr));
        quit->setText(QCoreApplication::translate("sign_in", "QUIT", nullptr));
        forgotpassword->setText(QCoreApplication::translate("sign_in", "Forgot Password", nullptr));
        email->setText(QCoreApplication::translate("sign_in", "Email :", nullptr));
        password->setText(QCoreApplication::translate("sign_in", "Password : ", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_in: public Ui_sign_in {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_IN_H
