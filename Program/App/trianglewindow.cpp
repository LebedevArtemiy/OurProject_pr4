#include "trianglewindow.h"
#include "ui_trianglewindow.h"
#include <QString>
#include <QMessageBox>

 QString  A="-", B = "-", C = "-", D ="-", R="-", k1 = "-", k2="-", k3 ="-", k4="-",k5 = "-",  S ="-", P="-";
 Treygol T;

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
    A = ui->Astorona->text();
    B = ui->Bstorona->text();
    C = ui->Cstorona->text();
    if ((A=="0")||(A=="-")||(B=="0")||(B=="-")||(C=="0")||(C=="-")) QMessageBox::warning(this, "ошибка", "Введите парметры!");
    T.set(A.toDouble(), B.toDouble(), C.toDouble());
    this->close();
    vWindow-> show ();
}
