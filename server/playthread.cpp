#include "playthread.h"
#include<stdlib.h>
#include<time.h>
#include<vector>
#include<windows.h>

PlayThread::PlayThread(std::vector<Player*>& _players)
{

    //?? is it ok????
    players=_players;

    numOfPlayers=players.size();

    colors.push_back("blue");
    colors.push_back("green");
    colors.push_back("yellow");
    colors.push_back("red");

    //t=std::thread(&PlayThread::game,this);

}

void PlayThread::run(){

    game();
}

void PlayThread::giveColor(){

    for(int j=0;j<numOfPlayers;j++){
        std::string temp="initialColor:";
        temp+=colors[j];
        QString Qtemp=QString::fromStdString(temp);

        players[j]->myWrite(Qtemp);
    }
}

void PlayThread::game(){


//    for(int j=0;j<numOfPlayers;j++){
//        players[j]->myWrite("gameStarted\n");
//    }


//    for(int j=0;j<numOfPlayers;j++){
//        QByteArray temp;
//        players[j]->myRead(temp);
//    }

    //give colors to clients
    qDebug()<<"give color\n";
    giveColor();

//    for(int j=0;j<numOfPlayers;j++){

//        QByteArray temp;
//        players[j]->myRead(temp);
//    }

    //123
    qDebug()<<"beginingOfTheGame\n";
    for(int i=0;i<numOfPlayers;i++) {
        Sleep(uint(2000));
        beginingOfTheGame(i);
    }

    Sleep(uint(1000));

    //321
   qDebug()<<"beginingOfTheGame\n";
    for(int i=numOfPlayers-1;i>=0;i--) {
        Sleep(uint(2000));
        beginingOfTheGame(i);
    }

    Sleep(uint(1000));
    qDebug()<<"restOfTheGame\n";
    restOfTheGame();
}

void PlayThread::beginingOfTheGame(int i){

    QByteArray data1;

    players[i]->myWrite("build:S");
    players[i]->myRead(data1);
    players[i]->myWrite("stop");

    qDebug() <<data1;

    for(int j=0;j<numOfPlayers;j++){

        if(i!=j){

            players[j]->myWrite(data1);
        }
    }
    qDebug() <<"wrote to clients";
    //???
    Sleep(uint(1000));

    QByteArray data2;

    players[i]->myWrite("build:R");
    players[i]->myRead(data2);
    players[i]->myWrite("stop");

    qDebug() <<data2;


    for(int j=0;j<numOfPlayers;j++){

        if(i!=j){

            players[j]->myWrite(data2);
        }
    }

    qDebug() <<"wrote to clients";
}

void PlayThread::dicePart(int i){

    qDebug()<<"dice part\n";

    QByteArray data1;

    //read dice number
    players[i]->myWrite("rollDice");
    players[i]->myRead(data1);
    players[i]->myWrite("stopDice");

    qDebug() <<data1;

    Sleep(uint(500));

    if(data1.contains("diceNum:7")){

        for(int j=0;j<numOfPlayers;j++)
            players[j]->myWrite("robber");

        for(int j=0;j<numOfPlayers;j++){
            QByteArray data2;

            players[j]->myRead(data2);

            //QString s=data3;
            //if(s.contains("Yes"))
                //add s to bank
        }

        QByteArray data3;
        players[i]->myWrite("moveRobber");
        players[i]->myRead(data3);
        for(int j=0;j<numOfPlayers;j++){
            if(i!=j)
                players[j]->myWrite(data3);
        }

    }

    else{
        for(int j=0;j<numOfPlayers;j++){
            //== or !=  ???
            players[j]->myWrite(data1);
        }

        qDebug() <<"wrote to clients";
    }

}

void PlayThread::buildPart(int i){


    qDebug()<<"building started\n";

    while(1){
        QByteArray data1;

        players[i]->myWrite("go");

        players[i]->myRead(data1);

        qDebug() <<data1;

        if(data1.contains("finish")){

            players[i]->myWrite("stop");

            qDebug() <<"finish";

            break;
        }

        else if(data1.contains("buyDevelopment")){

            QByteArray data2;
            data2="davelopment";

            //choose a random development card
            data2+=getDevelopmentCard();

            players[i]->myWrite(data2);
        }

        //else if(data1.contains("trade"))

        else{

            for(int j=0;j<numOfPlayers;j++){
                if(i!=j)
                    players[j]->myWrite(data1);
            }

            qDebug() <<"wrote to clients";
        }


        players[i]->myWrite("stop");
        Sleep(uint(500));
    }

    qDebug()<<"end of the building part\n";

}

void PlayThread::restOfTheGame(){


    //who is the winner
    for(int i=0;i<numOfPlayers;i++){

        dicePart(i);

        Sleep(uint(1000));

        buildPart(i);


        if(i==numOfPlayers-1)
            i=-1;
    }

}

QString PlayThread::getDevelopmentCard(){

    std::vector<QString> vec;
    vec.push_back("knight");
    vec.push_back("road_construcction");
    vec.push_back("blessed_year");
    vec.push_back("exclusive_right");
    vec.push_back("victory");


    std::srand(std::time(0));

    int n=(std::rand()%5);

    return vec[n];
}

PlayThread::~PlayThread(){
    t.join();

    //game finished
}
