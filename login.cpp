#include "login.h"
#include "ui_login.h"
#include "QMessageBox"


Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    ui->password->setEchoMode(QLineEdit::Password);//当输入密码时，显示为*******
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_pushButton_clicked()
{
    if(this->ui->usrname->text().trimmed() == tr("admin") &&
           this->ui->password->text().trimmed()== tr("root"))  //去除lineEdit内的用户名和密码进行校验
        {
            //登陆成功后显示对话框
            this->hide();
            Usr->show();
        }
        else
        {
            //用户输入存在错误
            QMessageBox::warning(this,tr("waring"),tr("your passward is wrong"),QMessageBox::Yes);
            ui->usrname->clear();  //清空姓名usrname
            ui->password->clear();  //清空密码passward
            ui->usrname->setFocus();  //将鼠标重新定位到usrname
        }
}
