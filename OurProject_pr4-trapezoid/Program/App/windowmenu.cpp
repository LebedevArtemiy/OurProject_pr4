#include "windowmenu.h"
#include "ui_windowmenu.h"

#include "../trap/trapdialog.h"

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


void WindowMenu::on_pushButton_6_clicked()
{
    TrapDialog dialog;
    dialog.exec();
}
