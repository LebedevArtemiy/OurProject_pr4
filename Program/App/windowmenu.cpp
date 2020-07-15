#include "windowmenu.h"
#include "ui_windowmenu.h"


WindowMenu::WindowMenu(QWidget *parent):
     QWidget(parent),
     ui(new Ui::WindowMenu)
{
    ui->setupUi(this);
    trWindow= new TriangleWindow ();
    connect(trWindow, &TriangleWindow::secondWindow, this, &WindowMenu::show);
    crWindow= new CircleWindow ();
    connect(crWindow, &CircleWindow::secondWindow, this, &WindowMenu::show);
    rcWindow= new RectangleWindow ();
    connect(rcWindow, &RectangleWindow::secondWindow, this, &WindowMenu::show);
    tWindow= new TrapezoidWindow ();
    connect(tWindow, &TrapezoidWindow::secondWindow, this, &WindowMenu::show);
    pWindow= new ParallelogramWindow ();
    connect(pWindow, &ParallelogramWindow::secondWindow, this, &WindowMenu::show);
}

WindowMenu::~WindowMenu()
{
    delete ui;
}

void WindowMenu::on_pushButton_clicked()
{
    this->close();
    emit firstWindow();
}


void WindowMenu::on_pushButton_5_clicked()
{
    this->close();
    trWindow-> show ();
}

void WindowMenu::on_pushButton_3_clicked()
{
    this->close();
    crWindow-> show ();
}

void WindowMenu::on_pushButton_4_clicked()
{
    this->close();
    rcWindow-> show ();
}

void WindowMenu::on_pushButton_6_clicked()
{
    this->close();
    tWindow-> show ();
}

void WindowMenu::on_pushButton_2_clicked()
{
    this->close();
    pWindow-> show ();
}
