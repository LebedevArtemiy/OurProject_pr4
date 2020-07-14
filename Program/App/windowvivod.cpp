#include "windowvivod.h"
#include "ui_windowvivod.h"
#include "trianglewindow.cpp"
#include "trianglewindow.h"
#include <QString>
#include "../Library/library.h"

WindowVivod::WindowVivod(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::WindowVivod)
{
    ui->setupUi(this);

}

WindowVivod::~WindowVivod()
{
    delete ui;
}

void WindowVivod::on_pushButton_clicked()
{
    A="-", B = "-", C = "-", D ="-", R="-", k1 = "-", k2="-", k3 ="-", k4="-", k5 = "-",  S ="-", P="-";
    this->close();
    emit sWindow();
}

void WindowVivod::on_pushButton_2_clicked()
{
    A = QString::number(T.getA());
    ui->showA->setText(A);
    B = QString::number(T.getB());
    ui->showB->setText(B);
    C = QString::number(T.getC());
    ui->showC->setText(C);
    ui->showD->setText(D);
    S = QString::number(T.getS());
    ui->showS->setText(S);
    P = QString::number(T.getP());
    ui->showP->setText(P);
    S = QString::number(T.getS());
    ui->showS->setText(S);
    k1 = QString::number(T.getK1());
    ui->showAB->setText(k1);
    k2 = QString::number(T.getK2());
    ui->showCA->setText(k2);
    k3 = QString::number(T.getK3());
    ui->showBC->setText(k3);
    ui->showCD->setText(k4);
    ui->showDA->setText(k5);
    ui->showR->setText(R);
}


