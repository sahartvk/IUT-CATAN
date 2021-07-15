#include "myclient.h"

myClient::myClient(QWidget *parent)
    : QMainWindow(parent)
{
    center=new QWidget;
    mainLayout=new QVBoxLayout;
    pbnConnect=new QPushButton("Connect");
    ted=new QTextEdit("press button to connecct");

    mainLayout->addWidget(pbnConnect);
    mainLayout->addWidget(ted);

    center->setLayout(mainLayout);
    setCentralWidget(center);

    //connect(nextButton,SIGNAL(clicked()),this,SLOT(nextClicked()));

}

myClient::~myClient()
{
}

void myClient::myWrite(QByteArray& data){

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);
}

void myClient::myWrite(QString& data){

    clientSocket->write(data.toUtf8());
    clientSocket->waitForBytesWritten(-1);
}

void myClient::myRead(QByteArray& data){

    while(!clientSocket->waitForReadyRead(-1));
    data=clientSocket->readAll();
}

//void myClient::writingData(){
//    ted->append("written successfully");
//}

//void myClient::disconnectFromServer(){
//    ted->append("connection lost");
//}



//starts from here


//first page
void myClient::nextClicked(){

    clientSocket=new QTcpSocket;
    clientSocket->connectToHost("127.0.0.1",8080);

    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer()));

    //else dis connect

}

void myClient::connectedToServer(){

    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));
    connect(clientSocket,SIGNAL(disconnected()),this,SLOT(disconnectFromServer()));

    //connect(signUp,SIGNAL(clicked()),this,SLOT(signUpClicked()));
    //connect(signIn,SIGNAL(clicked()),this,SLOT(signInClicked()));

    //maybe in sign in->after sign in
    //connect(3Player,SIGNAL(clicked),this,SLOT(threePlayerGameClicked()));
    //connect(4Player,SIGNAL(clicked),this,SLOT(fourPlayerGameClicked()));

}

void myClient::readingData(){

    QByteArray data=clientSocket->readAll();
    //????? what do we do we the data???????

    QString sdata=data;

    if(sdata=="goB"){
        //get the player a road and a settelment
        //enable all buttons except dice and trade
    }
    else if(sdata=="stop"){
        //disable all buttons
    }
    else if(sdata=="rollDice"){
        //enable dice
    }
    else if(sdata=="go"){
        //enable all buttons except dice
    }
    else{
        //update something:
        //dice
        //vertice
        //edge
        //trade
    }
}

//3rd page
void myClient::signUpClicked(){

    //initial sdata by sign up info
    QString info;

    QString sdata="signup:";
    sdata+=info;

    QByteArray data(sdata.toUtf8());

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);

}

//another 3rd page
void myClient::signInClicked(){

    //initial sdata by sign in info
    QString info;

    QString sdata="signin:";
    sdata+=info;

    QByteArray data(sdata.toUtf8());

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);

    //check if its true ????

}


//4th page
void myClient::threePlayerGameClicked(){

    clientSocket->write("3");
    clientSocket->waitForBytesWritten(-1);

    //game stars  ????
    game();
}
void myClient::fourPlayerGameClicked(){

    clientSocket->write("4");
    clientSocket->waitForBytesWritten(-1);

    //game starts  ????
    game();
}

void myClient::game(){

    //connect(v bushbuttons,SIGNAL(clicked()),this,SLOT(verticeClicked()));
    //connect(e bushbuttons,SIGNAL(clicked()),this,SLOT(verticeClicked()));
    //connect(dice button,SIGNAL(clicked()),this,SLOT(diceClicked()));
    //connect(finish button,SIGNAL(clicked()),this,SLOT(finishTurnClicked()));
    //trade

}

void myClient::verticeClicked(){

    //initial info
    QString info;

    QString sdata="vertice:";
    sdata+=info;

    myWrite(sdata);
}

void myClient::edgeClicked(){

    //initial info
    QString info;

    QString sdata="edge:";
    sdata+=info;

    myWrite(sdata);
}

void myClient::finishTurnClicked(){

    QString sdata="finish";
    myWrite(sdata);
}

void myClient::diceClicked(){

    //diceroll  initial num
    int num;
    QString info=QString::number(num);

    QString sdata="dice:";
    sdata+=info;

    myWrite(sdata);
}
