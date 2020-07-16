#include "trapezoidwindow.h"
#include "ui_trapezoidwindow.h"
#include <QString>
#include <QMessageBox>

 QString  trA="-", trB = "-", trC = "-", trD ="-", trR="-", trk1 = "-", trk2="-",
 trk3 ="-", trk4="-",trk5 = "-",  trS ="-", trP="-";
Trapezoid Tr;

TrapezoidWindow::TrapezoidWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TrapezoidWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod ();
    connect(vWindow, &WindowVivod::sWindow, this, &TrapezoidWindow::show);

}

TrapezoidWindow::~TrapezoidWindow()
{
    delete ui;
}

void TrapezoidWindow::on_pushButton_clicked()
{
    this->close();
    emit secondWindow();
}

void TrapezoidWindow::on_pushButton_2_clicked()
{
    trA=ui->Astorona->text();
    trB=ui->Bstorona->text();
    trC=ui->Cstorona->text();
    trD=ui->Dstorona->text();
    Tr.set(trA.toDouble(), trB.toDouble(), trC.toDouble(), trD.toDouble());
    this->close();
    vWindow-> show ();
}
