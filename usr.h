#ifndef USR_H
#define USR_H

#include <QDialog>
#include <QtSerialPort/QSerialPort>
#include <QtSerialPort/QSerialPortInfo>
#include <qDebug>
#include <QString>
#include <windows.h>
#include <QTimer>

namespace Ui {
class usr;
}

class usr : public QDialog
{
    Q_OBJECT

public:
    explicit usr(QWidget *parent = 0);
    ~usr();
    int bytesToInt(QByteArray bytes);
    bool token = false;
//    Ui::usr *ui;
private slots:
    void on_send_clicked();
    void Read_Data();
    void on_openport_clicked();
    void on_startAutoControl_clicked();
    void sendchk();
    void on_autoControlSwitch_stateChanged(int arg1);


private:
    QSerialPort *serial;
    Ui::usr *ui;
    QByteArray requestData;//（用于存储从串口那读取的数据）
    QTimer *timer;//（用于计时）
};

#endif // USR_H
