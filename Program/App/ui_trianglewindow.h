/********************************************************************************
** Form generated from reading UI file 'trianglewindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TRIANGLEWINDOW_H
#define UI_TRIANGLEWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_TriangleWindow
{
public:
    QGroupBox *groupBox;
    QFormLayout *formLayout;
    QLabel *label;
    QLineEdit *Astorona;
    QLineEdit *Bstorona;
    QLabel *label_2;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QLineEdit *Cstorona;
    QLabel *label_3;

    void setupUi(QWidget *TriangleWindow)
    {
        if (TriangleWindow->objectName().isEmpty())
            TriangleWindow->setObjectName(QString::fromUtf8("TriangleWindow"));
        TriangleWindow->resize(400, 300);
        groupBox = new QGroupBox(TriangleWindow);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(20, 30, 321, 231));
        formLayout = new QFormLayout(groupBox);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        Astorona = new QLineEdit(groupBox);
        Astorona->setObjectName(QString::fromUtf8("Astorona"));

        formLayout->setWidget(0, QFormLayout::FieldRole, Astorona);

        Bstorona = new QLineEdit(groupBox);
        Bstorona->setObjectName(QString::fromUtf8("Bstorona"));

        formLayout->setWidget(1, QFormLayout::FieldRole, Bstorona);

        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        pushButton = new QPushButton(groupBox);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(groupBox);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);


        formLayout->setLayout(4, QFormLayout::FieldRole, horizontalLayout);

        Cstorona = new QLineEdit(groupBox);
        Cstorona->setObjectName(QString::fromUtf8("Cstorona"));

        formLayout->setWidget(2, QFormLayout::FieldRole, Cstorona);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);


        retranslateUi(TriangleWindow);

        QMetaObject::connectSlotsByName(TriangleWindow);
    } // setupUi

    void retranslateUi(QWidget *TriangleWindow)
    {
        TriangleWindow->setWindowTitle(QCoreApplication::translate("TriangleWindow", "Form", nullptr));
        groupBox->setTitle(QCoreApplication::translate("TriangleWindow", "\320\222\320\262\320\265\320\264\320\270\321\202\320\265 \321\201\321\202\320\276\321\200\320\276\320\275\321\213", nullptr));
        label->setText(QCoreApplication::translate("TriangleWindow", "a", nullptr));
        label_2->setText(QCoreApplication::translate("TriangleWindow", "b", nullptr));
        pushButton->setText(QCoreApplication::translate("TriangleWindow", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("TriangleWindow", "\320\224\320\260\320\273\320\265\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("TriangleWindow", "c", nullptr));
    } // retranslateUi

};

namespace Ui {
    class TriangleWindow: public Ui_TriangleWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TRIANGLEWINDOW_H
