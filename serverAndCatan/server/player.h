#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QWidget>
#include<QTcpSocket>
//#include"playthread.h"

class Player
{
private:
    QString username;
    int gameType;


public:

    QTcpSocket* socket;
    friend class PlayThread;
    friend class server;

    Player(QTcpSocket* _sock);


};

#endif // PLAYER_H
