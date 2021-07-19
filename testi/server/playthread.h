#ifndef PLAYTHREAD_H
#define PLAYTHREAD_H

#include <QWidget>
#include<vector>
#include<thread>
#include "player.h"

class PlayThread
{
private:

    std::thread t;
    std::vector<Player*> players;
    int numOfPlayers;

    void myWrite(int i,QByteArray& data);
    void myWrite(int i,const char* data);
    void myWrite(int i,QString& data);
    void myRead(int i,QByteArray& data);

    void game();
    void beginingOfTheGame(int i);
    void restOfTheGame();
    void giveColor();

    QString getDevelopmentCard();

    std::vector<std::string> colors;

    void dicePart(int i);
    void buildPart(int i);


public:

    explicit PlayThread(std::vector<Player*>& _players);

    void run();
    ~PlayThread();

};

#endif // PLAYTHREAD_H
