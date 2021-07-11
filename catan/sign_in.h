#ifndef SIGN_IN_H
#define SIGN_IN_H

#include <QMainWindow>

namespace Ui {
class sign_in;
}

class sign_in : public QMainWindow
{
    Q_OBJECT

public:
    explicit sign_in(QWidget *parent = nullptr);
    ~sign_in();

public slots:
    void onSign_in();
    void onQuit();
    void onBack();
    void onFpassword();

private:
    Ui::sign_in *ui;
};

#endif // SIGN_IN_H
