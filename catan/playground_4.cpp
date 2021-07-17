#include "playground_4.h"
#include "ui_playground_4.h"

playground::playground(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::playground)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

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

playground::~playground()
{
    delete ui;
}

void playground::myWrite(QByteArray& data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void playground::myWrite(const char* data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void playground::myWrite(QString& data){

    clientSocket->write(data.toUtf8());
    clientSocket->waitForBytesWritten(-1);
}

void playground::myRead(QByteArray& data){

    while(!clientSocket->waitForReadyRead(-1));
    data=clientSocket->readAll();
}


//starts from here

void playground::readingData(){

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
       //else if(c 1:10,9,8-color)
       //else if(b 1:10,9,8-color)
       //else if(r 1:10,9,8-color)
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

void playground::verticeClicked(){

    //initial info
    QString info;

    QString sdata="vertice:";
    sdata+=info;

    myWrite(sdata);
}

void playground::edgeClicked(){

    //initial info
    QString info;

    QString sdata="edge:";
    sdata+=info;

    myWrite(sdata);
}

void playground::finishTurnClicked(){

    QString sdata="finish";
    myWrite(sdata);
}

void playground::diceClicked(){

    //diceroll  initial num
    int num;
    QString info=QString::number(num);

    QString sdata="dice:";
    sdata+=info;

    myWrite(sdata);
}

void playground::deevelopmentcardClicked(){

    //

}

void playground::tradeClicked(){

    //

}

void playground::tileClicked(){

}

void playground::okClicked(){

    //read for combo box

    //buildingType=ui->building->currentText();


    //if( buildingType=="settlement" ||  buildingType=="city")
        //show and enable vertices
    //else if( buildingType=="bridge" ||  buildingType=="road")
        //show and enable edges

}

