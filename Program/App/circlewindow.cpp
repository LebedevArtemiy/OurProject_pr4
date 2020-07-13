#include "circlewindow.h"
#include "ui_circlewindow.h"

CircleWindow::CircleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::CircleWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod ();
    connect(vWindow, &WindowVivod::sWindow, this, &CircleWindow::show);
}

CircleWindow::~CircleWindow()
{
    delete ui;
}

void CircleWindow::on_pushButton_clicked()
{
    this->close();
    emit secondWindow();
}

void CircleWindow::on_pushButton_2_clicked()
{
    this->close();
    vWindow-> show ();
}
