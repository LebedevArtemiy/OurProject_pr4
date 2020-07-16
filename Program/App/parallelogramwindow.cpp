#include "parallelogramwindow.h"
#include "ui_parallelogramwindow.h"

QString  parA="-", parB = "-", parC = "-", parD ="-", parR="-", park1 = "-", park2="-", park3 ="-", park4="-",
park5 = "-",  parS ="-", parP="-"; // задание  переменных вывода
Paralelogram Par; //объявление объекта класса фигуры

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


void ParallelogramWindow::on_pushButton_clicked() // задание функционала для конпки "назад" в окне ввода данных паралелограма
{
    this->close(); //закрытие данного окна
    emit secondWindow(); // возвращение к онку с выбором фигур
}

void ParallelogramWindow::on_pushButton_2_clicked() // задание функционала для кнопки "далее" в окне ввода данных параллелограма
{
    parA=ui->Astorona->text(); // получение длины основания параллелограма в окне ввода данных параллелограма
    parB=ui->Bstorona->text(); // получение длины боковой стороны параллелограма в окне ввода данных параллелограма
    park1=ui->angleAB->text(); // получение угла между этими сторонами в окне ввода данных параллелограма
    Par.set(parA.toDouble(), parB.toDouble(), park1.toDouble());
    this->close(); // закрытие этого окна, открытие окна вывода
    vWindow-> show ();
}
