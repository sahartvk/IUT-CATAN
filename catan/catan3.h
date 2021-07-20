#ifndef CATAN3_H
#define CATAN3_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>

namespace Ui {
class catan3;
}

class catan3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit catan3(QWidget *parent = nullptr);
    ~catan3();

public slots:

    void onBack();

    void on3Player();
    void on4Player();

    void connectedToServer3();
    void connectedToServer4();

private:
    Ui::catan3 *ui;

    QTcpSocket* clientSocket;

    void myWrite(const char* data);
    void myRead(QByteArray& data);


};

#endif // CATAN3_H
