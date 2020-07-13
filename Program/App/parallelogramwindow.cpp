#include "parallelogramwindow.h"
#include "ui_parallelogramwindow.h"

ParallelogramWindow::ParallelogramWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ParallelogramWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod ();
    connect(vWindow, &WindowVivod::sWindow, this, &ParallelogramWindow::show);
}

ParallelogramWindow::~ParallelogramWindow()
{
    delete ui;
}

void ParallelogramWindow::on_pushButton_clicked()
{
    this->close();
    emit secondWindow();
}

void ParallelogramWindow::on_pushButton_2_clicked()
{
    this->close();
    vWindow-> show ();
}
