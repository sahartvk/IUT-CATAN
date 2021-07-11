#include "sign_in.h"
#include "ui_sign_in.h"
#include "catan3.h"
#include "catan2.h"
sign_in::sign_in(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sign_in)
{
    ui->setupUi(this);
    connect(ui->sign_in_2,SIGNAL(clicked(bool)),this,SLOT(onSign_in()));
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
    connect(ui->forgotpassword,SIGNAL(clicked(bool)),this,SLOT(onFpassword()));
}
void sign_in::onSign_in()
{
    catan3 *c3=new catan3;
    c3->show();
    this->close();
}
void sign_in::onQuit()
{
    this->close();
}
void sign_in::onBack()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
void sign_in::onFpassword()
{

}
sign_in::~sign_in()
{
    delete ui;
}
