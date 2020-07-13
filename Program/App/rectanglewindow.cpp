#include "rectanglewindow.h"
#include "ui_rectanglewindow.h"

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
}
