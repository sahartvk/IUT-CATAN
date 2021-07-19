#ifndef TRADE_H
#define TRADE_H

#include <QWidget>
#include<QTcpSocket>
#include<QByteArray>
#include<vector>
#include "RecourceCard.h"
#include "Seaport.h"

namespace Ui {
class trade;
}

class trade : public QWidget
{
    Q_OBJECT

public:
    explicit trade(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~trade();

        trade(vector<RecourceCard>&resource , vector<Seaport>&seaports);
        bool trade_bank(string,string);
        bool trade_Clients(vector<RecourceCard>_give, vector<RecourceCard>_recieve);
        bool trade_seaport();//need correction
public slots:
    void onTrade();
    void onYour_sheap();
    void onYour_brick();
    void onYour_wheat();
    void onYour_stone();
    void onYour_wood();


    void onTheir_sheap();
    void onTheir_brick();
    void onTheir_wheat();
    void onTheir_stone();
    void onTheir_wood();
    void onOk();
private:
    Ui::trade *ui;

    QTcpSocket* clientSocket;
    vector<RecourceCard>sources;
    vector<Seaport>ports;

    vector<RecourceCard>give;
    vector<RecourceCard>recieve;
    int ratio1;  //give
    int ratio2;   //get
    QString tradetype;

    int sheap_You=0;
    int brick_You=0;
    int wheat_You=0;
    int stone_You=0;
    int wood_You=0;

    int sheap_Their=0;
    int brick_Their=0;
    int wheat_Their=0;
    int stone_Their=0;
    int wood_Their=0;
};

#endif // TRADE_H
