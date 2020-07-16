#include "ui_circlewindow.h"
#include "circlewindow.h"
#include <QString>

QString  CiA="-", CiB = "-", CiC = "-", CiD ="-", CiR="-", Cik1 = "-", Cik2="-", Cik3 ="-", Cik4="-", Cik5 = "-",  CiS ="-", CiP="-";  // объявление всех переменных вывода
Circle Ci; //объявление объекта класса фигуры

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

void CircleWindow::on_pushButton_clicked() // кнопка назад: закрытие этого окна и возвращение к окну выбора фигуры
{
    this->close(); //данное окно закрывается
    emit secondWindow(); // сигнал показывания предыдущего окна
}

void CircleWindow::on_pushButton_2_clicked() //кнопка далее: получение введенных переменных, помещение их в сеттер
{                                             // закрытие этого окна, открытие окна вывода
    CiR = ui->Radius->text();
    Ci.set(CiR.toDouble());
    this->close();
    vWindow -> show ();
}

