#include "trapezoidwindow.h"
#include "ui_trapezoidwindow.h"
#include <QString>

 QString  trA="-", trB = "-", trC = "-", trD ="-", trR="-", trk1 = "-", trk2="-",
 trk3 ="-", trk4="-",trk5 = "-",  trS ="-", trP="-";  // объявление всех переменных вывода
Trapezoid Tr; //объявление объекта класса фигуры

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

void TrapezoidWindow::on_pushButton_clicked() // кнопка назад: закрытие этого окна и возвращение к окну выбора фигуры
{
    this->close(); //данное окно закрывается
    emit secondWindow(); // сигнал показывания предыдущего окна
}

void TrapezoidWindow::on_pushButton_2_clicked() //кнопка далее: получение введенных переменных, помещение их в сеттер
{                                               // закрытие этого окна, открытие окна вывода
    trA=ui->Astorona->text();
    trB=ui->Bstorona->text();
    trC=ui->Cstorona->text();
    trD=ui->Dstorona->text();
    Tr.set(trA.toDouble(), trB.toDouble(), trC.toDouble(), trD.toDouble());
    this->close();
    vWindow-> show ();
}
