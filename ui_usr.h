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
    QLabel *label;
    QLabel *label_2;
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
    QTextEdit *inputEdit;
    QTextEdit *outputEdit;

    void setupUi(QDialog *usr)
    {
        if (usr->objectName().isEmpty())
            usr->setObjectName(QStringLiteral("usr"));
        usr->resize(1132, 664);
        label = new QLabel(usr);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(50, 40, 100, 29));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(18);
        font.setBold(true);
        font.setWeight(75);
        label->setFont(font);
        label_2 = new QLabel(usr);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(50, 510, 100, 29));
        label_2->setFont(font);
        send = new QPushButton(usr);
        send->setObjectName(QStringLiteral("send"));
        send->setGeometry(QRect(600, 560, 291, 41));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(16);
        font1.setBold(true);
        font1.setWeight(75);
        send->setFont(font1);
        openport = new QPushButton(usr);
        openport->setObjectName(QStringLiteral("openport"));
        openport->setGeometry(QRect(940, 370, 151, 41));
        openport->setFont(font1);
        write = new QPushButton(usr);
        write->setObjectName(QStringLiteral("write"));
        write->setGeometry(QRect(940, 440, 151, 41));
        write->setFont(font1);
        layoutWidget = new QWidget(usr);
        layoutWidget->setObjectName(QStringLiteral("layoutWidget"));
        layoutWidget->setGeometry(QRect(940, 90, 145, 22));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QStringLiteral("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        label_3 = new QLabel(layoutWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);

        horizontalLayout->addWidget(label_3);

        combox = new QComboBox(layoutWidget);
        combox->setObjectName(QStringLiteral("combox"));

        horizontalLayout->addWidget(combox);

        layoutWidget1 = new QWidget(usr);
        layoutWidget1->setObjectName(QStringLiteral("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(940, 140, 145, 22));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setObjectName(QStringLiteral("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        label_4 = new QLabel(layoutWidget1);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setFont(font2);

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
        layoutWidget2->setGeometry(QRect(940, 190, 145, 22));
        horizontalLayout_3 = new QHBoxLayout(layoutWidget2);
        horizontalLayout_3->setObjectName(QStringLiteral("horizontalLayout_3"));
        horizontalLayout_3->setContentsMargins(0, 0, 0, 0);
        label_5 = new QLabel(layoutWidget2);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setFont(font2);

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
        layoutWidget3->setGeometry(QRect(940, 240, 145, 22));
        horizontalLayout_4 = new QHBoxLayout(layoutWidget3);
        horizontalLayout_4->setObjectName(QStringLiteral("horizontalLayout_4"));
        horizontalLayout_4->setContentsMargins(0, 0, 0, 0);
        label_6 = new QLabel(layoutWidget3);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setFont(font2);

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
        layoutWidget4->setGeometry(QRect(940, 290, 145, 22));
        horizontalLayout_5 = new QHBoxLayout(layoutWidget4);
        horizontalLayout_5->setObjectName(QStringLiteral("horizontalLayout_5"));
        horizontalLayout_5->setContentsMargins(0, 0, 0, 0);
        label_7 = new QLabel(layoutWidget4);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setFont(font2);

        horizontalLayout_5->addWidget(label_7);

        stopbit = new QComboBox(layoutWidget4);
        stopbit->addItem(QString());
        stopbit->addItem(QString());
        stopbit->setObjectName(QStringLiteral("stopbit"));

        horizontalLayout_5->addWidget(stopbit);

        inputEdit = new QTextEdit(usr);
        inputEdit->setObjectName(QStringLiteral("inputEdit"));
        inputEdit->setGeometry(QRect(50, 560, 501, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(16);
        inputEdit->setFont(font3);
        outputEdit = new QTextEdit(usr);
        outputEdit->setObjectName(QStringLiteral("outputEdit"));
        outputEdit->setGeometry(QRect(50, 90, 841, 391));
        outputEdit->setFont(font3);

        retranslateUi(usr);

        QMetaObject::connectSlotsByName(usr);
    } // setupUi

    void retranslateUi(QDialog *usr)
    {
        usr->setWindowTitle(QApplication::translate("usr", "Dialog", nullptr));
        label->setText(QApplication::translate("usr", "\347\233\221\346\216\247\347\252\227\345\217\243", nullptr));
        label_2->setText(QApplication::translate("usr", "\350\276\223\345\205\245\347\252\227\345\217\243", nullptr));
        send->setText(QApplication::translate("usr", "\345\217\221\351\200\201", nullptr));
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

    } // retranslateUi

};

namespace Ui {
    class usr: public Ui_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USR_H
