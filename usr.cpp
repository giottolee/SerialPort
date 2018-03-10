#include "usr.h"
#include "ui_usr.h"

usr::usr(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::usr)
{
    ui->setupUi(this);

#if 0
        QTimer *timer = new QTimer(this);
        connect(timer, SIGNAL(timeout()), this, SLOT(timerUpDate()));
        timer->start(1000);
#else
        qsrand(time(0));
        startTimer(1000);       // 返回值为1, 即timerId
        startTimer(5000);       // 返回值为2
        startTimer(10000);      // 返回值为3
#endif

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

//将QByteArray型转换成int型
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
    ifHandle = true;
    sendchk();
}

//读取接收到的数据
void usr::Read_Data()
{
    QByteArray buf;
    int decbuf;
    //bool ok;

    //读取串口数据
    buf = serial->readAll();

    //对串口数据进行格式转换
    decbuf = bytesToInt(buf);
    QString strbuf = QString::number(decbuf,10);

    if(ifHandle == true)
    {
        QString strTime = getTime();
        strbuf = strTime + ":      光照强度为：" + strbuf + "**********手动获取" + '\n';
        writeFile(strbuf);
        ifHandle = false;
    }
    else
    {
        QString strTime = getTime();
        strbuf = strTime + ":      光照强度为：" + strbuf + "**********自动获取" + '\n';
        writeFile(strbuf);
    }

    if(!buf.isEmpty())
    {
        QString str = ui->outputEdit->toPlainText();

        str+=strbuf + '\n';
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

        //写系统日志
        QString strTime = getTime();
        QString strbuf;
        strbuf = "系统启动： " + strTime + '\n';
        log(strbuf);
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

        QString strTime = getTime();
        QString strbuf;
        strbuf = "系统关闭： " + strTime + '\n';
        log(strbuf);
    }
}

//开始自动监控
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
        qDebug()<<tr("timer == checked");       //设置定时器=========================
        timer = new QTimer(this);
        timer->setInterval(20000);               //设置时间间隔
        connect(timer,SIGNAL(timeout()),this,SLOT(sendchk()));      //链接槽函数
        qDebug()<<tr("Timer has been inited!");

        timer->start(1000);     //开始

    }
    if(arg1 == Qt::Unchecked)
    {
        qDebug()<<tr("arg1 == unchecked");
        timer->stop();                      //暂停定时器
        qDebug()<<tr("已暂停定时器");
    }
}

//显示系统时间
#if 0
void usr::timerUpDate()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");
    ui->lblCurDate->setText(str);
}
#else
void usr::timerEvent(QTimerEvent *t)
{

     QString str = getTime();
     ui->time->setText(str);
}
#endif

QString usr::getTime()
{
    QDateTime time = QDateTime::currentDateTime();
    QString str = time.toString("yyyy-MM-dd hh:mm:ss dddd");

    return str;
}

//写文件模块
void usr::writeFile(QString str)
{
    QFile file("data.csv");

    file.open(QIODevice::ReadWrite | QIODevice::Append);

    QTextStream out(&file);
    out<<str<<endl;
    qDebug()<<"write success";
}

//系统日志
void usr::log(QString str)
{
    QFile file("log.csv");

    file.open(QIODevice::ReadWrite | QIODevice::Append);

    QTextStream out(&file);
    out<<str<<endl;
    qDebug()<<"write success";
}


















