#include "trianglewindow.h"
#include "ui_trianglewindow.h"
#include <QString>

 QString  A="-", B = "-", C = "-", D ="-", R="-", k1 = "-", k2="-", k3 ="-", k4="-",k5 = "-",  S ="-", P="-"; // объявление всех переменных вывода
 Treygol T; // объект класса треугольника

TriangleWindow::TriangleWindow(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::TriangleWindow)
{
    ui->setupUi(this);
    vWindow= new WindowVivod (); // инициализация окна вывода
    connect(vWindow, &WindowVivod::sWindow, this, &TriangleWindow::show);
}

TriangleWindow::~TriangleWindow()
{
    delete ui;
}

void TriangleWindow::on_pushButton_clicked() // кнопка назад: закрытие этого окна и возвращение к окну выбора фигуры
{
    this->close(); //данное окно закрывается
    emit secondWindow();
}

void TriangleWindow::on_pushButton_2_clicked() //кнопка далее: получение введенных переменных, помещение их в сеттер
{                                              // закрытие этого окна, открытие окна вывода
    A = ui->Astorona->text();
    B = ui->Bstorona->text();
    C = ui->Cstorona->text();
    T.set(A.toDouble(), B.toDouble(), C.toDouble());
    this->close();
    vWindow-> show ();
}
