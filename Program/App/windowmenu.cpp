#include "windowmenu.h"
#include "ui_windowmenu.h"

WindowMenu::WindowMenu(QWidget *parent):
     QWidget(parent),
     ui(new Ui::WindowMenu)
{
    ui->setupUi(this);
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

