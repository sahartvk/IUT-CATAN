#ifndef GUIDE_H
#define GUIDE_H

#include <QWidget>
#include<QTcpSocket>
#include<QByteArray>

namespace Ui {
class Guide;
}

class Guide : public QWidget
{
    Q_OBJECT

public:
    explicit Guide(QWidget *parent = nullptr,QTcpSocket* _clientSocket=0);
    ~Guide();
public slots:
    void onBack();
private:
    Ui::Guide *ui;
    QTcpSocket* clientSocket;
};

#endif // GUIDE_H
