#ifndef LAST_PAGE_H
#define LAST_PAGE_H

#include <QWidget>

namespace Ui {
class last_page;
}

class last_page : public QWidget
{
    Q_OBJECT

public:
    explicit last_page(QWidget *parent = nullptr);
    ~last_page();
public slots:
    void onQuit();
    void onPlayAgain();
private:
    Ui::last_page *ui;
};

#endif // LAST_PAGE_H
