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

//发送数据
void usr::on_send_clicked()
{
     serial->write(ui->inputEdit->toPlainText().toLatin1());
}

//读取接收到的数据
void usr::Read_Data()
{
    QByteArray buf;
    buf = serial->readAll();
    buf = buf.toHex();
//    buf = buf.toInt();
    if(!buf.isEmpty())
    {
        QString str = ui->outputEdit->toPlainText();
        str+=tr(buf) + " ";
        ui->outputEdit->clear();
        //ui->outputEdit->setText(buf.toHex());
        ui->outputEdit->append(str);
        //ui->outputEdit->setText(buf.toHex());
    }


/*
    if(!buf.isEmpty())
    {
        QByteArray buf1;
        QString str = ui->outputEdit->toPlainText();
        uchar abc[1000];
        int i;
        int len = str.length();
        for(i=0;i<len;i++)
        {
            QChar t = str.at(i);
            abc[i] = t.toLatin1() - '0';
        }
        abc[i++] = buf[0];
        abc[i++] = buf[1];
        for(i=0;i<(len+2);i++)
        {
            buf1[i] = abc[i];
        }
        ui->outputEdit->clear();
        ui->outputEdit->setText(buf1.toHex());
    }
 */
    buf.clear();
}

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
