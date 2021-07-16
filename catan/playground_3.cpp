#include "playground_3.h"
#include "ui_playground_3.h"

playground_3::playground_3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::playground_3)
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

playground_3::~playground_3()
{
    delete ui;
}

void playground_3::onDevelopmentcard()
{

}
void playground_3::onDice()
{

}
void playground_3::onTrade()
{

}
void playground_3::onEndturn()
{

}
void playground_3::onRobber()
{

}
void playground_3::onOk()
{

}

