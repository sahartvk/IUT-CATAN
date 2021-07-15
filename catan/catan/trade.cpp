#include "trade.h"
#include "ui_trade.h"

trade::trade(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trade)
{
    ui->setupUi(this);
    ui->trade_with->addItem(QIcon(":/prefix1/image/bank.png"),"Trade with Bank");
    ui->trade_with->addItem(QIcon(":/prefix1/image/players.png"),"Trade with Players");
    ui->trade_with->addItem(QIcon(":/prefix1/image/seaport.png"),"Trade with Seaport");
}

trade::~trade()
{
    delete ui;
}