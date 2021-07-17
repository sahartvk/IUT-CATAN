/********************************************************************************
** Form generated from reading UI file 'setting.ui'
**
** Created by: Qt User Interface Compiler version 6.1.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_SETTING_H
#define UI_SETTING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QLabel>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_setting
{
public:
    QWidget *centralwidget;
    QLabel *background;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QLabel *sound;
    QSlider *sound_;
    QWidget *verticalLayoutWidget_2;
    QVBoxLayout *verticalLayout2;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QPushButton *back;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *setting)
    {
        if (setting->objectName().isEmpty())
            setting->setObjectName(QString::fromUtf8("setting"));
        setting->resize(1002, 616);
        centralwidget = new QWidget(setting);
        centralwidget->setObjectName(QString::fromUtf8("centralwidget"));
        background = new QLabel(centralwidget);
        background->setObjectName(QString::fromUtf8("background"));
        background->setGeometry(QRect(0, 0, 1001, 561));
        background->setPixmap(QPixmap(QString::fromUtf8(":/prefix1/image/hani7.jpg")));
        verticalLayoutWidget = new QWidget(centralwidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(690, 140, 231, 61));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        sound = new QLabel(verticalLayoutWidget);
        sound->setObjectName(QString::fromUtf8("sound"));
        QFont font;
        font.setFamilies({QString::fromUtf8("Bodoni MT")});
        font.setPointSize(12);
        font.setItalic(true);
        sound->setFont(font);

        verticalLayout->addWidget(sound);

        sound_ = new QSlider(verticalLayoutWidget);
        sound_->setObjectName(QString::fromUtf8("sound_"));
        sound_->setOrientation(Qt::Horizontal);

        verticalLayout->addWidget(sound_);

        verticalLayoutWidget_2 = new QWidget(centralwidget);
        verticalLayoutWidget_2->setObjectName(QString::fromUtf8("verticalLayoutWidget_2"));
        verticalLayoutWidget_2->setGeometry(QRect(690, 220, 231, 61));
        verticalLayout2 = new QVBoxLayout(verticalLayoutWidget_2);
        verticalLayout2->setObjectName(QString::fromUtf8("verticalLayout2"));
        verticalLayout2->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(verticalLayoutWidget_2);
        label->setObjectName(QString::fromUtf8("label"));
        label->setFont(font);

        verticalLayout2->addWidget(label);

        horizontalSlider = new QSlider(verticalLayoutWidget_2);
        horizontalSlider->setObjectName(QString::fromUtf8("horizontalSlider"));
        horizontalSlider->setOrientation(Qt::Horizontal);

        verticalLayout2->addWidget(horizontalSlider);

        label_2 = new QLabel(centralwidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(680, 40, 241, 41));
        QFont font1;
        font1.setFamilies({QString::fromUtf8("Bodoni MT")});
        font1.setPointSize(24);
        font1.setUnderline(true);
        label_2->setFont(font1);
        back = new QPushButton(centralwidget);
        back->setObjectName(QString::fromUtf8("back"));
        back->setGeometry(QRect(20, 500, 111, 51));
        QFont font2;
        font2.setFamilies({QString::fromUtf8("Bradley Hand ITC")});
        font2.setPointSize(24);
        back->setFont(font2);
        setting->setCentralWidget(centralwidget);
        menubar = new QMenuBar(setting);
        menubar->setObjectName(QString::fromUtf8("menubar"));
        menubar->setGeometry(QRect(0, 0, 1002, 26));
        setting->setMenuBar(menubar);
        statusbar = new QStatusBar(setting);
        statusbar->setObjectName(QString::fromUtf8("statusbar"));
        setting->setStatusBar(statusbar);

        retranslateUi(setting);

        QMetaObject::connectSlotsByName(setting);
    } // setupUi

    void retranslateUi(QMainWindow *setting)
    {
        setting->setWindowTitle(QCoreApplication::translate("setting", "MainWindow", nullptr));
        background->setText(QString());
        sound->setText(QCoreApplication::translate("setting", "Sound Volume :", nullptr));
        label->setText(QCoreApplication::translate("setting", "Music Volume : ", nullptr));
        label_2->setText(QCoreApplication::translate("setting", "Game Option", nullptr));
        back->setText(QCoreApplication::translate("setting", "Back", nullptr));
    } // retranslateUi

};

namespace Ui {
    class setting: public Ui_setting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_SETTING_H
