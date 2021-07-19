#include "catan.h"
#include "catan1.h"
#include "playground_3.h"
#include "playground_4.h"
#include "sign_in.h"
#include "trade.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    catan c;
    c.show();
    return a.exec();
}
