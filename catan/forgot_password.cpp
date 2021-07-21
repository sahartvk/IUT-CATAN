#include "forgot_password.h"
#include "ui_forgot_password.h"
#include <fstream>
#include <QMessageBox>
#include "sign_in.h"
#include "catan2.h"
forgot_password::forgot_password(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::forgot_password)
{
    ui->setupUi(this);
    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(onChangePassword()));
}
void forgot_password::onChangePassword()
{
    QString e,p;
    e=ui->email->text();
    p=ui->username->text();

    std::ifstream fin;
    fin.open("users.txt");
    std::string line;
    bool wrongInfo=true;
    while (getline(fin, line)) {
        std::string temp=line.substr(0,line.find(" "));
        line=line.substr(line.find(" ")+1);

        QString qu = QString::fromStdString(temp);

        temp="";
        temp=line.substr(0,line.find(" "));
        line=line.substr(line.find(" ")+1);

        temp="";
        temp=line;

        QString qp = QString::fromStdString(temp);

        if(e.compare(qu)==0&&p.compare(qp)==0){
               wrongInfo=false;
               break;
        }
    }
    if(wrongInfo==false){
        if(ui->password->text()!=ui->rpassword->text())
        {
           QMessageBox::critical(this,"Error"," Password and RepeatPassword is not similar\n");
           catan2 *c2=new catan2;
           c2->show();
           this->close();
        }
        QString u,p,e;
        u=ui->username->text();
        p=ui->password->text();
        e=ui->email->text();

        QString qstr=e+" "+p+" "+u+"\n";
        std::string str = qstr.toLocal8Bit().constData();

        std:: ofstream fout;
        fout.open("users.txt",std::ios_base::app);
        fout<<str;
        fout.close();

        sign_in *si=new sign_in;
        si->show();
        this->close();

    }
    else{
        QMessageBox::critical(this,"Error"," Email or Username is not correct\n");
    }
}
forgot_password::~forgot_password()
{

    delete ui;
}
