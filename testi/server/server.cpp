#include "server.h"

using namespace std;

myServer::myServer(QWidget *parent)
    : QMainWindow(parent)
{
    count=0;

}
void myServer::startServer(){

    myserver=new QTcpServer();
    myserver->listen(QHostAddress::Any,1234);

    if(!myserver->isListening())
        qDebug()<<"not listening\n";
    else{
        qDebug()<<"listening\n";
        connect(myserver,SIGNAL(newConnection()),this,SLOT(newConnectionSlot()));
    }
}
void myServer::newConnectionSlot(){

    Player* p=new Player(myserver->nextPendingConnection());
    players.push_back(p);
    qDebug() <<"connected\n";

    QByteArray data;
    p->myRead(data);

    qDebug() <<data;

    QString Qdata=data;

        count++;

    if(count==3){
        newPlayThread();
    }

}
void myServer::newPlayThread(){

    qDebug()<<"new thread\n";
    PlayThread* _pt=new PlayThread(players);
    pt.push_back(_pt);

    _pt->run();

}

myServer::~myServer()
{
}

