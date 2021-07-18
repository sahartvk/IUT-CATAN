#ifndef SETTING_H
#define SETTING_H

#include <QMainWindow>

namespace Ui {
class setting;
}

class setting : public QMainWindow
{
    Q_OBJECT

public:
    explicit setting(QWidget *parent = nullptr);
    ~setting();

public slots:
    void onBack();

private:
    Ui::setting *ui;
};

#endif // SETTING_H
