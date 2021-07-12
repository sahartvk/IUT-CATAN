#include "catan.h"
#include "catan1.h"
#include "playground.h"
#include "sign_in.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    catan c1;
    c1.show();
    playground c;
    c.show();
    return a.exec();
}
