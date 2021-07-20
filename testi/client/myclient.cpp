#include "myclient.h"
#include<string>
#include<stdlib.h>
#include<time.h>

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

    count =0;
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
    ted->append(QString::number(count));
    ted->append("ted append color:");
    ted->append(color);
    ted->append(data);
    ted->append("-------------");

    count++;

    srand(time(0));

    QString sdata=data;

      if(sdata.contains("ininitalColor")){

          //myWrite("color");
          std::string str=sdata.toUtf8().constData();
          str=str.substr(str.find(":")+1);
          QString qstr = QString::fromStdString(str);
          color=qstr;
     }
      else if(sdata.contains("build:S")){

          QByteArray a=color.toUtf8();
          a+=":s";
          clientSocket->write(a);
          while(clientSocket->waitForBytesWritten(-1));

      }
      else if(sdata.contains("build:R")){

          QByteArray a=color.toUtf8();
          a+=":r";
          clientSocket->write(a);
          while(clientSocket->waitForBytesWritten(-1));

      }
      else if(sdata.contains("stopDice")){

      }
      else if(sdata.contains("rollDice")){

          int n=(rand()%20)+1;
          QString temp="diceNum:";
          temp+=QString::number(n);

          QByteArray a=temp.toUtf8();
          clientSocket->write(a);
          while(clientSocket->waitForBytesWritten(-1));
      }
      else if(sdata.contains("go")){

          static int a=0;

          if(a==0){
              clientSocket->write("v5");
              while(clientSocket->waitForBytesWritten(-1));
          }
          else{
              clientSocket->write("finish");
              while(clientSocket->waitForBytesWritten(-1));
          }

          a++;

      }
//      else if(sdata.contains("diceNum")){

//          clientSocket->write("5");
//          while(clientSocket->waitForBytesWritten(-1));
//      }
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
