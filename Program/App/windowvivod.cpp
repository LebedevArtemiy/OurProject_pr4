#include "windowvivod.h"
#include "ui_windowvivod.h"
#include "circlewindow.cpp"
#include "trianglewindow.cpp"
#include "rectanglewindow.cpp"
#include "parallelogramwindow.cpp"
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
    reck5 = "-",  recS ="-", recP="-" ; CiA="-", CiB = "-", CiC = "-", CiD ="-", CiR="-", Cik1 = "-", Cik2="-",
            Cik3 ="-", Cik4="-", Cik5 = "-",  CiS ="-", CiP="-";
    parA="-", parB = "-", parC = "-", parD ="-", parR="-", park1 = "-", park2="-", park3 ="-", park4="-",
    park5 = "-",  parS ="-", parP="-";
    this->close();
    emit sWindow();
}

void WindowVivod::on_pushButton_2_clicked()
{
    if((QString::number(T.getA())!="-")&&(D=="-"))
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
        recA = QString::number(Rec.getside1());
        ui->showA->setText(recA);
        recB = QString::number(Rec.getside2());
        ui->showB->setText(recB);
        recC = QString::number(Rec.getside1());
        ui->showC->setText(recC);
        recD = QString::number(Rec.getside2());
        ui->showD->setText(recD);
        recS = QString::number(Rec.getarea());
        ui->showS->setText(recS);
        recP = QString::number(Rec.getperimeter());
        ui->showP->setText(recP);
        reck1 = QString::number(Rec.getangle());
        ui->showAB->setText(reck1);
        reck2 = QString::number(Rec.getangle());
        ui->showCD->setText(reck2);
        reck3 = QString::number(Rec.getangle());
        ui->showBC->setText(reck3);
        reck5 = QString::number(Rec.getangle());
        ui->showDA->setText(reck5);
        ui->showCA->setText(reck4);
        ui->showR->setText(recR);
    }
    if ( CiR!="-")
    {
        ui->showA->setText(CiA);
        ui->showB->setText(CiB);
        ui->showC->setText(CiC);
        ui->showD->setText(CiD);
        CiS = QString::number(Ci.getS());
        ui->showS->setText(CiS);
        CiP = QString::number(Ci.getP());
        ui->showP->setText(CiP);
        ui->showAB->setText(Cik1);
        ui->showCA->setText(Cik2);
        ui->showBC->setText(Cik3);
        ui->showCD->setText(Cik4);
        ui->showDA->setText(Cik5);
        CiR = QString::number(Ci.getR());
        ui->showR->setText(CiR);
    }
    if (park1!="-")
    {
            A = QString::number(Par.getA());
            ui->showA->setText(A);
            B = QString::number(Par.getB());
            ui->showB->setText(B);
            C = QString::number(Par.getA());
            ui->showC->setText(C);
            D = QString::number(Par.getB());
            ui->showD->setText(D);
            S = QString::number(Par.getS());
            ui->showS->setText(S);
            P = QString::number(Par.getP());
            ui->showP->setText(P);
            k1 = QString::number(Par.getK1());
            ui->showAB->setText(k1);
            k2 = QString::number(Par.getK2());
            ui->showBC->setText(k2);
            ui->showCA->setText(k5);
            ui->showCD->setText(k1);
            ui->showDA->setText(k2);
            ui->showR->setText(R);
    }
}


