#ifndef PLAYGROUND_4_H
#define PLAYGROUND_4_H

#include<QMainWindow>
#include<QTcpSocket>
#include<QByteArray>
#include<QPushButton>
#include<vector>
#include"player.h"
#include"Map.h"

namespace Ui {
class playground;
}

class playground : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~playground();

public slots:

    void readingData();
    //void writingData();
    //void connectedToServer();
    //void disconnectFromServer();

    void diceClicked();
    void finishTurnClicked();

    void verticeClicked();
    void edgeClicked();
    void tileClicked();

    void deevelopmentcardClicked();
    void tradeClicked();

    void okClicked();

private:
    Ui::playground *ui;

    QTcpSocket* clientSocket;
    vector<QPushButton*>v,e,b,t;
    void myWrite(QByteArray& data);
    void myWrite(const char* data);
    void myWrite(QString& data);
    void myRead(QByteArray& data);
    void initialPushButton();
    //string BuildingType;

};

#endif // PLAYGROUND_4_H

