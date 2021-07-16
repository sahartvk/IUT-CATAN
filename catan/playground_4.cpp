#include "playground_4.h"
#include "ui_playground_4.h"

playground::playground(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::playground)
{
    ui->setupUi(this);
    ui->building->addItem(QIcon(":/prefix1/image/3154665.png"),"Road");
    ui->building->addItem(QIcon(":/prefix1/image/3916977.png"),"City");
    ui->building->addItem(QIcon(":/prefix1/image/3609777.png"),"Settelment");
    ui->building->addItem(QIcon(":/prefix1/image/4827397.png"),"Bridge");
    connect(ui->developmentcard,SIGNAL(clicked(bool)),this,SLOT(onDevelopmentcard()));
    connect(ui->dice,SIGNAL(clicked(bool)),this,SLOT(onDice()));
    connect(ui->end,SIGNAL(clicked(bool)),this,SLOT(onEndturn()));
    connect(ui->trade,SIGNAL(clicked(bool)),this,SLOT(onTrade()));
    connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(onOk()));
    connect(ui->robber,SIGNAL(clicked(bool)),this,SLOT(onRobber()));
}

void playground::onDevelopmentcard()
{

}
void playground::onDice()
{

}
void playground::onTrade()
{

}
void playground::onEndturn()
{

}
void playground::onOk()
{

}
void playground::onRobber()
{

}
playground::~playground()
{
    delete ui;
}
