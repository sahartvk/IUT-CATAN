#include "myclient.h"
//using namespace std;

myClient::myClient(QWidget *parent)
    : QMainWindow(parent)
{
    center=new QWidget;
    mainLayout=new QVBoxLayout;
    pbnConnect=new QPushButton("Connect");
    ted=new QTextEdit("press button to connecct");

    mainLayout->addWidget(pbnConnect);
    mainLayout->addWidget(ted);
    //setLayout(mainLayout);

    center->setLayout(mainLayout);
    setCentralWidget(center);

    //connect(pbnConnect,SIGNAL(clicked()),this,SLOT(connectToServer()));

}

myClient::~myClient()
{
}
void myClient::connectToServer(){

//    clientSocket=new QTcpSocket;
//    clientSocket->connectToHost("127.0.0.1",8080);

//    ted->setText("connecting");

//    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer()));
//    connect(clientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(writingData()));
//    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));
//    connect(clientSocket,SIGNAL(disconnected()),this,SLOT(disconnectFromServer()));

     /*if(clientSocket->waitForConnected(3000)){
        clientSocket->write("hello");
        ted->append("sending data\n");
        clientSocket->waitForBytesWritten((2000));
        while(clientSocket->waitForReadyRead(-1));{
            QByteArray data=clientSocket->readAll();
            ted->append(data);
        }
    }
    else{
        ted->append("connection refused");
    }*/

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

void myClient::writingData(){
    ted->append("written successfully");
}

void myClient::disconnectFromServer(){
    ted->append("connection lost");
}


//start from here


//first page
void myClient::nextClicked(){

    clientSocket=new QTcpSocket;
    clientSocket->connectToHost("127.0.0.1",8080);

    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer()));

    //else dis connect

}

void myClient::connectedToServer(){

    //connect(clientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(writingData()));
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
}

//3rd page
void myClient::signUpClicked(){

    //initial sdata
    QString sdata;
    QByteArray data(sdata.toUtf8());

    clientSocket->write("signup");
    clientSocket->waitForBytesWritten(-1);

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);

}

//another 3rd page
void myClient::signInClicked(){

    //initial sdata
    QString sdata;
    QByteArray data(sdata.toUtf8());

    //
    clientSocket->write("signin");
    clientSocket->waitForBytesWritten(-1);

    clientSocket->write(data);
    clientSocket->waitForBytesWritten(-1);

}


//4th page
void myClient::threePlayerGameClicked(){

    clientSocket->write("3");
    clientSocket->waitForBytesWritten(-1);

    //game stars
    game();
}
void myClient::fourPlayerGameClicked(){

    clientSocket->write("4");
    clientSocket->waitForBytesWritten(-1);

    //game starts
    game();
}

void myClient::game(){

    count=0;

    //write username
    //initial username ?????
    QString username;
    myWrite("username");
    myWrite(username);

    //read turn
    QByteArray data;
    myRead(data);
    QString d=data;
    turn=d.toInt();
    //turn to int and then initial turn in player

    //beginingOfTheGame ???????????
    //  ?????


    //connect(v bushbuttons,SIGNAL(clicked()),this,SLOT(verticeClicked()));
    //connect(e bushbuttons,SIGNAL(clicked()),this,SLOT(verticeClicked()));
    //connect(dice button,SIGNAL(clicked()),this,SLOT(diceClicked()));
    //connect(finish button,SIGNAL(clicked()),this,SLOT(finishTurnClicked()));
    //trade


}

void myClient::verticeClicked(){

    //initial data
    write("vertice");
    write(data);
}

void myClient::edgeClicked(){

    //initial data
    write("edge");
    write(data);
}

void myClient::finishTurnClicked(){
    write("finish");
}

void myClient::diceClicked(){

    //diceroll
    int num;
    QString data=QString::number(num);
    myWrite("dice");
    myWrite(num);
}
