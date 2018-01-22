#ifndef USR_H
#define USR_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <qDebug>

namespace Ui {
class usr;
}

class usr : public QDialog
{
    Q_OBJECT

public:
    explicit usr(QWidget *parent = 0);
    ~usr();
//    Ui::usr *ui;
private slots:
    void on_send_clicked();
    void Read_Data();
    void on_openport_clicked();

private:
    QSerialPort *serial;
    Ui::usr *ui;
};

#endif // USR_H
