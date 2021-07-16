#include "sign_in.h"
#include "ui_sign_in.h"
#include "catan3.h"
#include "catan2.h"
#include <fstream>
#include <QMessageBox>

sign_in::sign_in(QWidget *parent,QTcpSocket* _clientSocket) :
    QMainWindow(parent),
    ui(new Ui::sign_in)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);

    connect(ui->sign_in_2,SIGNAL(clicked(bool)),this,SLOT(onSign_in()));
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
    connect(ui->forgotpassword,SIGNAL(clicked(bool)),this,SLOT(onFpassword()));
}
void sign_in::onSign_in()
{
    QString e,p;
    e=ui->email_->text();
    p=ui->password_->text();

    std::ifstream fin;
    fin.open("users.txt");

    bool wrongInfo=true;
    while (fin) {
        std::string line;
        getline(fin, line);
        std::string temp=line.substr(0,line.find(" "));
        line=line.substr(line.find(" ")+1);

        QString qu = QString::fromStdString(temp);

        temp="";
        temp=line.substr(0,line.find(" "));
        line=line.substr(line.find(" ")+1);

        QString qp = QString::fromStdString(temp);

        if(e.compare(qu)==0&&p.compare(qp)==0){
               wrongInfo=false;
               break;
        }
    }
    if(wrongInfo==false){
        catan3 *c3=new catan3;
        c3->show();
        this->close();
    }
    else{
        QMessageBox::critical(this,"Error"," Email or Password is not correct \n Please try again ");
    }
}
void sign_in::onQuit()
{
    this->close();
}
void sign_in::onBack()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
void sign_in::onFpassword()
{

}
sign_in::~sign_in()
{
    delete ui;
}
