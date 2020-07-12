#ifndef TRAPDIALOG_H
#define TRAPDIALOG_H

#include <QDialog>

QT_BEGIN_NAMESPACE
namespace Ui { class TrapDialog; }
QT_END_NAMESPACE

class TrapDialog : public QDialog
{
    Q_OBJECT

public:
    TrapDialog(QWidget *parent = nullptr);
    ~TrapDialog();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TrapDialog *ui;
};
#endif // TRAPDIALOG_H
