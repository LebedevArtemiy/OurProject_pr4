#include "trapezoidwindow.h"
#include "ui_trapezoidwindow.h"

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
    this->close();
    vWindow-> show ();
}
