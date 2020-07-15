/********************************************************************************
** Form generated from reading UI file 'windowvivod.ui'
**
** Created by: Qt User Interface Compiler version 5.15.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WINDOWVIVOD_H
#define UI_WINDOWVIVOD_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSplitter>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_WindowVivod
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QGroupBox *groupBox;
    QGridLayout *gridLayout;
    QSplitter *splitter_5;
    QLabel *label_11;
    QLabel *showBC;
    QSplitter *splitter_9;
    QLabel *label_17;
    QLabel *showCA;
    QSplitter *splitter_8;
    QLabel *label_15;
    QLabel *showR;
    QSplitter *splitter;
    QLabel *label;
    QLabel *showC;
    QSplitter *splitter_11;
    QLabel *label_21;
    QLabel *showDA;
    QSplitter *splitter_6;
    QLabel *label_13;
    QLabel *showD;
    QSplitter *splitter_2;
    QLabel *label_7;
    QLabel *showAB;
    QSplitter *splitter_4;
    QLabel *label_9;
    QLabel *showP;
    QSplitter *splitter_7;
    QLabel *label_3;
    QLabel *showA;
    QSplitter *splitter_3;
    QLabel *label_5;
    QLabel *showB;
    QSplitter *splitter_10;
    QLabel *label_19;
    QLabel *showCD;
    QSplitter *splitter_12;
    QLabel *label_23;
    QLabel *showS;

    void setupUi(QWidget *WindowVivod)
    {
        if (WindowVivod->objectName().isEmpty())
            WindowVivod->setObjectName(QString::fromUtf8("WindowVivod"));
        WindowVivod->resize(517, 435);
        layoutWidget = new QWidget(WindowVivod);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(310, 390, 195, 30));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        pushButton = new QPushButton(layoutWidget);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout->addWidget(pushButton);

        pushButton_2 = new QPushButton(layoutWidget);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout->addWidget(pushButton_2);

        groupBox = new QGroupBox(WindowVivod);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(0, 0, 501, 391));
        gridLayout = new QGridLayout(groupBox);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        splitter_5 = new QSplitter(groupBox);
        splitter_5->setObjectName(QString::fromUtf8("splitter_5"));
        splitter_5->setOrientation(Qt::Horizontal);
        label_11 = new QLabel(splitter_5);
        label_11->setObjectName(QString::fromUtf8("label_11"));
        splitter_5->addWidget(label_11);
        showBC = new QLabel(splitter_5);
        showBC->setObjectName(QString::fromUtf8("showBC"));
        splitter_5->addWidget(showBC);

        gridLayout->addWidget(splitter_5, 1, 2, 1, 1);

        splitter_9 = new QSplitter(groupBox);
        splitter_9->setObjectName(QString::fromUtf8("splitter_9"));
        splitter_9->setOrientation(Qt::Horizontal);
        label_17 = new QLabel(splitter_9);
        label_17->setObjectName(QString::fromUtf8("label_17"));
        splitter_9->addWidget(label_17);
        showCA = new QLabel(splitter_9);
        showCA->setObjectName(QString::fromUtf8("showCA"));
        splitter_9->addWidget(showCA);

        gridLayout->addWidget(splitter_9, 2, 2, 1, 1);

        splitter_8 = new QSplitter(groupBox);
        splitter_8->setObjectName(QString::fromUtf8("splitter_8"));
        splitter_8->setOrientation(Qt::Horizontal);
        label_15 = new QLabel(splitter_8);
        label_15->setObjectName(QString::fromUtf8("label_15"));
        splitter_8->addWidget(label_15);
        showR = new QLabel(splitter_8);
        showR->setObjectName(QString::fromUtf8("showR"));
        splitter_8->addWidget(showR);

        gridLayout->addWidget(splitter_8, 4, 0, 1, 1);

        splitter = new QSplitter(groupBox);
        splitter->setObjectName(QString::fromUtf8("splitter"));
        splitter->setOrientation(Qt::Horizontal);
        label = new QLabel(splitter);
        label->setObjectName(QString::fromUtf8("label"));
        splitter->addWidget(label);
        showC = new QLabel(splitter);
        showC->setObjectName(QString::fromUtf8("showC"));
        splitter->addWidget(showC);

        gridLayout->addWidget(splitter, 2, 0, 1, 2);

        splitter_11 = new QSplitter(groupBox);
        splitter_11->setObjectName(QString::fromUtf8("splitter_11"));
        splitter_11->setOrientation(Qt::Horizontal);
        label_21 = new QLabel(splitter_11);
        label_21->setObjectName(QString::fromUtf8("label_21"));
        splitter_11->addWidget(label_21);
        showDA = new QLabel(splitter_11);
        showDA->setObjectName(QString::fromUtf8("showDA"));
        splitter_11->addWidget(showDA);

        gridLayout->addWidget(splitter_11, 4, 2, 1, 1);

        splitter_6 = new QSplitter(groupBox);
        splitter_6->setObjectName(QString::fromUtf8("splitter_6"));
        splitter_6->setOrientation(Qt::Horizontal);
        label_13 = new QLabel(splitter_6);
        label_13->setObjectName(QString::fromUtf8("label_13"));
        splitter_6->addWidget(label_13);
        showD = new QLabel(splitter_6);
        showD->setObjectName(QString::fromUtf8("showD"));
        splitter_6->addWidget(showD);

        gridLayout->addWidget(splitter_6, 3, 0, 1, 1);

        splitter_2 = new QSplitter(groupBox);
        splitter_2->setObjectName(QString::fromUtf8("splitter_2"));
        splitter_2->setOrientation(Qt::Horizontal);
        label_7 = new QLabel(splitter_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));
        splitter_2->addWidget(label_7);
        showAB = new QLabel(splitter_2);
        showAB->setObjectName(QString::fromUtf8("showAB"));
        splitter_2->addWidget(showAB);

        gridLayout->addWidget(splitter_2, 0, 2, 1, 1);

        splitter_4 = new QSplitter(groupBox);
        splitter_4->setObjectName(QString::fromUtf8("splitter_4"));
        splitter_4->setOrientation(Qt::Horizontal);
        label_9 = new QLabel(splitter_4);
        label_9->setObjectName(QString::fromUtf8("label_9"));
        splitter_4->addWidget(label_9);
        showP = new QLabel(splitter_4);
        showP->setObjectName(QString::fromUtf8("showP"));
        splitter_4->addWidget(showP);

        gridLayout->addWidget(splitter_4, 0, 3, 1, 1);

        splitter_7 = new QSplitter(groupBox);
        splitter_7->setObjectName(QString::fromUtf8("splitter_7"));
        splitter_7->setOrientation(Qt::Horizontal);
        label_3 = new QLabel(splitter_7);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        splitter_7->addWidget(label_3);
        showA = new QLabel(splitter_7);
        showA->setObjectName(QString::fromUtf8("showA"));
        splitter_7->addWidget(showA);

        gridLayout->addWidget(splitter_7, 0, 0, 1, 1);

        splitter_3 = new QSplitter(groupBox);
        splitter_3->setObjectName(QString::fromUtf8("splitter_3"));
        splitter_3->setOrientation(Qt::Horizontal);
        label_5 = new QLabel(splitter_3);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        splitter_3->addWidget(label_5);
        showB = new QLabel(splitter_3);
        showB->setObjectName(QString::fromUtf8("showB"));
        splitter_3->addWidget(showB);

        gridLayout->addWidget(splitter_3, 1, 0, 1, 2);

        splitter_10 = new QSplitter(groupBox);
        splitter_10->setObjectName(QString::fromUtf8("splitter_10"));
        splitter_10->setOrientation(Qt::Horizontal);
        label_19 = new QLabel(splitter_10);
        label_19->setObjectName(QString::fromUtf8("label_19"));
        splitter_10->addWidget(label_19);
        showCD = new QLabel(splitter_10);
        showCD->setObjectName(QString::fromUtf8("showCD"));
        splitter_10->addWidget(showCD);

        gridLayout->addWidget(splitter_10, 3, 2, 1, 1);

        splitter_12 = new QSplitter(groupBox);
        splitter_12->setObjectName(QString::fromUtf8("splitter_12"));
        splitter_12->setOrientation(Qt::Horizontal);
        label_23 = new QLabel(splitter_12);
        label_23->setObjectName(QString::fromUtf8("label_23"));
        splitter_12->addWidget(label_23);
        showS = new QLabel(splitter_12);
        showS->setObjectName(QString::fromUtf8("showS"));
        splitter_12->addWidget(showS);

        gridLayout->addWidget(splitter_12, 1, 3, 1, 1);


        retranslateUi(WindowVivod);

        QMetaObject::connectSlotsByName(WindowVivod);
    } // setupUi

    void retranslateUi(QWidget *WindowVivod)
    {
        WindowVivod->setWindowTitle(QCoreApplication::translate("WindowVivod", "Form", nullptr));
        pushButton->setText(QCoreApplication::translate("WindowVivod", "\320\235\320\260\320\267\320\260\320\264", nullptr));
        pushButton_2->setText(QCoreApplication::translate("WindowVivod", "\320\222\321\213\320\262\320\265\321\201\321\202\320\270", nullptr));
        groupBox->setTitle(QCoreApplication::translate("WindowVivod", "\320\230\321\202\320\276\320\263\320\276\320\262\321\213\320\265 \320\277\320\260\321\200\320\260\320\274\320\265\321\202\321\200\321\213 \321\204\320\270\320\263\321\203\321\200\321\213:", nullptr));
        label_11->setText(QCoreApplication::translate("WindowVivod", "\321\203\320\263\320\276\320\273 B^C:", nullptr));
        showBC->setText(QString());
        label_17->setText(QCoreApplication::translate("WindowVivod", "\321\203\320\263\320\276\320\273 C^A:", nullptr));
        showCA->setText(QString());
        label_15->setText(QCoreApplication::translate("WindowVivod", "\321\200\320\260\320\264\320\270\321\203\321\201:", nullptr));
        showR->setText(QString());
        label->setText(QCoreApplication::translate("WindowVivod", "\321\201\321\202\320\276\321\200\320\276\320\275\320\260 C:", nullptr));
        showC->setText(QString());
        label_21->setText(QCoreApplication::translate("WindowVivod", "\321\203\320\263\320\276\320\273 D^A:", nullptr));
        showDA->setText(QString());
        label_13->setText(QCoreApplication::translate("WindowVivod", "\321\201\321\202\320\276\321\200\320\276\320\275\320\260 D:", nullptr));
        showD->setText(QString());
        label_7->setText(QCoreApplication::translate("WindowVivod", "\321\203\320\263\320\276\320\273 A^B:", nullptr));
        showAB->setText(QString());
        label_9->setText(QCoreApplication::translate("WindowVivod", "\320\277\320\265\321\200\320\270\320\274\320\265\321\202\321\200:", nullptr));
        showP->setText(QString());
        label_3->setText(QCoreApplication::translate("WindowVivod", "\321\201\321\202\320\276\321\200\320\276\320\275\320\260 A:", nullptr));
        showA->setText(QString());
        label_5->setText(QCoreApplication::translate("WindowVivod", "\321\201\321\202\320\276\321\200\320\276\320\275\320\260 B:", nullptr));
        showB->setText(QString());
        label_19->setText(QCoreApplication::translate("WindowVivod", "\321\203\320\263\320\276\320\273 C^D:", nullptr));
        showCD->setText(QString());
        label_23->setText(QCoreApplication::translate("WindowVivod", "\320\277\320\273\320\276\321\211\320\260\320\264\321\214:", nullptr));
        showS->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class WindowVivod: public Ui_WindowVivod {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WINDOWVIVOD_H
