#include "playthread.h"
#include<stdlib.h>
#include<time.h>
#include<vector>

PlayThread::PlayThread(std::vector<Player*>& _players)
{

    //?? is it ok????
    players=_players;

    numOfPlayers=players.size();

    colors.push_back("blue");
    colors.push_back("green");
    colors.push_back("yellow");
    colors.push_back("red");

    t=std::thread(&PlayThread::game,this);

}

void PlayThread::myWrite(int i,QByteArray& data){

    players[i]->socket->write(data);
    players[i]->socket->waitForBytesWritten(-1);
}

void PlayThread::myWrite(int i,QString& data){

     players[i]->socket->write(data.toUtf8());
     players[i]->socket->waitForBytesWritten(-1);
}

void PlayThread::myWrite(int i,const char* data){

    players[i]->socket->write(data);
    players[i]->socket->waitForBytesWritten(-1);
}


void PlayThread::myRead(int i,QByteArray& data){

    while(!players[i]->socket->waitForReadyRead(-1));
    data=players[i]->socket->readAll();
}

void PlayThread::giveColor(){

    for(int j=0;j<numOfPlayers;j++){
        std::string temp="color:";
        temp+=colors[j];
        QString Qtemp=QString::fromStdString(temp);
        myWrite(j,Qtemp);
    }
}

void PlayThread::game(){


    for(int j=0;j<numOfPlayers;j++){
        myWrite(j,"gameStarted\n");
    }

    QByteArray temp;
    for(int j=0;j<numOfPlayers;j++){
        myRead(j,temp);
    }

    //give colors to clients
    giveColor();

    for(int j=0;j<numOfPlayers;j++){
        myRead(j,temp);
    }

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

void PlayThread::beginingOfTheGame(int i){

    QByteArray data;
    //(i,"goB");


    myWrite(i,"build:S");
    myRead(i,data);
    myWrite(i,"stop");
    for(int j=0;j<numOfPlayers;j++){

        if(i!=j){

                myWrite(j,data);
        }
    }


    myWrite(i,"build:R");
    myRead(i,data);
    (i,"stop");
    for(int j=0;j<numOfPlayers;j++){

        if(i!=j){

                myWrite(j,data);
        }
    }

}

void PlayThread::restOfTheGame(){

    //add condition

    for(int i=0;i<numOfPlayers;i++){


        QByteArray data1="",data2="",data3="";

        //read dice number
        myWrite(i,"rollDice");
        myRead(i,data1);
        myWrite(i,"stopDice");


        if(data1=="diceNum:7"){

            for(int j=0;j<numOfPlayers;j++)
                myWrite(j,"robber");

            for(int j=0;j<numOfPlayers;j++){
                data3="";

                myRead(j,data3);

                //QString s=data3;
                //if(s.contains("Yes"))
                    //add s to bank
            }

            myWrite(i,"moveRobber");
            myRead(i,data1);

        }

        for(int j=0;j<numOfPlayers;j++){
            //== or !=  ???
            myWrite(j,data1);
        }



        //actions

        //jejfnfdjknf
        while(1){
            data2="";

            myWrite(i,"go");

            myRead(i,data2);

            if(data2=="finish")
                break;
            else if(data2=="buyDevelopment"){

                //choose a random development card
                data2="davelopment";
                data2+=getDevelopmentCard();

                myWrite(i,data2);

                continue;
            }

            //write to others to update their game
            for(int j=0;j<numOfPlayers;j++){
                //== or !=  ?????
                myWrite(j,data2);
            }
        }

        myWrite(i,"stop");



        if(i==numOfPlayers-1)
            i=0;
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
