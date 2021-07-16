#ifndef CATAN_H
#define CATAN_H

#include <QMainWindow>
#include "catan1.h"

QT_BEGIN_NAMESPACE
namespace Ui { class catan; }
QT_END_NAMESPACE

class catan : public QMainWindow
{
    Q_OBJECT

public:
    explicit catan(QWidget *parent = nullptr);
    ~catan();

public slots:
    void onLoading();

private:
    Ui::catan *ui;
};
#endif // CATAN_H
