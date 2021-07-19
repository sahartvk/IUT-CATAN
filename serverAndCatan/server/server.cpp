#include "server.h"

using namespace std;

myServer::myServer(QWidget *parent)
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

    if(players.size()==3){
        emit enoughPlayers();
    }

    connect(this,SIGNAL(enoughPlayers()),this,SLOT(newPlayThread()));

}

void myServer::newPlayThread(){

    PlayThread* _pt=new PlayThread(players);
    pt.push_back(_pt);

}

void myServer::newConnectionSlot(){

    //channels* newChannel=new channels(myserver->nextPendingConnection(),tempP3,tempP4);
    //connections.push_back(newChannel);

    Player* p=new Player(myserver->nextPendingConnection());
    players.push_back(p);

    if(players.size()==3){
        emit enoughPlayers();
    }

    //QTcpSocket* sock=new QTcpSocket(myserver->nextPendingConnection());

    //sockets.push_back(sock);

}
//    QByteArray data;
//    while(!p->socket->waitForReadyRead(-1));
//    data=p->socket->readAll();

//    QString sdata=data;

//    if(sdata.contains("3player")){
//        tempP3.push_back(p);
//    }

//    if(tempP3.size()==3){
//        PlayThread* _pt=new PlayThread(tempP4);
//        pt.push_back(_pt);

//        //tempP3.clear();
//    }
//    else if(tempP4.size()==4){
//        PlayThread* _pt=new PlayThread(tempP4);
//        pt.push_back(_pt);

//        //tempP4.clear();
//    }
//}





//PlayThread::PlayThread(std::vector<Player*>& _players)
//{

//    //?? is it ok????
//    players=_players;

//    numOfPlayers=players.size();

//    colors.push_back("blue");
//    colors.push_back("green");
//    colors.push_back("yellow");
//    colors.push_back("red");

//    t=std::thread(&PlayThread::game,this);

//}


//void myServer::myWrite(int i,QByteArray& data){

//    sockets[i]->write(data);
//    sockets[i]->waitForBytesWritten(-1);
//}

//void myServer::myWrite(int i,QString& data){

//     sockets[i]->write(data.toUtf8());
//     sockets[i]->waitForBytesWritten(-1);
//}

//void myServer::myWrite(int i,const char* data){

//    sockets[i]->write(data);
//    sockets[i]->waitForBytesWritten(-1);
//}

//void myServer::myRead(int i,QByteArray& data){

//    while(!sockets[i]->waitForReadyRead(-1));
//    data=sockets[i]->readAll();
//}

//void myServer::giveColor(){

//    for(int j=0;j<numOfPlayers;j++){
//        std::string temp="color:";
//        temp+=colors[j];
//        QString Qtemp=QString::fromStdString(temp);
//        myWrite(j,Qtemp);
//    }
//}

//void myServer::game(){

//    numOfPlayers=sockets.size();

//    colors.push_back("blue");
//    colors.push_back("green");
//    colors.push_back("yellow");
//    colors.push_back("red");


//        for(int j=0;j<sockets.size();j++){
//            myWrite(j,"gameStarted\n");
//        }


//    //give colors to clients
//    giveColor();

//    //123
//    for(int i=0;i<numOfPlayers;i++) {
//        beginingOfTheGame(i);
//    }

//    //321
//    for(int i=numOfPlayers;i>0;i--) {
//        beginingOfTheGame(i);
//    }

//    restOfTheGame();
//}

//void myServer::beginingOfTheGame(int i){

//    QByteArray data;
//    //(i,"goB");


//    myWrite(i,"build:S");
//    myRead(i,data);
//    (i,"stop");
//    for(int j=0;j<numOfPlayers;j++){

//        if(i!=j){

//                myWrite(j,data);
//        }
//    }


//    myWrite(i,"build:R");
//    myRead(i,data);
//    (i,"stop");
//    for(int j=0;j<numOfPlayers;j++){

//        if(i!=j){

//                myWrite(j,data);
//        }
//    }

//}

//void myServer::restOfTheGame(){

//    //add condition

//    for(int i=0;i<numOfPlayers;i++){


//        QByteArray data1="",data2="",data3="";

//        //read dice number
//        myWrite(i,"rollDice");
//        myRead(i,data1);
//        myWrite(i,"stopDice");


//        if(data1=="diceNum:7"){

//            for(int j=0;j<numOfPlayers;j++)
//                myWrite(j,"robber");

//            for(int j=0;j<numOfPlayers;j++){
//                data3="";

//                myRead(j,data3);

//                //QString s=data3;
//                //if(s.contains("Yes"))
//                    //add s to bank
//            }

//            myWrite(i,"moveRobber");
//            myRead(i,data1);

//        }

//        for(int j=0;j<numOfPlayers;j++){
//            //== or !=  ???
//            myWrite(j,data1);
//        }



//        //actions

//        //jejfnfdjknf
//        while(1){
//            data2="";

//            myWrite(i,"go");

//            myRead(i,data2);

//            if(data2=="finish")
//                break;
//            else if(data2=="buyDevelopment"){

//                //choose a random development card
//                data2="davelopment";
//                data2+=getDevelopmentCard();

//                myWrite(i,data2);

//                continue;
//            }

//            //write to others to update their game
//            for(int j=0;j<numOfPlayers;j++){
//                //== or !=  ?????
//                myWrite(j,data2);
//            }
//        }

//        myWrite(i,"stop");



//        if(i==numOfPlayers-1)
//            i=0;
//    }



//}

//QString myServer::getDevelopmentCard(){

//    std::vector<QString> vec;
//    vec.push_back("knight");
//    vec.push_back("road_construcction");
//    vec.push_back("blessed_year");
//    vec.push_back("exclusive_right");
//    vec.push_back("victory");


//    std::srand(std::time(0));

//    int n=(std::rand()%5);

//    return vec[n];
//}


myServer::~myServer()
{
}

