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
public slots:
    void onTrade();
    void onYour_Resource();
    void onTheir_Resources();
    void onOk();
private:
    Ui::trade *ui;
};

#endif // TRADE_H
