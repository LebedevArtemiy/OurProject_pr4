/********************************************************************************
** Form generated from reading UI file 'circlewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CIRCLEWINDOW_H
#define UI_CIRCLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CircleWindow
{
public:
    QWidget *widget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *CircleWindow)
    {
        if (CircleWindow->objectName().isEmpty())
            CircleWindow->setObjectName(QString::fromUtf8("CircleWindow"));
        CircleWindow->resize(400, 300);
        widget = new QWidget(CircleWindow);
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


        retranslateUi(CircleWindow);

        QMetaObject::connectSlotsByName(CircleWindow);
    } // setupUi

    void retranslateUi(QWidget *CircleWindow)
    {
        CircleWindow->setWindowTitle(QCoreApplication::translate("CircleWindow", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("CircleWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CircleWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CircleWindow: public Ui_CircleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLEWINDOW_H
