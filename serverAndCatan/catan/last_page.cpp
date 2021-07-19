#include "last_page.h"
#include "ui_last_page.h"
#include "catan3.h"
last_page::last_page(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::last_page)
{
    ui->setupUi(this);
    connect(ui->quit,SIGNAL(clicked(bool)),this,SLOT(onQuit()));
    connect(ui->play_again,SIGNAL(clicked(bool)),this,SLOT(onPlayAgain()));
}
void last_page::onQuit()
{
    this->close();
}
void last_page::onPlayAgain()
{
//    catan3 *c3=new catan3();
//    c3->show();
//    this->close();
}
last_page::~last_page()
{
    delete ui;
}
