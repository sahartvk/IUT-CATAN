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

    //3 or 4 player
    //connect(this,SIGNAL(enoughPlayers()),this,SLOT(game()));

}
void server::newConnectionSlot(){
//    static int temp=1;

//    //channels * newchannel=new channels(myserver->nextPendingConnection(),0);

//    //newchannel->turn=temp;
//    //connections.push_back(newchannel);

//    //temp++;

//    Player * newPlayer=new Player(temp,myserver->nextPendingConnection());
//    players.push_back(newPlayer);

//    temp++;


//    if(temp==numOfPlayers){
//        emit enoughPlayers();
//    }

    channels* newChannel=new channels(myserver->nextPendingConnection());
    connections.push_back(newChannel);
}

void server::myWrite(int i,QByteArray& data){

    players[i]->socket->write(data);
    players[i]->socket->waitForBytesWritten(-1);
}

void server::myRead(int i,QByteArray& data){

    while(!players[i]->socket->waitForReadyRead(-1));
    data=players[i]->socket->readAll();
}

void server::game(){

//    while(true){
//           while(!socket->waitForReadyRead(-1));
//           qDebug()<<"data recieved"<<socket->readAll();
//           socket->write("welcome user");
//           socket->waitForBytesWritten(-1);
//           qDebug()<<"message sent";
//       }


    //username ?????
    readUsername();

    //turn
    writeTurn();


    //123
    for(int i=0;i<numOfPlayers;i++) {
        beginingOfTheGame(i);
    }

    //321
    for(int i=numOfPlayers;i>0;i--) {
        beginingOfTheGame(i);
    }


    restOfTheGame();

}

void server::readUsername(){

    for(int i=0;i<numOfPlayers;i++){

        QByteArray data;
        //????
        myRead(i,data);
        //??
    }
}

void server::writeTurn(){

    for(int i=0;i<numOfPlayers;i++){

        //???
        string _turn=to_string(players[i]->turn);
        //myWrite(i,_turn); ???
    }

}

void server::beginingOfTheGame(int i){

    QByteArray data;

    myRead(i,data);

    for(int j=0;j<numOfPlayers;j++){

        if(i!=j){

                myWrite(j,data);
        }
    }

}

void server::restOfTheGame(){

    while(true){

        QByteArray data1,data2;

        int n=(count%numOfPlayers)+1;

        //read dice number
        myRead(n,data1);

        for(int i=0;i<numOfPlayers;i++){
            //== or !=???
            myWrite(i,data1);
        }


        //action
        myRead(n,data2);

        for(int i=0;i<numOfPlayers;i++){
            //== or !=?????
            myWrite(i,data1);
        }

        count++;

    }

}

server::~server()
{
}

