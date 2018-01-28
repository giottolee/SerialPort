/********************************************************************************
** Form generated from reading UI file 'login.ui'
**
** Created by: Qt User Interface Compiler version 5.10.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *usrname;
    QLineEdit *password;
    QPushButton *cancel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(720, 547);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(160, 350, 161, 51));
        QFont font;
        font.setFamily(QStringLiteral("Arial"));
        font.setPointSize(14);
        font.setBold(false);
        font.setWeight(50);
        pushButton->setFont(font);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(190, 170, 51, 21));
        QFont font1;
        font1.setFamily(QStringLiteral("Arial"));
        font1.setPointSize(14);
        font1.setBold(true);
        font1.setWeight(75);
        label->setFont(font1);
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(190, 250, 51, 21));
        label_2->setFont(font1);
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(280, 40, 151, 61));
        QFont font2;
        font2.setFamily(QStringLiteral("Arial"));
        font2.setPointSize(20);
        font2.setBold(true);
        font2.setWeight(75);
        label_3->setFont(font2);
        usrname = new QLineEdit(Widget);
        usrname->setObjectName(QStringLiteral("usrname"));
        usrname->setGeometry(QRect(260, 160, 201, 41));
        QFont font3;
        font3.setFamily(QStringLiteral("Arial"));
        font3.setPointSize(12);
        usrname->setFont(font3);
        password = new QLineEdit(Widget);
        password->setObjectName(QStringLiteral("password"));
        password->setGeometry(QRect(260, 240, 201, 41));
        password->setFont(font3);
        cancel = new QPushButton(Widget);
        cancel->setObjectName(QStringLiteral("cancel"));
        cancel->setEnabled(true);
        cancel->setGeometry(QRect(390, 350, 161, 51));
        cancel->setFont(font);

        retranslateUi(Widget);
        QObject::connect(cancel, SIGNAL(clicked()), Widget, SLOT(close()));

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", nullptr));
        pushButton->setText(QApplication::translate("Widget", "Log in", nullptr));
        label->setText(QApplication::translate("Widget", "\350\264\246\345\217\267", nullptr));
        label_2->setText(QApplication::translate("Widget", "\345\257\206\347\240\201", nullptr));
        label_3->setText(QApplication::translate("Widget", "\347\256\241\347\220\206\345\221\230\347\231\273\351\231\206", nullptr));
        cancel->setText(QApplication::translate("Widget", "Cancel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGIN_H
