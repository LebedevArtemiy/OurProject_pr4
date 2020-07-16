#ifndef TRIANGLEWINDOW_H
#define TRIANGLEWINDOW_H

#include <QWidget>
#include <QString>
#include "windowvivod.h"
#include "../Library/library.h"

namespace Ui {
class TriangleWindow;
}

class TriangleWindow : public QWidget
{
    Q_OBJECT

signals:
    void secondWindow (); // сигнал, с помощью которого вызывается окно выбора фигуры
public:
    explicit TriangleWindow(QWidget *parent = nullptr);
    ~TriangleWindow();

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::TriangleWindow *ui;
    WindowVivod *vWindow;

};

#endif // TRIANGLEWINDOW_H
