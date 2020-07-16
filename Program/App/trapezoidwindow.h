#ifndef TRAPEZOIDWINDOW_H
#define TRAPEZOIDWINDOW_H

#include <QWidget>
#include "windowvivod.h"
#include "../Library/library.h"

namespace Ui {
class TrapezoidWindow;
}

class TrapezoidWindow : public QWidget
{
    Q_OBJECT
signals:
    void secondWindow (); // сигнал, с помощью которого вызывается окно выбора фигуры
public:
    explicit TrapezoidWindow(QWidget *parent = nullptr);
    ~TrapezoidWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::TrapezoidWindow *ui;
    WindowVivod *vWindow;
};

#endif // TRAPEZOIDWINDOW_H
