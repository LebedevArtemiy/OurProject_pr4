#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    sWindow= new WindowMenu ();
    connect(sWindow, &WindowMenu::firstWindow, this, &MainWindow::show);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    sWindow -> show ();
    this -> close ();
}

