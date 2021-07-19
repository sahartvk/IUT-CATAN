#ifndef PLAYER_H
#define PLAYER_H

#include<iostream>
#include <QMainWindow>
#include <QWidget>
#include<QTcpSocket>
//#include"playthread.h"

class Player
{
private:
    QString username;
    int gameType;
     QTcpSocket* socket;


public:

    Player(QTcpSocket* _sock);

    void myWrite(QByteArray& data);
    void myWrite(QString& data);
    void myWrite(const char* data);
    void myRead(QByteArray& data);

};

#endif // PLAYER_H
