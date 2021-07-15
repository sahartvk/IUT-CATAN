#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QMainWindow>
#include<QPushButton>
#include<QTextEdit>
#include<QVBoxLayout>
#include<QTcpSocket>
#include<QByteArray>

class myClient : public QMainWindow
{
    Q_OBJECT

public:

    myClient(QWidget *parent = nullptr);
    ~myClient();

private:

    QTextEdit* ted;
    QPushButton* pbnConnect;
    QVBoxLayout* mainLayout;
    QTcpSocket* clientSocket;
    QWidget* center;

    bool connected;

    void game();

    void myWrite(QByteArray& data);
    void myWrite(QString& data);
    void myRead(QByteArray& data);

public slots:

    void readingData();
    //void writingData();
    void connectedToServer();
    //void disconnectFromServer();

    void nextClicked();

    void diceClicked();
    void finishTurnClicked();

    void signUpClicked();
    void signInClicked();

    void threePlayerGameClicked();
    void fourPlayerGameClicked();

    void verticeClicked();
    void edgeClicked();

};
#endif // MYCLIENT_H
