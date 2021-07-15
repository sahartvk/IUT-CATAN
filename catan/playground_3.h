#ifndef PLAYGROUND_3_H
#define PLAYGROUND_3_H

#include <QMainWindow>

namespace Ui {
class playground_3;
}

class playground_3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground_3(QWidget *parent = nullptr);
    ~playground_3();

private slots:
    void onDevelopmentcard();
    void onDice();
    void onTrade();
    void onEndturn();

private:
    Ui::playground_3 *ui;
};

#endif // PLAYGROUND_3_H
