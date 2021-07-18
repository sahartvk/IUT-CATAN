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
    QTcpSocket* socket;

public:

    friend class PlayThread;

    Player(QTcpSocket* _sock);
};

#endif // PLAYER_H
