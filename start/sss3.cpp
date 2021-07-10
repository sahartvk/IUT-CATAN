#include "sss3.h"
#include "ui_sss3.h"

sss3::sss3(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::sss3)
{
    ui->setupUi(this);
}

sss3::~sss3()
{
    delete ui;
}
