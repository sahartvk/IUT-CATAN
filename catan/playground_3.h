#ifndef PLAYGROUND_3_H

#define PLAYGROUND_3_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>


namespace Ui {
class playground_3;
}

class playground_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground_3(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~playground_3();

public slots:

    void readingData();
    //void writingData();
    //void connectedToServer();
    //void disconnectFromServer();


    void diceClicked();
    void finishTurnClicked();

    void verticeClicked();
    void edgeClicked();

    void developmentcardClicked();
    void tradeClicked();

private:
    Ui::playground_3 *ui;

    QTcpSocket* clientSocket;

    void myWrite(QByteArray& data);
    void myWrite(QString& data);
    void myRead(QByteArray& data);

};

#endif // PLAYGROUND_3_H
