#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include<QTcpServer>
#include<vector>
#include<QTcpSocket>
#include<QByteArray>
#include"player.h"
#include"playthread.h"
#include"channels.h"



class server : public QMainWindow
{
    Q_OBJECT

public:

    server(QWidget *parent = nullptr);
    ~server();

     //static void addPlayer(int i,QTcpSocket* socket);

     //void addP3(Player* p);
     //void addP4(Player* p);

     std::vector<Player*> tempP3;
     std::vector<Player*> tempP4;

private:

    QTcpServer* myserver;

    std::vector<channels *> connections;
    std::vector<PlayThread *> pt;


signals:
    //???
    void enoughPlayers();

//    void vertice();
//    void edge();
//    void dice();



public slots:

    void newConnectionSlot();

    void newPlayThread();
};
#endif // SERVER_H
