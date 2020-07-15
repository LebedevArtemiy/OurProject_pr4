#include "ui_circlewindow.h"
#include "circlewindow.h"
#include <QString>
#include <QMessageBox>

QString  CiA="-", CiB = "-", CiC = "-", CiD ="-", CiR="-", Cik1 = "-", Cik2="-", Cik3 ="-", Cik4="-", Cik5 = "-",  CiS ="-", CiP="-";
Circle Ci;

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
    CiR = ui->Radius->text();
    if ((CiR=="0")||(CiR=="-"))
    {
    QMessageBox::warning(this, "ошибка", "Введите парметры!");
    }
    else
    {
    Ci.set(CiR.toDouble());
    this->close();
    vWindow -> show ();
    }
}

