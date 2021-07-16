#ifndef PLAYGROUND_4_H
#define PLAYGROUND_4_H

#include <QMainWindow>

namespace Ui {
class playground;
}

class playground : public QMainWindow
{
    Q_OBJECT

public:
    explicit playground(QWidget *parent = nullptr);
    ~playground();
public slots:
    void onDevelopmentcard();
    void onDice();
    void onTrade();
    void onEndturn();
    void onRobber();
    void onOk();

private:
    Ui::playground *ui;
};

#endif // PLAYGROUND_4_H
