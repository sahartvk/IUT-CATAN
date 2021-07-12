#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include<QTcpServer>
#include<vector>
#include<QTcpSocket>
#include"channels.h"
#include<QByteArray>
#include"player.h"
//#include"clients.h"



class server : public QMainWindow
{
    Q_OBJECT

public:
    server(QWidget *parent = nullptr);
    ~server();

     int count;

     int numOfPlayers;

private:

    QTcpServer* myserver;

    std::vector<Player *> players;
    std::vector<channels *> connections;

    void myWrite(int i,QByteArray& data);
    void myRead(int i,QByteArray& data);

    void readUsername();
    void writeTurn();

    void beginingOfTheGame(int i);
    void restOfTheGame();

signals:
    //???
    void enoughPlayers();

    void vertice();
    void edge();
    void dice();



public slots:
    void newConnectionSlot();
    void game();
};
#endif // SERVER_H
