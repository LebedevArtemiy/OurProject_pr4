#include "rectanglewindow.h"
#include "ui_rectanglewindow.h"
#include <QString>

QString  recA="-", recB = "-", recC = "-", recD ="-", recR="-", reck1 = "-", reck2="-", reck3 ="-", reck4="-",
reck5 = "-",  recS ="-", recP="-";  // объявление всех переменных вывода
Rectangle Rec; //объявление объекта класса фигуры

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

void RectangleWindow::on_pushButton_clicked() // кнопка назад: закрытие этого окна и возвращение к окну выбора фигуры
{
    this->close(); //данное окно закрывается
    emit secondWindow(); // сигнал показывания предыдущего окна
}

void RectangleWindow::on_pushButton_2_clicked() //кнопка далее: получение введенных переменных, помещение их в сеттер
{                                               // закрытие этого окна, открытие окна вывода
    recA=ui->Astorona->text();
    recB=ui->Bstorona->text();
    Rec.set(recA.toDouble(), recB.toDouble());
  this->close();
    vWindow-> show ();
}
