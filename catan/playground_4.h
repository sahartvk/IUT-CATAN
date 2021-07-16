#ifndef PLAYGROUND_4_H
#define PLAYGROUND_4_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>


namespace Ui {
class playground;
}

class playground : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~playground();

private:
    Ui::playground *ui;

    QTcpSocket* clientSocket;

    void myWrite(QByteArray& data);
    void myWrite(QString& data);
    void myRead(QByteArray& data);


public slots:

    void readingData();
    //void writingData();
    //void connectedToServer();
    //void disconnectFromServer();

    void diceClicked();
    void finishTurnClicked();

    void verticeClicked();
    void edgeClicked();

    void deevelopmentcardClicked();
    void tradeClicked();
};

#endif // PLAYGROUND_4_H
