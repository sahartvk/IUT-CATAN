#include "clients.h"

Clients::Clients(QString _username,int _gameType,QTcpSocket* _socket){

    username=_username;
    gameType=_gameType;
    socket=_socket;
}


Clients::Clients(){

}
