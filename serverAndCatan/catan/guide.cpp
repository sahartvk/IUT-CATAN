#include "guide.h"
#include "ui_guide.h"
#include "catan2.h"

Guide::Guide(QWidget *parent,QTcpSocket* _clientSocket) :
    QWidget(parent),
    ui(new Ui::Guide)
{
    clientSocket=_clientSocket;
    ui->setupUi(this);
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
}
void Guide::onBack()
{
    catan2 *c2=new catan2(clientSocket,0);
    c2->show();
    this->close();
}
Guide::~Guide()
{
    delete ui;
}
