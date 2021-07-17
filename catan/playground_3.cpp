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
           //activate dice pushbutton
           //slot of dice button
       }
       else if(sdata.contains("go")){

           //enable all buttons except dice
           std::vector<std::string>temp;
           temp=p->can_Buy_Building();
           //add to combo box elements of temp
           if(p->can_buy_Dev_card()){
               //add developmentcards to combo box
               //activate buy dev_cards pushbuttons

           }
           //activate trade pushbutton
           //activate endturn pushbutton

       }
       else if(sdata.contains("diceNum")){

           std::string str=sdata.toUtf8().constData();
           int num=std::stoi(str.substr(str.find(":")+1));

           vector<std::string> temp=m->getCards(num,p->getColor());
           p->update_resource(temp);

       }
       else if(sdata.contains("robber")){

            if(p->getNumOfResourceCard()>7){
                QString temp="Yesrobber";
                //open robber page and choose cards
                QString data;
                //intialize data like (2wood,3 sheap)
                temp+=data;
                myWrite(temp);

            }
            else{
                QString temp="Norobber";
                myWrite(temp);
            }
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
