/********************************************************************************
** Form generated from reading UI file 'windowmenu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWMENU_H
#define UI_WINDOWMENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowMenu
{
public:
    QGridLayout *gridLayout;
    QPushButton *pushButton_4;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;

    void setupUi(QWidget *WindowMenu)
    {
        if (WindowMenu->objectName().isEmpty())
            WindowMenu->setObjectName(QString::fromUtf8("WindowMenu"));
        WindowMenu->resize(400, 300);
        gridLayout = new QGridLayout(WindowMenu);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        pushButton_4 = new QPushButton(WindowMenu);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        gridLayout->addWidget(pushButton_4, 1, 1, 1, 1);

        pushButton = new QPushButton(WindowMenu);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        gridLayout->addWidget(pushButton, 2, 1, 1, 1);

        pushButton_2 = new QPushButton(WindowMenu);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        gridLayout->addWidget(pushButton_2, 2, 0, 1, 1);

        pushButton_3 = new QPushButton(WindowMenu);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        gridLayout->addWidget(pushButton_3, 1, 0, 1, 1);

        pushButton_5 = new QPushButton(WindowMenu);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        gridLayout->addWidget(pushButton_5, 0, 0, 1, 1);

        pushButton_6 = new QPushButton(WindowMenu);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        gridLayout->addWidget(pushButton_6, 0, 1, 1, 1);


        retranslateUi(WindowMenu);

        QMetaObject::connectSlotsByName(WindowMenu);
    } // setupUi

    void retranslateUi(QWidget *WindowMenu)
    {
        WindowMenu->setWindowTitle(QCoreApplication::translate("WindowMenu", "Form", nullptr));
        pushButton_4->setText(QCoreApplication::translate("WindowMenu", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\277\321\200\321\217\320\274\320\276\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        pushButton->setText(QCoreApplication::translate("WindowMenu", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WindowMenu", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\277\320\260\321\200\320\260\320\273\320\273\320\265\320\273\320\276\320\263\321\200\320\260\320\274\320\274", nullptr));
        pushButton_3->setText(QCoreApplication::translate("WindowMenu", "\320\227\320\260\320\264\320\260\321\202\321\214 \320\276\320\272\321\200\321\203\320\266\320\275\320\276\321\201\321\202\321\214", nullptr));
        pushButton_5->setText(QCoreApplication::translate("WindowMenu", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\202\321\200\320\265\321\203\320\263\320\276\320\273\321\214\320\275\320\270\320\272", nullptr));
        pushButton_6->setText(QCoreApplication::translate("WindowMenu", "\320\227\320\260\320\264\320\260\321\202\321\214 \321\202\321\200\320\260\320\277\320\265\321\206\320\270\321\216", nullptr));
    } // retranslateUi

};

namespace Ui {
    class WindowMenu: public Ui_WindowMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWMENU_H
