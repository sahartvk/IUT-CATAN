#ifndef SETTING_H
#define SETTING_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>

namespace Ui {
class setting;
}

class setting : public QMainWindow
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~setting();

public slots:
    void onBack();

private:
    Ui::setting *ui;
    QTcpSocket* clientSocket;
};

#endif // SETTING_H
