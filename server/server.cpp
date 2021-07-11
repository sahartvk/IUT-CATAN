#include "server.h"

server::server(QWidget *parent)
    : QMainWindow(parent)
{
    myserver=new QTcpServer();
    myserver->listen(QHostAddress::Any,1025);
    if(!myserver->isListening())
        qDebug()<<"not listening";
    else{
        qDebug()<<"listening";
        connect(myserver,SIGNAL(newConnection()),this,SLOT(newConnectionSlot()));
    }
}
void server::newConnectionSlot(){
    channels * newchannel=new channels(myserver->nextPendingConnection(),0);
    connections.push_back(newchannel);
}
server::~server()
{
}

