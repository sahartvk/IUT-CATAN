#include "setting.h"
#include "ui_setting.h"
#include "catan2.h"

setting::setting(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    clientSocket=_clientSocket;
    ui->setupUi(this);
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
}
void setting::onBack()
{
    catan2 *c2=new catan2(clientSocket,0);
    c2->show();
    this->close();
}
setting::~setting()
{
    delete ui;
}
