#include "server.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myServer w;
    w.startServer();
    //w.show();
    return a.exec();
}
