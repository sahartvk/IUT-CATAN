#ifndef CATAN1_H
#define CATAN1_H

#include <QMainWindow>

namespace Ui {
class catan1;
}

class catan1 : public QMainWindow
{
    Q_OBJECT

public:
    explicit catan1(QWidget *parent = nullptr);
    ~catan1();

public slots:
    void onNext();

private:
    Ui::catan1 *ui;
};

#endif // CATAN1_H
