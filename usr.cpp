#include "usr.h"
#include "ui_usr.h"

usr::usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usr)
{
    ui->setupUi(this);
    //查找可用的串口
    foreach(const QSerialPortInfo &info, QSerialPortInfo::availablePorts())
    {
        QSerialPort serial;
        serial.setPort(info);
        if(serial.open(QIODevice::ReadWrite))
        {
            ui->combox->addItem(serial.portName());
            serial.close();
        }
    }
    //设置波特率下拉菜单默认显示第三项
    ui->baudrate->setCurrentIndex(3);
    //关闭发送按钮的使能
 //   ui->openport->setEnabled(false);
    qDebug()<<tr("界面设定成功！");
}

usr::~usr()
{
    delete ui;
}

int usr::bytesToInt(QByteArray bytes)
{
    int addr = bytes[0] & 0x000000FF;
    addr |= ((bytes[1] << 8) & 0x0000FF00);
    addr |= ((bytes[2] << 16) & 0x00FF0000);
    addr |= ((bytes[3] << 24) & 0xFF000000);
    return addr;
}

//向单片机发送check
void usr::sendchk()
{
    QString chk = "check";
    serial->write(chk.toLatin1());
}

//发送数据
void usr::on_send_clicked()
{
    //serial->write(ui->inputEdit->toPlainText().toLatin1());
    //QString chk = "check";
    //serial->write(chk.toLatin1());
    sendchk();
}

//读取接收到的数据
void usr::Read_Data()
{
    QByteArray buf;
    int decbuf;
    //bool ok;

    buf = serial->readAll();
    //buf = buf.toHex();
    decbuf = bytesToInt(buf);
    QString strbuf = QString::number(decbuf,10);

    //QString strbuf;

    //decbuf = strbuf.toInt(&ok,16);

    if(!buf.isEmpty())
    {
        QString str = ui->outputEdit->toPlainText();
        str+=strbuf + ' ';
        ui->outputEdit->clear();
        ui->outputEdit->append(str);
    }

    buf.clear();
}

//点击打开串口Button事件
void usr::on_openport_clicked()
{
    if(ui->openport->text()==tr("打开串口"))
    {

        serial = new QSerialPort;
        //设置串口名
        serial->setPortName(ui->combox->currentText());
        //打开串口
        serial->open(QIODevice::ReadWrite);
        //设置波特率
        serial->setBaudRate(ui->baudrate->currentText().toInt());
        //设置数据位数
        switch(ui->databit->currentIndex())
        {
        case 5: serial->setDataBits(QSerialPort::Data5); break;
        case 6: serial->setDataBits(QSerialPort::Data6); break;
        case 7: serial->setDataBits(QSerialPort::Data7); break;
        case 8: serial->setDataBits(QSerialPort::Data8); break;
        default: break;
        }
        //设置奇偶校验
        switch(ui->conparebit->currentIndex())
        {
        case 0: serial->setParity(QSerialPort::NoParity); break;
        default: break;
        }
        //设置停止位
        switch(ui->stopbit->currentIndex())
        {
        case 1: serial->setStopBits(QSerialPort::OneStop); break;
        case 2: serial->setStopBits(QSerialPort::TwoStop); break;
        default: break;
        }
        //设置流控制
        serial->setFlowControl(QSerialPort::NoFlowControl);

        //关闭设置菜单使能
        ui->combox->setEnabled(false);
        ui->baudrate->setEnabled(false);
        ui->databit->setEnabled(false);
        ui->conparebit->setEnabled(false);
        ui->stopbit->setEnabled(false);
        ui->openport->setText(tr("关闭串口"));
        ui->send->setEnabled(true);

        //连接信号槽
        QObject::connect(serial, &QSerialPort::readyRead, this, &usr::Read_Data);
    }
    else
    {
        //关闭串口
        serial->clear();
        serial->close();
        serial->deleteLater();

        //恢复设置使能
        ui->combox->setEnabled(true);
        ui->baudrate->setEnabled(true);
        ui->databit->setEnabled(true);
        ui->conparebit->setEnabled(true);
        ui->stopbit->setEnabled(true);
        ui->openport->setText(tr("打开串口"));
        ui->send->setEnabled(false);
    }
}

void usr::on_startAutoControl_clicked()
{

    if(token == false)
    {
        qDebug()<<tr("token == false");
        ui->startAutoControl->setText(tr("暂停监控"));
        qDebug()<<tr("暂停监控");
        token = true;
        qDebug()<<tr("token赋值为true");
        on_autoControlSwitch_stateChanged(Qt::Checked);
    }
    else if(token == true)
    {
        qDebug()<<tr("token == true");
        ui->startAutoControl->setText(tr("开始监控"));
        qDebug()<<tr("开始监控");
        token = false;
        qDebug()<<tr("token赋值为false");
        on_autoControlSwitch_stateChanged(Qt::Unchecked);
    }
}


void usr::on_autoControlSwitch_stateChanged(int arg1)
{
    if(arg1 == Qt::Checked)
    {
        qDebug()<<tr("timer == checked");
        QTimer *timer = new QTimer(this);
        timer->setInterval(2000);
        connect(timer,SIGNAL(timeout()),this,SLOT(sendchk()));
        qDebug()<<tr("Timer has been inited!");

        timer->start(1000);

    }
    if(arg1 == Qt::Unchecked)
    {
        qDebug()<<tr("arg1 == unchecked");
        timer->stop();
        qDebug()<<tr("已经销毁定时器");
    }
}

