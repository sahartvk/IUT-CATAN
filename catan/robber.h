#ifndef ROBBER_H
#define ROBBER_H

#include <QWidget>

namespace Ui {
class Robber;
}

class Robber : public QWidget
{
    Q_OBJECT

public:
    explicit Robber(QWidget *parent = nullptr);
    void move(int);
    ~Robber();
public slots:
    void onSheap();
    void onWheat();
    void onWood();
    void onBrick();
    void onStone();
private:
    Ui::Robber *ui;
    int location;
};

#endif // ROBBER_H
