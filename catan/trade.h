#ifndef TRADE_H
#define TRADE_H

#include <QWidget>
#include<QTcpSocket>
#include<QByteArray>

namespace Ui {
class trade;
}

class trade : public QWidget
{
    Q_OBJECT

public:
    explicit trade(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~trade();
public slots:
    void onTrade();
    void onYour_Resource();
    void onTheir_Resources();
    void onOk();
private:
    Ui::trade *ui;

    QTcpSocket* clientSocket;
};

#endif // TRADE_H
