#ifndef CHANNELS_H
#define CHANNELS_H
#include<QDebug>
#include <QObject>
#include<QTcpSocket>
#include<thread>
class channels : public QObject
{
    Q_OBJECT
public:
   channels(QTcpSocket*,QObject *parent = nullptr);
   ~channels();
   void communicate();
private:
   QTcpSocket* socket;
   std::thread t;

signals:

};

#endif // CHANNELS_H
