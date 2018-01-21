#ifndef USR_H
#define USR_H

#include <QDialog>

namespace Ui {
class usr;
}

class usr : public QDialog
{
    Q_OBJECT

public:
    explicit usr(QWidget *parent = 0);
    ~usr();
    Ui::usr *ui;
};

#endif // USR_H
