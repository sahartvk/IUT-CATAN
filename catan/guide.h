#ifndef GUIDE_H
#define GUIDE_H

#include <QWidget>

namespace Ui {
class Guide;
}

class Guide : public QWidget
{
    Q_OBJECT

public:
    explicit Guide(QWidget *parent = nullptr);
    ~Guide();
public slots:
    void onBack();
private:
    Ui::Guide *ui;
};

#endif // GUIDE_H
