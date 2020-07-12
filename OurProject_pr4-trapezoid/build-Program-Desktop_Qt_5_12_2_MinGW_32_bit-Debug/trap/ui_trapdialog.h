/********************************************************************************
** Form generated from reading UI file 'trapdialog.ui'
**
** Created by: Qt User Interface Compiler version 5.12.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAPDIALOG_H
#define UI_TRAPDIALOG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_TrapDialog
{
public:
    QGroupBox *groupBox;
    QLineEdit *lineEdit;
    QLabel *label;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *TrapDialog)
    {
        if (TrapDialog->objectName().isEmpty())
            TrapDialog->setObjectName(QString::fromUtf8("TrapDialog"));
        TrapDialog->resize(800, 600);
        groupBox = new QGroupBox(TrapDialog);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(140, 70, 221, 131));
        lineEdit = new QLineEdit(groupBox);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(90, 20, 113, 20));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 20, 61, 16));
        pushButton = new QPushButton(TrapDialog);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));
        pushButton->setGeometry(QRect(80, 290, 161, 91));
        pushButton_2 = new QPushButton(TrapDialog);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));
        pushButton_2->setGeometry(QRect(340, 290, 171, 91));

        retranslateUi(TrapDialog);

        QMetaObject::connectSlotsByName(TrapDialog);
    } // setupUi

    void retranslateUi(QDialog *TrapDialog)
    {
        TrapDialog->setWindowTitle(QApplication::translate("TrapDialog", "TrapDialog", nullptr));
        groupBox->setTitle(QApplication::translate("TrapDialog", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205:", nullptr));
        label->setText(QApplication::translate("TrapDialog", "\320\241\321\202\320\276\321\200\320\276\320\275\320\260 \320\260", nullptr));
        pushButton->setText(QApplication::translate("TrapDialog", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QApplication::translate("TrapDialog", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrapDialog: public Ui_TrapDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPDIALOG_H
