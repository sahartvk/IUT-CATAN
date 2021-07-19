#ifndef PLAYGROUND_3_H
#define PLAYGROUND_3_H

#include<QMainWindow>
#include<QTcpSocket>
#include<QByteArray>
#include<QPushButton>
#include<vector>
#include"player.h"
#include"Map.h"


namespace Ui {
class playground_3;
}

class playground_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground_3(QTcpSocket*& _clientSocket,QWidget *parent = nullptr);
    ~playground_3();
    void Vertice_Connection();
    void Road_Coneection();
    void Tile_Connection();
    void Bridge_Connection();

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
    void bridgeClicked();

    void developmentcardClicked();
    void tradeClicked();

    void okClicked();

    void updateNumofCards();

private:
    Ui::playground_3 *ui;

    QTcpSocket* clientSocket;
    vector<QPushButton*>v,e,b,t;
    void myWrite(QByteArray& data);
    void myWrite(const char* data);
    void myWrite(QString& data);
    void myRead(QByteArray& data);
    void initialPushButton();

    string buildingType;


    Map* m;
    Player* p;

};

#endif // PLAYGROUND_3_H
