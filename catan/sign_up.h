#ifndef SIGN_UP_H
#define SIGN_UP_H

#include <QMainWindow>
#include<QTcpSocket>
#include<QByteArray>


namespace Ui {
class sign_up;
}

class sign_up : public QMainWindow
{
    Q_OBJECT

public:
    explicit sign_up(QWidget *parent = nullptr);
    ~sign_up();

public slots:
    void onSign_up();
    void onQuit();
    void onBack();
private:
    Ui::sign_up *ui;


};

#endif // SIGN_UP_H
