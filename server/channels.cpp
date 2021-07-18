#include "channels.h"
#include"server.h"
#include<string>
#include<QByteArray>
#include"player.h"


channels::channels(QTcpSocket* _socket,std::vector<Player*>& _tempP3,
                   std::vector<Player*>& _tempP4,QObject *parent)
{
    tempP3=_tempP3;
    tempP4=_tempP4;

    socket=_socket;
    t=std::thread(&channels::communicate,this);

}
void channels::communicate(){

    //connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));

    finishT=false;

    while(!finishT){
        QByteArray data;

        while(!socket->waitForReadyRead(-1));
        data=socket->readAll();
        readingData(data);
    }

}


void channels::readingData(QByteArray data){

    QString sdata=data;

    if(sdata.contains("signup"))
        signUp(sdata);

    else if(sdata.contains("signin"))
        signIn(sdata);

    else if(sdata.contains("3"))
        _3players(sdata);

    else if(sdata.contains("4"))
        _4Players(sdata);
}

channels::~channels(){
    t.join();
    qDebug()<<"channel closed";
}

void channels::signUp(QString sdata){

    std::string str=sdata.toStdString();
    std::string s=str.substr(str.find(":")+1);

    //write s to file

}

void channels::signIn(QString sdata){


    std::string str=sdata.toStdString();
    std::string s=str.substr(str.find(":")+1);

    //check from file


}

void channels::_3players(QString sdata){

    finishT=true;
    gameType=3;


    Player* p=new Player(socket);
    tempP3.push_back(p);


}

void channels::_4Players(QString sdata){

    finishT=true;
    gameType=4;

    Player* p=new Player(socket);
    tempP4.push_back(p);
}

