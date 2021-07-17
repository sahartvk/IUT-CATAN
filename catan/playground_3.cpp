#include "playground_3.h"
#include "ui_playground_3.h"
#include<QPushButton>

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

void playground_3::myWrite(const char* data){

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

       if(sdata.contains("build:S")){

           int n=ui->building->count();
           for(int i=0;i<n;i++){
               ui->building->removeItem(i);
           }
           ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settelment");

           //enable and show vertices to put a settlement
           for(int i=0;i<92;i++){
               QString str="v";
               str+=QString::number(i);


           }

       }
       else if(sdata.contains("build:R")){

           int n=ui->building->count();
           for(int i=0;i<n;i++){
               ui->building->removeItem(i);
           }
           ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");

           //show enable edges to put a road
       }
       else if(sdata.contains("stop")){
                  //disable all buttons

       }
       else if(sdata.contains("stopDice")){
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

           //show and enable push buttons on tile to choose one of them

       }
       else if(sdata.contains("robberToTile")){

           //robberToTile:n
           std::string str=sdata.toUtf8().constData();
           int n=std::stoi(str.substr(str.find(":")+1));
           m->moveRobberToTile(n,p->getColor());
           //robber is in tile n.update gui and set a robber picture in there

       }
       else if(sdata.contains("s")){
           //s 1:10,9,8-color

           std::string str=sdata.toUtf8().constData();
           m->addBuildingToTile(str);

           //1
           int n=std::stoi(str.substr(str.find(" "),str.find(":")));
           //update gui and put a settelment in n position

       }
       else if(sdata.contains("c")){
           //c 1:10,9,8-color
           std::string str=sdata.toUtf8().constData();
           m->addBuildingToTile(str);

           //1
           int n=std::stoi(str.substr(str.find(" "),str.find(":")));
           //update gui and put a city in n position


       }
       else if(sdata.contains("e")){
           //e 1:color  ????

       }
       else if(sdata.contains("b")){
           //b 1:color  ????


       }
       else if(sdata.contains("development")){

           //development:name

           std::string str=sdata.toUtf8().constData();
           string type=str.substr(str.find(":")+1);
           p->update_Developmentcard(type);

           //how to show develpmwnt cards in gui??????
           //->>> maybe using a combobox and add name of cards to combo
           //show development card in gui

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

    QPushButton *button = (QPushButton *)sender();

    //button->text();

    //read from file
    if(buildingType=="settlement"){

        //gui->put a settlement picture in that button

    }
    if(buildingType=="city"){

        //gui->put a city picture in that button
    }
    if(buildingType=="road"){

        //gui->put a road picture in that button
    }
    if(buildingType=="bridge"){

        //gui->put a bridge picture in that button
    }

    //initial info
    //QString info;


    //QString sdata="";
    //sdata+=info;

    //myWrite(sdata);
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

    int num=p->roll_dice();
    QString info=QString::number(num);

    QString sdata="diceNum:";
    sdata+=info;

    myWrite(sdata);
}

void playground_3::developmentcardClicked(){

    myWrite("buyDevelopment");

}

void playground_3::tradeClicked(){

    //

}

void playground_3::okClicked(){

    //read for combo box

    //buildingType=ui->building->currentText();


    //if( buildingType=="settlement" ||  buildingType=="city")
        //show and enable vertices
    //else if( buildingType=="bridge" ||  buildingType=="road")
        //show and enable edges

}

void playground_3::tileClicked(){

}
