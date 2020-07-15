/********************************************************************************
** Form generated from reading UI file 'rectanglewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_RECTANGLEWINDOW_H
#define UI_RECTANGLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_RectangleWindow
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Astorona;
    QLineEdit *Bstorona;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QWidget *RectangleWindow)
    {
        if (RectangleWindow->objectName().isEmpty())
            RectangleWindow->setObjectName(QString::fromUtf8("RectangleWindow"));
        RectangleWindow->resize(400, 300);
        groupBox = new QGroupBox(RectangleWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(30, 20, 321, 171));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(20, 40, 47, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(20, 70, 47, 16));
        Astorona = new QLineEdit(groupBox);
        Astorona->setObjectName(QString::fromUtf8("Astorona"));
        Astorona->setGeometry(QRect(40, 40, 251, 20));
        Bstorona = new QLineEdit(groupBox);
        Bstorona->setObjectName(QString::fromUtf8("Bstorona"));
        Bstorona->setGeometry(QRect(40, 70, 251, 21));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(40, 104, 251, 31));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        retranslateUi(RectangleWindow);

        QMetaObject::connectSlotsByName(RectangleWindow);
    } // setupUi

    void retranslateUi(QWidget *RectangleWindow)
    {
        RectangleWindow->setWindowTitle(QCoreApplication::translate("RectangleWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("RectangleWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213", nullptr));
        label->setText(QCoreApplication::translate("RectangleWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("RectangleWindow", "B", nullptr));
        pushButton->setText(QCoreApplication::translate("RectangleWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("RectangleWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
    } // retranslateUi

};

namespace Ui {
    class RectangleWindow: public Ui_RectangleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_RECTANGLEWINDOW_H
