#include "catan2.h"
#include "ui_catan2.h"
#include "sign_in.h"
#include "sign_up.h"
#include "setting.h"

catan2::catan2(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::catan2)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    connect(ui->sign_in,SIGNAL(clicked(bool)),this,SLOT(onSign_in()));
    connect(ui->sign_up,SIGNAL(clicked(bool)),this,SLOT(onSign_up()));
    connect(ui->setting,SIGNAL(clicked(bool)),this,SLOT(onSetting()));
    connect(ui->guide,SIGNAL(clicked(bool)),this,SLOT(onGuide()));
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
}
void catan2::onSign_in()
{
    sign_in *si=new sign_in(0,clientSocket);
    si->show();
    this->close();
}
void catan2::onSign_up()
{
    sign_up *su=new sign_up(0,clientSocket);
    su->show();
    this->close();
}
void catan2::onSetting()
{
    setting *se=new setting;
    se->show();
    this->close();
}
void catan2::onGuide()
{

}
void catan2::onQuit()
{
     this->close();
}

catan2::~catan2()
{
    delete ui;
}
