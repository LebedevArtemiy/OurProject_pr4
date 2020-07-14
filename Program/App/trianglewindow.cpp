#include "trianglewindow.h"
#include "ui_trianglewindow.h"
#include "QMessageBox"
#include "QString"
TriangleWindow::TriangleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TriangleWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod ();
    connect(vWindow, &WindowVivod::sWindow, this, &TriangleWindow::show);
}

TriangleWindow::~TriangleWindow()
{
    delete ui;
}

void TriangleWindow::on_pushButton_clicked()
{
    this->close();
    emit secondWindow();
}

void TriangleWindow::on_pushButton_2_clicked()
{
    this->close();
    vWindow-> show ();
    A = ui->Astorona->text();
    B = ui->Bstorona->text();
    C = ui->Cstorona->text();
    T.set(A.toDouble(), B.toDouble(), C.toDouble());
    QMessageBox::information(this, "ура", QString::number(T.getA()));
    QMessageBox::information(this, "ура", QString::number(T.getB()));
    QMessageBox::information(this, "ура", QString::number(T.getC()));
    QMessageBox::information(this, "ура", QString::number(T.getP()));
    QMessageBox::information(this, "ура", QString::number(T.getS()));

}
