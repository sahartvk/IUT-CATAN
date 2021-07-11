#include "catan3.h"
#include "ui_catan3.h"
#include "sign_in.h"
catan3::catan3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::catan3)
{
    ui->setupUi(this);
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
}
void catan3::onBack()
{
    sign_in *si=new sign_in;
    si->show();
    this->close();
}
catan3::~catan3()
{
    delete ui;
}
