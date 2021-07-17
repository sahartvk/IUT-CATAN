/********************************************************************************
** Form generated from reading UI file 'sign_up.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SIGN_UP_H
#define UI_SIGN_UP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_sign_up
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QLabel *label1;
    QLabel *label2;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *email;
    QLineEdit *email_;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QLabel *username;
    QLineEdit *username_;
    QWidget *horizontalLayoutWidget_3;
    QHBoxLayout *horizontalLayout_3;
    QLabel *password;
    QLineEdit *password_;
    QWidget *horizontalLayoutWidget_4;
    QHBoxLayout *horizontalLayout_4;
    QLabel *rpassword;
    QLineEdit *rpassword_;
    QPushButton *back;
    QPushButton *sign_up_2;
    QPushButton *quit;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *sign_up)
    {
        if (sign_up->objectName().isEmpty())
            sign_up->setObjectName(QString::fromUtf8("sign_up"));
        sign_up->resize(1004, 611);
        sign_up->setInputMethodHints(Qt::ImhHiddenText);
        centralwidget = new QWidget(sign_up);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1001, 561));
        background->setInputMethodHints(Qt::ImhNone);
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani5.jpg")));
        label1 = new QLabel(centralwidget);
        label1->setObjectName(QString::fromUtf8("label1"));
        label1->setGeometry(QRect(100, 20, 211, 91));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT")});
        font.setPointSize(36);
        font.setItalic(false);
        font.setUnderline(true);
        label1->setFont(font);
        label2 = new QLabel(centralwidget);
        label2->setObjectName(QString::fromUtf8("label2"));
        label2->setGeometry(QRect(120, 80, 151, 71));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bodoni MT")});
        font1.setPointSize(16);
        label2->setFont(font1);
        horizontalLayoutWidget = new QWidget(centralwidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(60, 160, 281, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        email = new QLabel(horizontalLayoutWidget);
        email->setObjectName(QString::fromUtf8("email"));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bodoni MT")});
        font2.setPointSize(12);
        font2.setItalic(true);
        email->setFont(font2);

        horizontalLayout->addWidget(email);

        email_ = new QLineEdit(horizontalLayoutWidget);
        email_->setObjectName(QString::fromUtf8("email_"));

        horizontalLayout->addWidget(email_);

        horizontalLayoutWidget_2 = new QWidget(centralwidget);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(60, 210, 281, 51));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        username = new QLabel(horizontalLayoutWidget_2);
        username->setObjectName(QString::fromUtf8("username"));
        username->setFont(font2);

        horizontalLayout_2->addWidget(username);

        username_ = new QLineEdit(horizontalLayoutWidget_2);
        username_->setObjectName(QString::fromUtf8("username_"));

        horizontalLayout_2->addWidget(username_);

        horizontalLayoutWidget_3 = new QWidget(centralwidget);
        horizontalLayoutWidget_3->setObjectName(QString::fromUtf8("horizontalLayoutWidget_3"));
        horizontalLayoutWidget_3->setGeometry(QRect(60, 260, 281, 51));
        horizontalLayout_3 = new QHBoxLayout(horizontalLayoutWidget_3);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        password = new QLabel(horizontalLayoutWidget_3);
        password->setObjectName(QString::fromUtf8("password"));
        password->setFont(font2);

        horizontalLayout_3->addWidget(password);

        password_ = new QLineEdit(horizontalLayoutWidget_3);
        password_->setObjectName(QString::fromUtf8("password_"));
        password_->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        password_->setEchoMode(QLineEdit::Password);

        horizontalLayout_3->addWidget(password_);

        horizontalLayoutWidget_4 = new QWidget(centralwidget);
        horizontalLayoutWidget_4->setObjectName(QString::fromUtf8("horizontalLayoutWidget_4"));
        horizontalLayoutWidget_4->setGeometry(QRect(60, 310, 281, 51));
        horizontalLayout_4 = new QHBoxLayout(horizontalLayoutWidget_4);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        rpassword = new QLabel(horizontalLayoutWidget_4);
        rpassword->setObjectName(QString::fromUtf8("rpassword"));
        rpassword->setFont(font2);

        horizontalLayout_4->addWidget(rpassword);

        rpassword_ = new QLineEdit(horizontalLayoutWidget_4);
        rpassword_->setObjectName(QString::fromUtf8("rpassword_"));
        rpassword_->setInputMethodHints(Qt::ImhHiddenText|Qt::ImhNoAutoUppercase|Qt::ImhNoPredictiveText|Qt::ImhSensitiveData);
        rpassword_->setEchoMode(QLineEdit::Password);

        horizontalLayout_4->addWidget(rpassword_);

        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(850, 490, 111, 51));
        QFont font3;
        font3.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font3.setPointSize(24);
        back->setFont(font3);
        sign_up_2 = new QPushButton(centralwidget);
        sign_up_2->setObjectName(QString::fromUtf8("sign_up_2"));
        sign_up_2->setGeometry(QRect(130, 370, 121, 41));
        QFont font4;
        font4.setFamilies({QString::fromUtf8("Bodoni MT")});
        font4.setPointSize(16);
        font4.setBold(true);
        sign_up_2->setFont(font4);
        quit = new QPushButton(centralwidget);
        quit->setObjectName(QString::fromUtf8("quit"));
        quit->setGeometry(QRect(130, 420, 121, 41));
        quit->setFont(font4);
        sign_up->setCentralWidget(centralwidget);
        menubar = new QMenuBar(sign_up);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1004, 26));
        sign_up->setMenuBar(menubar);
        statusbar = new QStatusBar(sign_up);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        sign_up->setStatusBar(statusbar);

        retranslateUi(sign_up);

        QMetaObject::connectSlotsByName(sign_up);
    } // setupUi

    void retranslateUi(QMainWindow *sign_up)
    {
        sign_up->setWindowTitle(QCoreApplication::translate("sign_up", "MainWindow", nullptr));
        background->setText(QString());
        label1->setText(QCoreApplication::translate("sign_up", "CATAN", nullptr));
        label2->setText(QCoreApplication::translate("sign_up", "UNIVERSE", nullptr));
        email->setText(QCoreApplication::translate("sign_up", "Email : ", nullptr));
        username->setText(QCoreApplication::translate("sign_up", "Uaername : ", nullptr));
        password->setText(QCoreApplication::translate("sign_up", "Password : ", nullptr));
        password_->setText(QString());
        rpassword->setText(QCoreApplication::translate("sign_up", "Repeat Password : ", nullptr));
        rpassword_->setText(QString());
        back->setText(QCoreApplication::translate("sign_up", "Back", nullptr));
        sign_up_2->setText(QCoreApplication::translate("sign_up", "SIGN UP", nullptr));
        quit->setText(QCoreApplication::translate("sign_up", "QUIT", nullptr));
    } // retranslateUi

};

namespace Ui {
    class sign_up: public Ui_sign_up {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SIGN_UP_H
