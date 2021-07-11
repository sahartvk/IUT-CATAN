#include "channels.h"

channels::channels(QTcpSocket* _socket,QObject *parent) : QObject(parent)
{
        socket=_socket;
        t=std::thread(&channels::communicate,this);

}
void channels::communicate(){
    while(true){
        while(!socket->waitForReadyRead(-1));
        qDebug()<<"data recieved"<<socket->readAll();
        socket->write("welcome user");
        socket->waitForBytesWritten(-1);
        qDebug()<<"message sent";
    }
}
channels::~channels(){
    t.join();
    qDebug()<<"channel closed";
}
