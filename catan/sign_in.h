#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>


namespace Ui {
class sign_in;
}

class sign_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit sign_in(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~sign_in();

public slots:
    void onSign_in();
    void onQuit();
    void onBack();
    void onFpassword();

private:
    Ui::sign_in *ui;

    QTcpSocket* clientSocket;
};

#endif // SIGN_IN_H
