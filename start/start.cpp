#include "start.h"
#include "ui_start.h"

start::start(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::start)
{
    ui->setupUi(this);

    ui->pushButton->setStyleSheet("QPushButton { background-color: grey; }\n"
                          "QPushButton:enabled { background-color: rgb(240, 26, 34); }\n");


    connect(ui->pushButton,SIGNAL(clicked(bool)),this,SLOT(start_clicked()));

}

start::~start()
{
    delete ui;
}

void start::start_clicked(){

    QString username=ui->lineEdit->text();

    //connect to server
    //if connected:
    //write username to server
    //write user name to player
    this->close();

    //open next page

}
