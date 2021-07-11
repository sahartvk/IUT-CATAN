#ifndef CATAN3_H
#define CATAN3_H

#include <QMainWindow>

namespace Ui {
class catan3;
}

class catan3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit catan3(QWidget *parent = nullptr);
    ~catan3();

public slots:
    void onBack();
private:
    Ui::catan3 *ui;
};

#endif // CATAN3_H
