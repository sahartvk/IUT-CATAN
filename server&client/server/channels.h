#ifndef CHANNELS_H
#define CHANNELS_H
#include<QDebug>
#include <QObject>
#include<QTcpSocket>
#include<thread>
#include<QString>


class channels : public QObject
{
    Q_OBJECT
public:
    friend class server;

   channels(QTcpSocket*,QObject *parent = nullptr);
   ~channels();
   void communicate();
private:
   QTcpSocket* socket;
   std::thread t;

   QString username;
   int gameType;

   int turn;

   void beginingOfTheGame();

public slots:
   void signUpSlot();
   void signInSlot();
   void _3playersSlot();
   void _4PlayersSlot();

signals:

   void signUp();
   void signIn();
   void _3players();
   void _4Players();

};

#endif // CHANNELS_H
