#ifndef CATAN2_H
#define CATAN2_H

#include <QMainWindow>
#include<QTcpSocket>
//#include<QByteArray>

namespace Ui {
class catan2;
}

class catan2 : public QMainWindow
{
    Q_OBJECT

public:
    explicit catan2(QTcpSocket*& _clientSocket,QWidget *parent = 0);
    ~catan2();

public slots:
    void onSign_in();
    void onSign_up();
    void onSetting();
    void onGuide();
    void onQuit();

private:
    Ui::catan2 *ui;

    QTcpSocket* clientSocket;
};

#endif // CATAN2_H
