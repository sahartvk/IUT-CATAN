#ifndef PLAYER_H
#define PLAYER_H

#include <QMainWindow>
#include <QWidget>
#include<QTcpSocket>

class Player
{
private:
    int turn;
    QTcpSocket* socket;
public:
    friend class server;

    Player(int t,QTcpSocket* _sock);
};

#endif // PLAYER_H
