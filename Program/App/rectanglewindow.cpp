#include "rectanglewindow.h"
#include "ui_rectanglewindow.h"
#include "QMessageBox"
#include "QString"


QString A="-",B="-",S="-",P="-";
Rectangle R;
RectangleWindow::RectangleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::RectangleWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod ();
    connect(vWindow, &WindowVivod::sWindow, this, &RectangleWindow::show);
}

RectangleWindow::~RectangleWindow()
{
    delete ui;
}

void RectangleWindow::on_pushButton_clicked()
{
    this->close();
    emit secondWindow();
}

void RectangleWindow::on_pushButton_2_clicked()
{
    this->close();
    vWindow-> show ();
    A = ui->Astorona->text();
    B = ui->Bstorona->text();
    R.set(A.toDouble(),B.toDouble(),P.toDouble(),S.toDouble());
    QMessageBox::information(this,"сторона1",QString::number(R.getside1()));
    QMessageBox::information(this,"сторона2",QString::number(R.getside2()));
    QMessageBox::information(this,"периметр",QString::number(R.getperimeter()));
    QMessageBox::information(this,"площадь",QString::number(R.getarea()));
    QMessageBox::information(this,"углы",QString::number(R.getangle()));

}



