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

   connect(ui->sheap,SIGNAL(clicked(bool)),this,SLOT(onYour_sheap()));
   connect(ui->brick,SIGNAL(clicked(bool)),this,SLOT(onYour_brick()));
   connect(ui->wheat,SIGNAL(clicked(bool)),this,SLOT(onYour_wheat()));
   connect(ui->stone,SIGNAL(clicked(bool)),this,SLOT(onYour_stone()));
   connect(ui->wood,SIGNAL(clicked(bool)),this,SLOT(onYour_wood()));


   connect(ui->sheap_,SIGNAL(clicked(bool)),this,SLOT(onTheir_sheap()));
   connect(ui->brick_,SIGNAL(clicked(bool)),this,SLOT(onTheir_brick()));
   connect(ui->wheat_,SIGNAL(clicked(bool)),this,SLOT(onTheir_wheat()));
   connect(ui->stone_,SIGNAL(clicked(bool)),this,SLOT(onTheir_stone()));
   connect(ui->wood_,SIGNAL(clicked(bool)),this,SLOT(onTheir_wood()));
   connect(ui->tarde_button,SIGNAL(clicked(bool)),this,SLOT(onTrade()));
   connect(ui->ok,SIGNAL(clicked(bool)),this,SLOT(onOk()));
}
void trade::onTrade()
{
    //write request to server
    this->close();
}

void trade::onYour_sheap(){
    sheap_You++;
    ui->sheap_label->setText(QString::number(sheap_You));
}
void trade::onYour_brick(){
    brick_You++;
    ui->brick_label->setText(QString::number(brick_You));
}
void trade::onYour_wheat(){
    wheat_You++;
    ui->wheat_label->setText(QString::number(wheat_You));
}
void trade::onYour_stone(){
    stone_You++;
    ui->stone_label->setText(QString::number(stone_You));
}
void trade::onYour_wood(){
    wood_You++;
    ui->wood_label->setText(QString::number(wood_You));
}


void trade::onTheir_sheap(){
    sheap_Their++;
    ui->sheap_label_->setText(QString::number(sheap_Their));
}
void trade::onTheir_brick(){
    brick_Their++;
    ui->brick_label_->setText(QString::number(brick_Their));
}
void trade::onTheir_wheat(){
    wheat_Their++;
    ui->wheat_label_->setText(QString::number(wheat_Their));
}
void trade::onTheir_stone(){
    stone_Their++;
    ui->stone_label_->setText(QString::number(stone_Their));
}
void trade::onTheir_wood(){
    wood_Their++;
    ui->wood_label_->setText(QString::number(wood_Their));
}

void trade::onOk()
{
     tradetype=ui->trade_with->currentText();

}
trade::~trade()
{
    delete ui;
}

trade::trade(vector<RecourceCard>& resource, vector<Seaport>& seaports) {
    sources = resource;
    ports = seaports;
}
bool trade::trade_bank(string give,string recieve) {
    ratio1 = 4;
    ratio2 = 1;
    int count = 0;
    for (int i = 0; i < sources.size(); i++) {
        if (sources[i].gettype() == give)
            count++;
    }
    if (count >= 4) {
        for (int i = 0; count != 0; i++, count--) {
            if (sources[i].gettype() == give)
                sources.erase(sources.begin() + i);
        }
        RecourceCard card(recieve);
        sources.push_back(card);
        return true;
    }
    else
        return false;


}
bool trade::trade_Clients(vector<RecourceCard>_give , vector<RecourceCard>_recieve) {
    int cnt = 0;
    for (int i = 0; i < sources.size(); i++) {
        for (int j = 0; j < _give.size(); j++) {
            if (sources[i].gettype() == _give[j].gettype())
                cnt++;
        }
    }
    if (cnt >= _give.size())
    {
        while (cnt > 0) {
            for (int i = 0; i < sources.size(); i++) {
                for (int j = 0; j < _give.size(); j++) {
                    if (sources[i].gettype() == _give[j].gettype()) {
                        sources.erase(sources.begin() + i);
                        cnt--;
                    }
                }
            }
        }
        return true;
    }
    else
        return false;
}
bool trade::trade_seaport() {
    //not complete
}
