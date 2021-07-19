#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include<QTcpServer>
#include<vector>
#include<QTcpSocket>
#include<QByteArray>
#include"player.h"
#include"playthread.h"
//#include"channels.h"



class myServer : public QMainWindow
{
    Q_OBJECT

public:

    myServer(QWidget *parent = nullptr);
    ~myServer();

     //static void addPlayer(int i,QTcpSocket* socket);

     //void addP3(Player* p);
     //void addP4(Player* p);

     std::vector<Player*> tempP3;
     std::vector<Player*> tempP4;

private:

    QTcpServer* myserver;

    //std::vector<channels *> connections;
    //std::vector<PlayThread *> pt;
    //std::vector<Player*> players;
    std::vector<QTcpSocket*> sockets;


    int numOfPlayers;

    void myWrite(int i,QByteArray& data);
    void myWrite(int i,const char* data);
    void myWrite(int i,QString& data);
    void myRead(int i,QByteArray& data);

    void beginingOfTheGame(int i);
    void restOfTheGame();
    void giveColor();

    QString getDevelopmentCard();

    std::vector<std::string> colors;



signals:
    //???
    void enoughPlayers();

//    void vertice();
//    void edge();
//    void dice();



public slots:

    void newConnectionSlot();

     void game();
    //void newPlayThread();
};
#endif // SERVER_H
