#include "server.h"

using namespace std;

server::server(QWidget *parent)
    : QMainWindow(parent)
{

    myserver=new QTcpServer();
    myserver->listen(QHostAddress::Any,8080);

    if(!myserver->isListening())
        qDebug()<<"not listening";
    else{
        qDebug()<<"listening";
        connect(myserver,SIGNAL(newConnection()),this,SLOT(newConnectionSlot()));
    }

    connect(this,SIGNAL(enoughPlayers()),this,SLOT(newPlayThread()));

    if(tempP3.size()==3){
        PlayThread* _pt=new PlayThread(tempP3);
        pt.push_back(_pt);

        tempP3.clear();
    }
    else if(tempP4.size()==4){
        PlayThread* _pt=new PlayThread(tempP4);
        pt.push_back(_pt);

        tempP4.clear();
    }

}
void server::newConnectionSlot(){

    channels* newChannel=new channels(myserver->nextPendingConnection(),tempP3,tempP4);
    connections.push_back(newChannel);

}

//void server::addPlayer(int i,QTcpSocket* socket){

//    Player* p=new Player(socket);

//    if(i==3){
//        tempP3.push_back(p);
//    }

//    else if(i==3){
//        tempP3.push_back(p);
//    }

//    if(tempP3.size()==3 || tempP4.size()==4)
//        emit enoughPlayers();
//}

//void server::addP3(Player* p){

//    tempP3.push_back(p);

//    if(tempP4.size()==3)
//        emit enoughPlayers();
//}

//void server::addP4(Player* p){

//    tempP4.push_back(p);

//    if(tempP4.size()==4)
//        emit enoughPlayers();
//}

void server::newPlayThread(){

    if(tempP3.size()==3){
        PlayThread* newpt=new PlayThread(tempP3);
        pt.push_back(newpt);
        tempP3.clear();
    }

    if(tempP4.size()==4){
        PlayThread* newpt=new PlayThread(tempP4);
        pt.push_back(newpt);
        tempP4.clear();
    }

}


server::~server()
{
}

