#ifndef CLIENTS_H
#define CLIENTS_H

#include <QWidget>
#include<QTcpSocket>
#include<QString>

class Clients
{
private:
    QString username;
    int gameType;
    QTcpSocket* socket;
public:
    Clients(QString _username,int _gameType,QTcpSocket* _socket);
    Clients();
};

#endif // CLIENTS_H
