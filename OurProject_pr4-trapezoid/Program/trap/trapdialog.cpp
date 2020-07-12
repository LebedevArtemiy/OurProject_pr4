#include "trapdialog.h"
#include "ui_trapdialog.h"
#include "QString"

#include "../Trapezoid/trapezoid.h"
#include "../Trapezoid/trapezoid.h"

TrapDialog::TrapDialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::TrapDialog)
{
    ui->setupUi(this);
}

TrapDialog::~TrapDialog()
{
    delete ui;
}


void TrapDialog::on_pushButton_clicked()
{
     this -> close ();
}

void TrapDialog::on_pushButton_2_clicked()
{
       ;
}
