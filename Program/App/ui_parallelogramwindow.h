/********************************************************************************
** Form generated from reading UI file 'parallelogramwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PARALLELOGRAMWINDOW_H
#define UI_PARALLELOGRAMWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_ParallelogramWindow
{
public:
    QGroupBox *groupBox;
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *Astorona;
    QLineEdit *Bstorona;
    QLineEdit *angleAB;
    QLabel *label_3;

    void setupUi(QWidget *ParallelogramWindow)
    {
        if (ParallelogramWindow->objectName().isEmpty())
            ParallelogramWindow->setObjectName(QString::fromUtf8("ParallelogramWindow"));
        ParallelogramWindow->resize(400, 300);
        groupBox = new QGroupBox(ParallelogramWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(50, 40, 311, 211));
        layoutWidget = new QWidget(groupBox);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(30, 140, 251, 31));
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
        angleAB = new QLineEdit(groupBox);
        angleAB->setObjectName(QString::fromUtf8("angleAB"));
        angleAB->setGeometry(QRect(70, 110, 211, 20));
        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(10, 110, 47, 13));

        retranslateUi(ParallelogramWindow);

        QMetaObject::connectSlotsByName(ParallelogramWindow);
    } // setupUi

    void retranslateUi(QWidget *ParallelogramWindow)
    {
        ParallelogramWindow->setWindowTitle(QCoreApplication::translate("ParallelogramWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("ParallelogramWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213", nullptr));
        pushButton->setText(QCoreApplication::translate("ParallelogramWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("ParallelogramWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label->setText(QCoreApplication::translate("ParallelogramWindow", "A", nullptr));
        label_2->setText(QCoreApplication::translate("ParallelogramWindow", "B", nullptr));
        label_3->setText(QCoreApplication::translate("ParallelogramWindow", "\321\203\320\263\320\276\320\273 AB", nullptr));
    } // retranslateUi

};

namespace Ui {
    class ParallelogramWindow: public Ui_ParallelogramWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PARALLELOGRAMWINDOW_H
