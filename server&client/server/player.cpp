#include "player.h"

Player::Player(int t,QTcpSocket* _sock)
{
    turn=t;
    socket=_sock;
}

