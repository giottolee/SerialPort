#include "usr.h"
#include "ui_usr.h"

usr::usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usr)
{
    ui->setupUi(this);
}

usr::~usr()
{
    delete ui;
}
