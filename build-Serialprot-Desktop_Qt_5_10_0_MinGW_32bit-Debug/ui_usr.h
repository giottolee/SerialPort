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
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_usr
{
public:

    void setupUi(QDialog *usr)
    {
        if (usr->objectName().isEmpty())
            usr->setObjectName(QStringLiteral("usr"));
        usr->resize(711, 516);

        retranslateUi(usr);

        QMetaObject::connectSlotsByName(usr);
    } // setupUi

    void retranslateUi(QDialog *usr)
    {
        usr->setWindowTitle(QApplication::translate("usr", "Dialog", nullptr));
    } // retranslateUi

};

namespace Ui {
    class usr: public Ui_usr {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_USR_H
