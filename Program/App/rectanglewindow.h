#ifndef RECTANGLEWINDOW_H
#define RECTANGLEWINDOW_H

#include <QWidget>
#include "windowvivod.h"
#include "../Library/library.h"

namespace Ui {
class RectangleWindow;
}

class RectangleWindow : public QWidget
{
    Q_OBJECT

signals:
    void secondWindow (); // сигнал, с помощью которого вызывается окно выбора фигуры
public:
    explicit RectangleWindow(QWidget *parent = nullptr);
    ~RectangleWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::RectangleWindow *ui;
    WindowVivod *vWindow;
};

#endif // RECTANGLEWINDOW_H
