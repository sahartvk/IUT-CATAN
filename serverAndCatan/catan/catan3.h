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
    explicit catan3(QTcpSocket*& _clientSocket,QWidget *parent = nullptr);
    ~catan3();

public slots:

    void onBack();
    void on3Player();
    void on4Player();

private:
    Ui::catan3 *ui;

    QTcpSocket* clientSocket;

    void myWrite(const char* data);
    void myRead(QByteArray& data);


    void start3();
    void start4();
};

#endif // CATAN3_H
