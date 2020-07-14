#include "windowvivod.h"
#include "ui_windowvivod.h"
#include "trianglewindow.h"

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
    this->close();
    emit sWindow();
}

void WindowVivod::on_pushButton_2_clicked()
{
    this->close();
    emit start();
}


