#include "playthread.h"

PlayThread::PlayThread(std::vector<Player*> _players)
{

    //?? is it ok????
    players=_players;

    numOfPlayers=players.size();

    t=std::thread(&PlayThread::game,this);

}

void PlayThread::game(){

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

void PlayThread::myWrite(int i,QByteArray& data){

    players[i]->socket->write(data);
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

void PlayThread::beginingOfTheGame(int i){

    QByteArray data;
    myWrite(i,"goB");

    for(int i=0;i<2;i++){

        myRead(i,data);
        for(int j=0;j<numOfPlayers;j++){

            if(i!=j){

                    myWrite(j,data);
            }
        }
    }

    myWrite(i,"stop");

}

void PlayThread::restOfTheGame(){

    for(int i=0;i<numOfPlayers;i++){


        QByteArray data1="",data2="";

        //read dice number
        myWrite(i,"rollDice");

        myRead(i,data1);
        for(int j=0;j<numOfPlayers;j++){
            //== or !=???
            myWrite(j,data1);
        }



        //action
        myWrite(i,"go");

        while(data2!="finish"){
            myRead(i,data2);

            for(int j=0;j<numOfPlayers;j++){
                //== or !=?????
                myWrite(j,data1);
            }
        }

        myWrite(i,"stop");
    }

}


PlayThread::~PlayThread(){
    t.join();

    //game finished
}
