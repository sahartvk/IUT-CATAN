#include "robber.h"
#include "ui_robber.h"

Robber::Robber(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Robber)
{
    ui->setupUi(this);
}
void Robber::move(int l)
{
    location = l;
}
void Robber::onSheap()
{

}
void Robber::onWheat()
{

}
void Robber::onWood()
{

}
void Robber::onBrick()
{

}
void Robber::onStone()
{

}
Robber::~Robber()
{
    delete ui;
}
