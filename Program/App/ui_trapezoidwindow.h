/********************************************************************************
** Form generated from reading UI file 'trapezoidwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRAPEZOIDWINDOW_H
#define UI_TRAPEZOIDWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrapezoidWindow
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *TrapezoidWindow)
    {
        if (TrapezoidWindow->objectName().isEmpty())
            TrapezoidWindow->setObjectName(QString::fromUtf8("TrapezoidWindow"));
        TrapezoidWindow->resize(400, 300);
        widget = new QWidget(TrapezoidWindow);
        widget->setObjectName(QString::fromUtf8("widget"));
        widget->setGeometry(QRect(190, 260, 195, 30));
        horizontalLayout = new QHBoxLayout(widget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(widget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(widget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(TrapezoidWindow);

        QMetaObject::connectSlotsByName(TrapezoidWindow);
    } // setupUi

    void retranslateUi(QWidget *TrapezoidWindow)
    {
        TrapezoidWindow->setWindowTitle(QCoreApplication::translate("TrapezoidWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("TrapezoidWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TrapezoidWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrapezoidWindow: public Ui_TrapezoidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPEZOIDWINDOW_H
