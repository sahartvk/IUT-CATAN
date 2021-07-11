#ifndef PLAYGROUND_H
#define PLAYGROUND_H

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

private:
    Ui::playground *ui;
};

#endif // PLAYGROUND_H
