#ifndef CIRCLEWINDOW_H
#define CIRCLEWINDOW_H

#include <QWidget>
#include <QString>
#include "windowvivod.h"
#include "../Library/library.h"

namespace Ui {
class CircleWindow;
}

class CircleWindow : public QWidget
{
    Q_OBJECT

signals:
    void secondWindow (); // сигнал, с помощью которого вызывается окно выбора фигуры
public:
    explicit CircleWindow(QWidget *parent = nullptr);
    ~CircleWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();



private:
    Ui::CircleWindow *ui;
    WindowVivod *vWindow;
};

#endif // CIRCLEWINDOW_H
