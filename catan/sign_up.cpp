#include "sign_up.h"
#include "ui_sign_up.h"
#include "catan3.h"
#include "sign_in.h"
#include "catan2.h"
#include <fstream>

sign_up::sign_up(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::sign_up)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    connect(ui->sign_up_2,SIGNAL(clicked(bool)),this,SLOT(onSign_up()));
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
}
void sign_up::onSign_up()
{
    if(ui->password_->text()!=ui->rpassword_->text())
    {

    }
    QString u,p,e;
    u=ui->username_->text();
    p=ui->password_->text();
    e=ui->email_->text();

    QString qstr=e+" "+p+" "+u+"\n";
    std::string str = qstr.toLocal8Bit().constData();

    std:: ofstream fout;
    fout.open("users.txt",std::ios_base::app);
    fout<<str;
    fout.close();

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
