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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_CircleWindow
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLineEdit *Radius;

    void setupUi(QWidget *CircleWindow)
    {
        if (CircleWindow->objectName().isEmpty())
            CircleWindow->setObjectName(QString::fromUtf8("CircleWindow"));
        CircleWindow->resize(400, 300);
        groupBox = new QGroupBox(CircleWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 30, 311, 221));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(50, 180, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 50, 21, 16));
        Radius = new QLineEdit(groupBox);
        Radius->setObjectName(QString::fromUtf8("Radius"));
        Radius->setGeometry(QRect(30, 50, 191, 24));

        retranslateUi(CircleWindow);

        QMetaObject::connectSlotsByName(CircleWindow);
    } // setupUi

    void retranslateUi(QWidget *CircleWindow)
    {
        CircleWindow->setWindowTitle(QCoreApplication::translate("CircleWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("CircleWindow", "GroupBox", nullptr));
        pushButton->setText(QCoreApplication::translate("CircleWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("CircleWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label->setText(QCoreApplication::translate("CircleWindow", "R", nullptr));
        Radius->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class CircleWindow: public Ui_CircleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CIRCLEWINDOW_H
