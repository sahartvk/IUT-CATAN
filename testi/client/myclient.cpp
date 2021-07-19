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
    clientSocket->connectToHost("127.0.0.1",1234);
    ted->setText("connecting");

    connect(clientSocket,SIGNAL(connected()),this,SLOT(connectedToServer()));
    //connect(clientSocket,SIGNAL(bytesWritten(qint64)),this,SLOT(writingData()));
    connect(clientSocket,SIGNAL(readyRead()),this,SLOT(readingData()));
    //connect(clientSocket,SIGNAL(disconnect()),this,SLOT(disconnected()));


}
void myClient::readingData(){

    QByteArray data=clientSocket->readAll();
    ted->append(data);


    QString sdata=data;

      if(sdata.contains("color")){

          //myWrite("color");

     }
      else if(sdata.contains("build:S")){

          clientSocket->write("s");
          while(clientSocket->waitForBytesWritten(-1));

      }
      else if(sdata.contains("build:R")){
          clientSocket->write("s");
          while(clientSocket->waitForBytesWritten(-1));

      }
      else if(sdata.contains("stopDice")){

      }
      else if(sdata.contains("rollDice")){

          clientSocket->write("5");
          while(clientSocket->waitForBytesWritten(-1));
      }
      else if(sdata.contains("go")){

          clientSocket->write("finish");
          while(clientSocket->waitForBytesWritten(-1));


      }
      else if(sdata.contains("robber")){

          clientSocket->write("No");
          while(clientSocket->waitForBytesWritten(-1));

      }
      else{


      }
}

void myClient::connectedToServer(){
    ted->append("connected  successfully\n");

    clientSocket->write("hello server\n");
}
