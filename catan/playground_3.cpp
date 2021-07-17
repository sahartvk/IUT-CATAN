#include "playground_3.h"
#include "ui_playground_3.h"

playground_3::playground_3(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::playground_3)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    //do not forget to set its color
    p=new Player();
    m=new Map();

    ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");
    ui->building->addItem(QIcon(":/prefix1/image/3916977.png"),"City");
    ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settelment");
    ui->building->addItem(QIcon(":/prefix1/image/4827397.png"),"Bridge");

    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));
    connect(clientSocket,SIGNAL(disconnected()),this,SLOT(disconnectFromServer()));

    connect(ui->developmentcard,SIGNAL(clicked(bool)),this,SLOT(developmentcardClicked()));
    connect(ui->dice,SIGNAL(clicked(bool)),this,SLOT(diceClicked()));
    connect(ui->end,SIGNAL(clicked(bool)),this,SLOT(finishTurnClicked()));
    connect(ui->trade,SIGNAL(clicked(bool)),this,SLOT(tradeClicked()));
    //connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(onOk()));
    //connect(ui->robber,SIGNAL(clicked(bool)),this,SLOT(onRobber()));
}


playground_3::~playground_3()
{
}

void playground_3::myWrite(QByteArray& data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void playground_3::myWrite(QString& data){

    clientSocket->write(data.toUtf8());
    clientSocket->waitForBytesWritten(-1);
}

void playground_3::myRead(QByteArray& data){

    while(!clientSocket->waitForReadyRead(-1));
    data=clientSocket->readAll();
}


//starts from here

void playground_3::readingData(){

//    QByteArray data;
//    myRead(data);

    QByteArray data=clientSocket->readAll();
    //????? what do we do with the data???????

    QString sdata=data;

       if(sdata.contains("goB")){
           //get the player a road and a settelment
           //enable all buttons except dice and trade
       }
       else if(sdata.contains("stop")){
           //disable all buttons


       }
       else if(sdata.contains("rollDice")){
           //enable dice
       }
       else if(sdata.contains("go")){

           //enable all buttons except dice
       }
       else if(sdata.contains("diceNum")){

       }
       else if(sdata.contains("robber")){

       }
       else if(sdata.contains("moveRobber")){

       }
       else if(sdata.contains("robberToTile")){

       }
       //else if(s 1:10,9,8-color)
       else if(sdata.contains("development")){

       }
       else{

           //update something:
           //dice
           //vertice
           //edge
           //trade
       }
}

void playground_3::verticeClicked(){

    //initial info
    QString info;

    QString sdata="vertice:";
    sdata+=info;

    myWrite(sdata);
}

void playground_3::edgeClicked(){

    //initial info
    QString info;

    QString sdata="edge:";
    sdata+=info;

    myWrite(sdata);
}

void playground_3::finishTurnClicked(){

    QString sdata="finish";
    myWrite(sdata);
}

void playground_3::diceClicked(){

    //diceroll  initial num
    int num;
    QString info=QString::number(num);

    QString sdata="dice:";
    sdata+=info;

    myWrite(sdata);
}

void playground_3::developmentcardClicked(){

    //

}

void playground_3::tradeClicked(){

    //

}
