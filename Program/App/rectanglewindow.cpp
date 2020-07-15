#include "rectanglewindow.h"
#include "ui_rectanglewindow.h"
#include <QString>
#include <QMessageBox>

QString  recA="-", recB = "-", recC = "-", recD ="-", recR="-", reck1 = "-", reck2="-", reck3 ="-", reck4="-",
reck5 = "-",  recS ="-", recP="-";
Rectangle Rec;

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
    recA=ui->Astorona->text();
    recB=ui->Bstorona->text();
    Rec.set(recA.toDouble(), recB.toDouble());
  this->close();
    vWindow-> show ();
}
