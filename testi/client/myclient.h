#ifndef MYCLIENT_H
#define MYCLIENT_H

#include <QMainWindow>
#include<QPushButton>
#include<QTextEdit>
#include<QVBoxLayout>
#include<QTcpSocket>

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

    int count;
    QString color;

public slots:
    void connectToServer();
    void readingData();
    //void writingData();
    void connectedToServer();
    //void disconnected();
};
#endif // MYCLIENT_H
