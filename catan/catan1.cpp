#include "catan1.h"
#include "ui_catan1.h"

catan1::catan1(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::catan1)
{
    ui->setupUi(this);
    connect(ui->next,SIGNAL(clicked(bool)),this,SLOT(onNext()));
}
void catan1::onNext()
{

}
catan1::~catan1()
{
    delete ui;
}
