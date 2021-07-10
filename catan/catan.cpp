#include "catan.h"
#include "catan1.h"
#include "ui_catan.h"
#include <Windows.h>
catan::catan(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::catan)
{
    ui->setupUi(this);
    connect(ui->loading,SIGNAL(clicked(bool)),this,SLOT(onLoading()));
}

void catan::onLoading(){
    catan1 *c1=new catan1;
    c1->show();
    this->close();
}
catan::~catan()
{
    delete ui;
}

