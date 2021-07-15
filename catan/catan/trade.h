#ifndef TRADE_H
#define TRADE_H

#include <QWidget>

namespace Ui {
class trade;
}

class trade : public QWidget
{
    Q_OBJECT

public:
    explicit trade(QWidget *parent = nullptr);
    ~trade();

private:
    Ui::trade *ui;
};

#endif // TRADE_H
