#include "trade.h"
#include "ui_trade.h"

trade::trade(QWidget *parent,QTcpSocket* _clientSocket) :
    QWidget(parent),
    ui(new Ui::trade)
{
    clientSocket=_clientSocket;

    ui->setupUi(this);
    ui->trade_with->addItem(QIcon(":/prefix1/image/bank.png"),"Trade with Bank");
    ui->trade_with->addItem(QIcon(":/prefix1/image/players.png"),"Trade with Players");
    ui->trade_with->addItem(QIcon(":/prefix1/image/seaport.png"),"Trade with Seaport");
}
void trade::onTrade()
{

}
void trade::onYour_Resource()
{

}
void trade::onTheir_Resources()
{

}
void trade::onOk()
{

}
trade::~trade()
{
    delete ui;
}
