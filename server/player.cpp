#include "player.h"

Player::Player(QTcpSocket* _sock)
{
    socket=_sock;
}

void Player::myWrite(QByteArray& data){

    socket->write(data);
    while(socket->waitForBytesWritten(-1));
}

void Player::myWrite(QString& data){

     socket->write(data.toUtf8());
     while(socket->waitForBytesWritten(-1));
}

void Player::myWrite(const char* data){

    socket->write(data);
    while(socket->waitForBytesWritten(-1));
}


void Player::myRead(QByteArray& data){

    while(!socket->waitForReadyRead(-1));
    data=socket->readAll();
}
