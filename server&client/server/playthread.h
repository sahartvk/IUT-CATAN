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
    void myRead(int i,QByteArray& data);

    void beginingOfTheGame(int i);
    void restOfTheGame();

public:
    PlayThread(std::vector<Player *> _players);

    ~PlayThread();

    void game();
};

#endif // PLAYTHREAD_H
