#include "catan.h"
#include "catan1.h"
#include "playground_3.h"
#include "playground_4.h"
#include "sign_in.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    playground_3 p3;
    p3.show();
playground p;
p.show();
    return a.exec();
}
