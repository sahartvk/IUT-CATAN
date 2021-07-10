#include "catan.h"
#include "catan1.h"
#include <windows.h>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    catan c;
    c.show();
    return a.exec();
}
