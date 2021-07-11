#include "myclient.h"

myClient::myClient(QWidget *parent)
    : QMainWindow(parent)
{
    mainLayout=new QVBoxLayout;
    pbnConnect=new QPushButton("Connect");
    ted=new QTextEdit("press button to connecct");
    mainLayout->addWidget(pbnConnect);
    mainLayout->addWidget(ted);
    setLayout(mainLayout);
    center=new QWidget;
    center->setLayout(mainLayout);
    setCentralWidget(center);
    connect(pbnConnect,SIGNAL(clicked()),this,SLOT(connectToServer()));

}

myClient::~myClient()
{
}
void myClient::connectToServer(){
    clientSocket=new QTcpSocket;
    clientSocket->connectToHost("127.0.0.1",80);
    ted->setText("connecting");
    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer()));
    connect(clientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(writingData()));
    connect(clientSocket,SIGNAL(ReadyRead()),this,SLOT(readingData()));
    connect(clientSocket,SIGNAL(disconnect()),this,SLOT(disconnected()));

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
void myClient::readingData(){
    QByteArray data=clientSocket->readAll();
    ted->append(data);
}
void myClient::writingData(){
    ted->append("written successfully");
}
void myClient::connectedToServer(){
    ted->append("connected  successfully");
    clientSocket->write("hello\n");
}
void myClient::disconnected(){
    ted->append("connection lost");
}
