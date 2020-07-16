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
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TrapezoidWindow
{
public:
    QGroupBox *groupBox;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Astorona;
    QLineEdit *Bstorona;
    QLineEdit *Cstorona;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *Dstorona;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label_5;
    QLabel *label_6;

    void setupUi(QWidget *TrapezoidWindow)
    {
        if (TrapezoidWindow->objectName().isEmpty())
            TrapezoidWindow->setObjectName(QString::fromUtf8("TrapezoidWindow"));
        TrapezoidWindow->resize(400, 300);
        groupBox = new QGroupBox(TrapezoidWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 10, 291, 201));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(10, 30, 47, 16));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(10, 70, 47, 16));
        Astorona = new QLineEdit(groupBox);
        Astorona->setObjectName(QString::fromUtf8("Astorona"));
        Astorona->setGeometry(QRect(30, 30, 251, 20));
        Bstorona = new QLineEdit(groupBox);
        Bstorona->setObjectName(QString::fromUtf8("Bstorona"));
        Bstorona->setGeometry(QRect(30, 70, 251, 20));
        Cstorona = new QLineEdit(groupBox);
        Cstorona->setObjectName(QString::fromUtf8("Cstorona"));
        Cstorona->setGeometry(QRect(30, 110, 251, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 47, 13));
        label_4 = new QLabel(groupBox);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(10, 140, 47, 13));
        Dstorona = new QLineEdit(groupBox);
        Dstorona->setObjectName(QString::fromUtf8("Dstorona"));
        Dstorona->setGeometry(QRect(30, 140, 251, 20));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(60, 170, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        label_5 = new QLabel(TrapezoidWindow);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(20, 230, 341, 21));
        label_6 = new QLabel(TrapezoidWindow);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(20, 260, 301, 21));

        retranslateUi(TrapezoidWindow);

        QMetaObject::connectSlotsByName(TrapezoidWindow);
    } // setupUi

    void retranslateUi(QWidget *TrapezoidWindow)
    {
        TrapezoidWindow->setWindowTitle(QCoreApplication::translate("TrapezoidWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TrapezoidWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213:", nullptr));
        label->setText(QCoreApplication::translate("TrapezoidWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("TrapezoidWindow", "B", nullptr));
        label_3->setText(QCoreApplication::translate("TrapezoidWindow", "C", nullptr));
        label_4->setText(QCoreApplication::translate("TrapezoidWindow", "D", nullptr));
        pushButton->setText(QCoreApplication::translate("TrapezoidWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TrapezoidWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label_5->setText(QCoreApplication::translate("TrapezoidWindow", "a - \320\275\320\270\320\266\320\275\320\265\320\265 \320\276\321\201\320\275\320\276\320\262\320\260\320\275\320\270\320\265, c - \320\262\320\265\321\200\321\205\320\275\320\265\320\265", nullptr));
        label_6->setText(QCoreApplication::translate("TrapezoidWindow", "b, d - \320\261\320\276\320\272\320\276\320\262\321\213\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\320\270", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TrapezoidWindow: public Ui_TrapezoidWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRAPEZOIDWINDOW_H
