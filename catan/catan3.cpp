#include "catan3.h"
#include "ui_catan3.h"
#include "sign_in.h"
#include "playground_3.h"
#include "playground_4.h"
#include<QByteArray>

catan3::catan3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::catan3)
{


    ui->setupUi(this);

    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->threeplayer,SIGNAL(clicked(bool)),this,SLOT(on3Player()));
    connect(ui->fourplayer,SIGNAL(clicked(bool)),this,SLOT(on4Player()));
}

void catan3::myWrite(const char* data){

    clientSocket->write(data);
    while(clientSocket->waitForBytesWritten(-1));
}

void catan3::myRead(QByteArray& data){

    while(!clientSocket->waitForReadyRead(-1));
    data=clientSocket->readAll();
}

void catan3::onBack()
{
    sign_in *si=new sign_in;
    si->show();
    this->close();
}
void catan3::on3Player()
{
//    myWrite("3player\n");

//    QByteArray data;
//    myRead(data);

//    if(data=="gameStarted"){
//        start3();
//    }

    clientSocket=new QTcpSocket;
    clientSocket->connectToHost("127.0.0.1",1234);

    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer3()));

}

void catan3::connectedToServer3(){

    myWrite("3Player\n");
    playground_3 *p3=new playground_3(clientSocket,0);
    p3->show();
    this->close();
}

void catan3::on4Player()
{
//     myWrite("4player\n");

//     QByteArray data;
//     myRead(data);

//     if(data=="gameStarted"){
//         start4();
//     }

}

void catan3::connectedToServer4(){

    playground *p4=new playground(0,clientSocket);
    p4->show();
    this->close();
}

catan3::~catan3()
{
    delete ui;
}

