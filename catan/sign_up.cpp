#include "sign_up.h"
#include "ui_sign_up.h"
#include "catan3.h"
#include "sign_in.h"
#include "catan2.h"
sign_up::sign_up(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sign_up)
{
    ui->setupUi(this);
    connect(ui->sign_up_2,SIGNAL(clicked(bool)),this,SLOT(onSign_up()));
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
}
void sign_up::onSign_up()
{
    sign_in *si=new sign_in;
    si->show();
    this->close();
}
void sign_up::onQuit()
{
    this->close();
}
void sign_up::onBack()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
sign_up::~sign_up()
{
    delete ui;
}
