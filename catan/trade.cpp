#include "trade.h"
#include "ui_trade.h"

trade::trade(vector<RecourceCard>& _resource,int& _sheep,int& _wheat,int& _wood,
             int& _stone,int& _brick,vector<Seaport>& _seaports,QWidget *parent) :
    QWidget(parent),
    ui(new Ui::trade)
{

    resource=_resource;
    sheep=_sheep;
    wheat=_wheat;
    wood=_wood;
    stone=_stone;
    brick=_brick;
    seaports=_seaports;


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
    if(tradetype=="Trade with Bank")
        trade_bank();

    //if(tradetype=="Trade with Players")

    //if(tradetype=="Trade with Seaport")

    this->close();
}

void trade::onYour_sheap(){
    sheep_You++;
    ui->sheap_label->setText(QString::number(sheep_You));
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
    sheep_Their++;
    ui->sheap_label_->setText(QString::number(sheep_Their));
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
bool trade::trade_bank() {



    if (sheep_You == 4)
    {
        if (stone_Their == 1)
        {
            sheep -= 4;
            stone += 1;
        }
        else if (brick_Their == 1)
        {
            sheep -= 4;
            brick += 1;
        }
        else if (wood_Their == 1)
        {
            sheep -= 4;
            wood += 1;
        }
        else if (wheat_Their == 1)
        {
            sheep -= 4;
            wheat += 1;
        }
    }
    else if (wheat_You == 4)
    {
        if (stone_Their == 1)
        {
            wheat -= 4;
            stone += 1;
        }
        else if (brick_Their == 1)
        {
            wheat -= 4;
            brick += 1;
        }
        else if (wood_Their == 1)
        {
            wheat -= 4;
            wood += 1;
        }
        else if (sheep_Their == 1)
        {
            wheat -= 4;
            sheep += 1;
        }
    }
    else if (stone_You == 4)
    {
        if (sheep_Their == 1)
        {
            stone -= 4;
            sheep += 1;
        }
        else if (brick_Their == 1)
        {
            stone -= 4;
            brick += 1;
        }
        else if (wood_Their == 1)
        {
            stone -= 4;
            wood += 1;
        }
        else if (wheat_Their == 1)
        {
            stone -= 4;
            wheat += 1;
        }
    }
    else if (brick_You == 4)
    {
        if (stone_Their == 1)
        {
            brick -= 4;
            stone += 1;
        }
        else if (sheep_Their == 1)
        {
            brick -= 4;
            sheep += 1;
        }
        else if (wood_Their == 1)
        {
            brick -= 4;
            wood += 1;
        }
        else if (wheat_Their == 1)
        {
            brick -= 4;
            wheat += 1;
        }
    }
    else if (wood_You == 4)
    {
        if (stone_Their == 1)
        {
            wood -= 4;
            stone += 1;
        }
        else if (brick_Their == 1)
        {
            wood -= 4;
            brick += 1;
        }
        else if (sheep_Their == 1)
        {
            wood -= 4;
            sheep += 1;
        }
        else if (wheat_Their == 1)
        {
            wood -= 4;
            wheat += 1;
        }
    }




}
bool trade::trade_Clients(vector<RecourceCard>_give , vector<RecourceCard>_recieve) {
    int cnt = 0;
    for (int i = 0; i < sources.size(); i++) {
        for (int j = 0; j < _give.size(); j++) {
            if (sources[i].gettype() == _give[j].gettype())
                cnt++;
        }
    }
    int counter=_give.size();
    if (cnt >= _give.size())
    {
        while (counter > 0) {
            for (int i = 0; i < sources.size(); i++) {
                for (int j = 0; j < _give.size(); j++) {
                    if (sources[i].gettype() == _give[j].gettype()) {
                        sources.erase(sources.begin() + i);
                        counter--;
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
