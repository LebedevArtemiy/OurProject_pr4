#include "windowvivod.h"
#include "ui_windowvivod.h"
#include "trianglewindow.cpp"
#include "rectanglewindow.cpp"
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
    recA="-", recB = "-", recC = "-", recD ="-", recR="-", reck1 = "-", reck2="-", reck3 ="-", reck4="-",
    reck5 = "-",  recS ="-", recP="-";
    this->close();
    emit sWindow();
}

void WindowVivod::on_pushButton_2_clicked()
{
    if((A!="-")&&(B!="-")&&(C!="-")&&(D=="-"))
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
    if (Rec.getangle()==90)
    {
        A = QString::number(Rec.getside1());
        ui->showA->setText(A);
        B = QString::number(Rec.getside2());
        ui->showB->setText(B);
        C = QString::number(Rec.getside1());
        ui->showC->setText(C);
        D = QString::number(Rec.getside2());
        ui->showD->setText(D);
        S = QString::number(Rec.getarea());
        ui->showS->setText(S);
        P = QString::number(Rec.getperimeter());
        ui->showP->setText(P);
        k1 = QString::number(Rec.getangle());
        ui->showAB->setText(k1);
        k2 = QString::number(Rec.getangle());
        ui->showCA->setText(k2);
        k3 = QString::number(Rec.getangle());
        ui->showBC->setText(k3);
        k5 = QString::number(Rec.getangle());
        ui->showCD->setText(k5);
        ui->showDA->setText(k4);
        ui->showR->setText(R);
    }
}


