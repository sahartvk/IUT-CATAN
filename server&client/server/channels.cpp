#include "channels.h"
#include"server.h"
#include<string>
#include<QByteArray>


channels::channels(QTcpSocket* _socket,QObject *parent) : QObject(parent)
{
        socket=_socket;
        t=std::thread(&channels::communicate,this);

}
void channels::communicate(){

    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));

    while(true){
        while(!socket->waitForReadyRead(-1));
        qDebug()<<"data recieved"<<socket->readAll();
        socket->write("welcome user");
        socket->waitForBytesWritten(-1);
        qDebug()<<"message sent";
    }

}

void channels::readingData(){

    QByteArray data=socket->readAll();
    //????? what do we do we the data???????
    QString sdata=data;

    if(sdata=="signup")
        emit signUp();
    if(sdata=="signin")
        emit signIn();
    if(sdata=="3")
        emit _3players();
    if(sdata=="4")
        emit _4Players();
}

channels::~channels(){
    t.join();
    qDebug()<<"channel closed";
}

//void channels::beginingOfTheGame(){

//    QByteArray data;

//    if(i==turn){
//        while(!socket->waitForReadyRead(-1));
//        data = socket->readAll();
//    }
//    if(i!=turn){
//        socket->write(data);
//        socket->waitForBytesWritten(-1);
//    }
//}



//int n=server::getNumOfClients();

////read username
//while(!socket->waitForReadyRead(-1));
//QByteArray data=socket->readAll();

////write clients turn
//std::string _turn=std::to_string(turn);
//socket->write((char*)_turn);
//socket->waitForBytesWritten(-1);

//for(int i=1;i<server::getNumOfClients();i++){
//    beginingOfTheGame();
//}

//for(int i=server::getNumOfClients();i>0;i--){
//    beginingOfTheGame();
//}


//while(true){

//    //check if has bug--->yes  string n...

//    QByteArray data;

//    //dice
//    if(turn==(count%n)+1){

//        while(!socket->waitForReadyRead(-1));
//        data=socket->readAll();

//    }

//    socket->write(data);
//    socket->waitForBytesWritten(-1);
//    //get card


//    //action
//    if(turn==(count%n)+1){

//        while(!socket->waitForReadyRead(-1));
//        data=socket->readAll();
//    }


//    socket->write();
//    socket->waitForBytesWritten(-1);


//}

void channels::signUpSlot(){


}

void channels::();
void channels::_3playersSlot();
void channels::_4PlayersSlot();


