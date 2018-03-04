/********************************************************************************
** Form generated from reading UI file 'usr.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_USR_H
#define UI_USR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_usr
{
public:
    QPushButton *send;
    QPushButton *openport;
    QPushButton *write;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QLabel *label_3;
    QComboBox *combox;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *label_4;
    QComboBox *baudrate;
    QWidget *layoutWidget2;
    QHBoxLayout *horizontalLayout_3;
    QLabel *label_5;
    QComboBox *databit;
    QWidget *layoutWidget3;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_6;
    QComboBox *conparebit;
    QWidget *layoutWidget4;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QComboBox *stopbit;
    QTextEdit *outputEdit;
    QLabel *label_8;
    QPushButton *startAutoControl;
    QLabel *label;
    QLabel *time;

    void setupUi(QDialog *usr)
    {
        if (usr->objectName().isEmpty())
            usr->setObjectName(QStringLiteral("usr"));
        usr->resize(706, 492);
        send = new QPushButton(usr);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(150, 400, 291, 41));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(16);
        font.setBold(true);
        font.setWeight(75);
        send->setFont(font);
        openport = new QPushButton(usr);
        openport->setObjectName(QStringLiteral("openport"));
        openport->setGeometry(QRect(510, 330, 151, 41));
        openport->setFont(font);
        write = new QPushButton(usr);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(510, 400, 151, 41));
        write->setFont(font);
        layoutWidget = new QWidget(usr);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(510, 50, 145, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(12);
        font1.setBold(true);
        font1.setWeight(75);
        label_3->setFont(font1);

        horizontalLayout->addWidget(label_3);

        combox = new QComboBox(layoutWidget);
        combox->setObjectName(QStringLiteral("combox"));

        horizontalLayout->addWidget(combox);

        layoutWidget1 = new QWidget(usr);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(510, 100, 145, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font1);

        horizontalLayout_2->addWidget(label_4);

        baudrate = new QComboBox(layoutWidget1);
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->addItem(QString());
        baudrate->setObjectName(QStringLiteral("baudrate"));

        horizontalLayout_2->addWidget(baudrate);

        layoutWidget2 = new QWidget(usr);
        layoutWidget2->setObjectName(QStringLiteral("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(510, 150, 145, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font1);

        horizontalLayout_3->addWidget(label_5);

        databit = new QComboBox(layoutWidget2);
        databit->addItem(QString());
        databit->addItem(QString());
        databit->addItem(QString());
        databit->addItem(QString());
        databit->setObjectName(QStringLiteral("databit"));

        horizontalLayout_3->addWidget(databit);

        layoutWidget3 = new QWidget(usr);
        layoutWidget3->setObjectName(QStringLiteral("layoutWidget3"));
        layoutWidget3->setGeometry(QRect(510, 200, 145, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font1);

        horizontalLayout_4->addWidget(label_6);

        conparebit = new QComboBox(layoutWidget3);
        conparebit->addItem(QString());
        conparebit->addItem(QString());
        conparebit->addItem(QString());
        conparebit->addItem(QString());
        conparebit->addItem(QString());
        conparebit->setObjectName(QStringLiteral("conparebit"));

        horizontalLayout_4->addWidget(conparebit);

        layoutWidget4 = new QWidget(usr);
        layoutWidget4->setObjectName(QStringLiteral("layoutWidget4"));
        layoutWidget4->setGeometry(QRect(510, 250, 145, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font1);

        horizontalLayout_5->addWidget(label_7);

        stopbit = new QComboBox(layoutWidget4);
        stopbit->addItem(QString());
        stopbit->addItem(QString());
        stopbit->setObjectName(QStringLiteral("stopbit"));

        horizontalLayout_5->addWidget(stopbit);

        outputEdit = new QTextEdit(usr);
        outputEdit->setObjectName(QStringLiteral("outputEdit"));
        outputEdit->setGeometry(QRect(50, 140, 381, 111));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        outputEdit->setFont(font2);
        label_8 = new QLabel(usr);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(50, 70, 211, 61));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(24);
        font3.setBold(true);
        font3.setWeight(75);
        label_8->setFont(font3);
        startAutoControl = new QPushButton(usr);
        startAutoControl->setObjectName(QStringLiteral("startAutoControl"));
        startAutoControl->setGeometry(QRect(150, 330, 291, 41));
        startAutoControl->setFont(font);
        label = new QLabel(usr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 270, 71, 21));
        label->setFont(font1);
        time = new QLabel(usr);
        time->setObjectName(QStringLiteral("time"));
        time->setGeometry(QRect(110, 270, 201, 21));
        QFont font4;
        font4.setFamily(QStringLiteral("Arial"));
        font4.setPointSize(12);
        font4.setBold(false);
        font4.setWeight(50);
        time->setFont(font4);

        retranslateUi(usr);

        QMetaObject::connectSlotsByName(usr);
    } // setupUi

    void retranslateUi(QDialog *usr)
    {
        usr->setWindowTitle(QApplication::translate("usr", "\347\233\221\346\216\247\347\252\227\345\217\243", nullptr));
        send->setText(QApplication::translate("usr", "\350\216\267\345\217\226\345\275\223\345\211\215\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        openport->setText(QApplication::translate("usr", "\346\211\223\345\274\200\344\270\262\345\217\243", nullptr));
        write->setText(QApplication::translate("usr", "\345\206\231\345\205\245\346\226\207\344\273\266", nullptr));
        label_3->setText(QApplication::translate("usr", "\347\253\257\345\217\243\345\217\267\357\274\232", nullptr));
        label_4->setText(QApplication::translate("usr", "\346\263\242\347\211\271\347\216\207\357\274\232", nullptr));
        baudrate->setItemText(0, QApplication::translate("usr", "1200", nullptr));
        baudrate->setItemText(1, QApplication::translate("usr", "2400", nullptr));
        baudrate->setItemText(2, QApplication::translate("usr", "4800", nullptr));
        baudrate->setItemText(3, QApplication::translate("usr", "9600", nullptr));
        baudrate->setItemText(4, QApplication::translate("usr", "19200", nullptr));

        label_5->setText(QApplication::translate("usr", "\346\225\260\346\215\256\344\275\215\357\274\232", nullptr));
        databit->setItemText(0, QApplication::translate("usr", "5", nullptr));
        databit->setItemText(1, QApplication::translate("usr", "6", nullptr));
        databit->setItemText(2, QApplication::translate("usr", "7", nullptr));
        databit->setItemText(3, QApplication::translate("usr", "8", nullptr));

        label_6->setText(QApplication::translate("usr", "\346\240\241\351\252\214\344\275\215\357\274\232", nullptr));
        conparebit->setItemText(0, QApplication::translate("usr", "None", nullptr));
        conparebit->setItemText(1, QApplication::translate("usr", "Odd", nullptr));
        conparebit->setItemText(2, QApplication::translate("usr", "Even", nullptr));
        conparebit->setItemText(3, QApplication::translate("usr", "Mark", nullptr));
        conparebit->setItemText(4, QApplication::translate("usr", "Space", nullptr));

        label_7->setText(QApplication::translate("usr", "\345\201\234\346\255\242\344\275\215\357\274\232", nullptr));
        stopbit->setItemText(0, QApplication::translate("usr", "1", nullptr));
        stopbit->setItemText(1, QApplication::translate("usr", "2", nullptr));

        label_8->setText(QApplication::translate("usr", "\345\275\223\345\211\215\345\205\211\347\205\247\345\274\272\345\272\246", nullptr));
        startAutoControl->setText(QApplication::translate("usr", "\345\274\200\345\247\213\347\233\221\346\216\247", nullptr));
        label->setText(QApplication::translate("usr", "\346\227\266\351\227\264\357\274\232", nullptr));
        time->setText(QApplication::translate("usr", "TextLabel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usr: public Ui_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USR_H
