#ifndef LOGIN_H
#define LOGIN_H

#include <QWidget>
#include "usr.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT

public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();

private slots:
    void on_pushButton_clicked();

private:
    Ui::Widget *ui;
    usr *Usr=new usr;

};

#endif // LOGIN_H
