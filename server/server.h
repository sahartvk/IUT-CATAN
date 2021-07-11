#ifndef SERVER_H
#define SERVER_H

#include <QMainWindow>
#include<QTcpServer>
#include<vector>
#include"channels.h"
class server : public QMainWindow
{
    Q_OBJECT

public:
    server(QWidget *parent = nullptr);
    ~server();
private:
    QTcpServer* myserver;
    std::vector<channels*>connections;
public slots:
    void newConnectionSlot();
};
#endif // SERVER_H
