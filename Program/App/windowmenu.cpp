#include "windowmenu.h"
#include "ui_windowmenu.h"


WindowMenu::WindowMenu(QWidget *parent):
     QWidget(parent),
     ui(new Ui::WindowMenu)
{
    ui->setupUi(this);
    trWindow= new TriangleWindow (); // инициализация окна  ввода треугольника
    connect(trWindow, &TriangleWindow::secondWindow, this, &WindowMenu::show); // подключение к слоту запуска окна выбора в окне треугольника
    crWindow= new CircleWindow (); // инициализация окна  ввода окружности
    connect(crWindow, &CircleWindow::secondWindow, this, &WindowMenu::show); // подключение к слоту запуска окна выбора в окне  окружности
    rcWindow= new RectangleWindow (); // инициализация окна  ввода прямоугольника
    connect(rcWindow, &RectangleWindow::secondWindow, this, &WindowMenu::show); // подключение к слоту запуска окна выбора в окне прямоугольника
    tWindow= new TrapezoidWindow (); // инициализация окна  ввода трапеции
    connect(tWindow, &TrapezoidWindow::secondWindow, this, &WindowMenu::show); // подключение к слоту запуска окна выбора в окне трапеции
    pWindow= new ParallelogramWindow (); // инициализация окна  ввода параллелограмма
    connect(pWindow, &ParallelogramWindow::secondWindow, this, &WindowMenu::show); // подключение к слоту запуска окна выбора в окне параллелограмма
}

WindowMenu::~WindowMenu()
{
    delete ui;
}

void WindowMenu::on_pushButton_clicked()
{
    this->close(); //данное окно закрывается
    emit firstWindow(); // сигнал показывания предыдущего окна
}


void WindowMenu::on_pushButton_5_clicked() // октрытие окна ввода парамтеров треугольника
{
    this->close();
    trWindow-> show ();
}

void WindowMenu::on_pushButton_3_clicked() // октрытие окна ввода парамтеров окружности
{
    this->close();
    crWindow-> show ();
}

void WindowMenu::on_pushButton_4_clicked() // октрытие окна ввода парамтеров прямоугольника
{
    this->close();
    rcWindow-> show ();
}

void WindowMenu::on_pushButton_6_clicked() // октрытие окна ввода парамтеров трапеции
{
    this->close();
    tWindow-> show ();
}

void WindowMenu::on_pushButton_2_clicked() // октрытие окна ввода парамтеров параллелограмма
{
    this->close();
    pWindow-> show ();
}
