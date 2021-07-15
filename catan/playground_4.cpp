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
    ui->statusbar->showMessage("Example for location : V1 = Vertice + number , E1 = Edge + number");
}

playground::~playground()
{
    delete ui;
}
