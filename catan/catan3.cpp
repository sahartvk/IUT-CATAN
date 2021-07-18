#include "catan3.h"
#include "ui_catan3.h"
#include "sign_in.h"
#include "playground_3.h"
#include "playground_4.h"
catan3::catan3(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::catan3)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->threeplayer,SIGNAL(clicked(bool)),this,SLOT(on3Player()));
    connect(ui->fourplayer,SIGNAL(clicked(bool)),this,SLOT(on4Player()));
}
void catan3::onBack()
{
    sign_in *si=new sign_in(0,clientSocket);
    si->show();
    this->close();
}
void catan3::on3Player()
{
    playground_3 *p3=new playground_3(0,clientSocket);
    p3->show();
    this->close();
}
void catan3::on4Player()
{
    playground *p4=new playground(0,clientSocket);
    p4->show();
    this->close();
}
catan3::~catan3()
{
    delete ui;
}

