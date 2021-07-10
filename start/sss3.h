#ifndef SSS3_H
#define SSS3_H

#include <QMainWindow>

namespace Ui {
class sss3;
}

class sss3 : public QMainWindow
{
    Q_OBJECT

public:
    explicit sss3(QWidget *parent = 0);
    ~sss3();

private:
    Ui::sss3 *ui;
};

#endif // SSS3_H
