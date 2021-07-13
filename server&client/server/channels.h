#ifndef CHANNELS_H
#define CHANNELS_H
#include<QDebug>
#include <QObject>
#include<QTcpSocket>
#include<thread>
#include<QString>
#include"player.h"
//#include"server.h"


class channels : public QObject
{
    Q_OBJECT
public:
   //friend class server;

   channels(QTcpSocket*,QObject *parent = nullptr);
   ~channels();
   void communicate();
private:

   QTcpSocket* socket;
   std::thread t;

   bool finishT;

   QString username;
   int gameType;

   void signUp(QString sdata);
   void signIn(QString sdata);
   void _3players(QString sdata);
   void _4Players(QString sdata);

   void readingData(QByteArray data);

};

#endif // CHANNELS_H
