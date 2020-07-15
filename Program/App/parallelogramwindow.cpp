#include "parallelogramwindow.h"
#include "ui_parallelogramwindow.h"

QString  parA="-", parB = "-", parC = "-", parD ="-", parR="-", park1 = "-", park2="-", park3 ="-", park4="-",
park5 = "-",  parS ="-", parP="-";
Paralelogram Par;

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
    parA=ui->Astorona->text();
    parB=ui->Bstorona->text();
    park1=ui->angleAB->text();
    Par.set(parA.toDouble(), parB.toDouble(), park1.toDouble());
    this->close();
    vWindow-> show ();
}
