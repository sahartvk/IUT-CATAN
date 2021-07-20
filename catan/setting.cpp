#include "setting.h"
#include "ui_setting.h"
#include "catan2.h"

setting::setting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::setting)
{
    ui->setupUi(this);
    connect(ui->back,SIGNAL(clicked(bool)),this,SLOT(onBack()));
}
void setting::onBack()
{
    catan2 *c2=new catan2;
    c2->show();
    this->close();
}
setting::~setting()
{
    delete ui;
}
