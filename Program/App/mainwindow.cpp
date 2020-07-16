#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow= new WindowMenu (); // инициализация окна выбора фигуры
    connect(sWindow, &WindowMenu::firstWindow, this, &MainWindow::show); // подключение к слоту запуска главного окна в окне выбора фигуры
} // при получении сигнала firstWindow в окне выбора фигуры, вызывается показывание главного окна

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sWindow -> show (); // открывается окно выбора фигуры
    this -> close (); // закрывается главное окно
}

