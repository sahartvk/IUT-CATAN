#include "catan1.h"
#include "ui_catan1.h"
#include "catan2.h"
catan1::catan1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::catan1)
{
    ui->setupUi(this);
    ui->next->setStyleSheet("QPushButton { background-color: grey; }\n"
                          "QPushButton:enabled { background-color: rgb(255, 170, 127); }\n");
    connect(ui->next,SIGNAL(clicked(bool)),this,SLOT(onNext()));
}
void catan1::onNext()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
catan1::~catan1()
{
    delete ui;
}
