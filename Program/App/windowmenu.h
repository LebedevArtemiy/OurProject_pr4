#ifndef WINDOWMENU_H
#define WINDOWMENU_H

#include <QWidget>
#include "trianglewindow.h"
#include "circlewindow.h"
#include "rectanglewindow.h"
#include "trapezoidwindow.h"
#include "parallelogramwindow.h"
#include "windowvivod.h"
#include "../Library/library.h"

QT_BEGIN_NAMESPACE
namespace Ui { class WindowMenu; }
QT_END_NAMESPACE

class WindowMenu : public QWidget
{
    Q_OBJECT

signals:
    void firstWindow(); // сигнал, с помощью которого вызывается главное окно
public:
    WindowMenu(QWidget *parent = nullptr);
    ~WindowMenu();

private:
    Ui::WindowMenu *ui;
    TriangleWindow *trWindow; // создание окна класса TriangleWindow,  ввода параметров треугольника
    CircleWindow *crWindow; // создание окна класса CircleWindow,  ввода параметров окружности
    RectangleWindow *rcWindow; // создание окна класса RectangleWindow,  ввода параметров прямоугольника
    TrapezoidWindow *tWindow; // создание окна класса  TrapezoidWindow, ввода параметров трапеции
    ParallelogramWindow *pWindow; // создание окна класса ParallelogramWindow,  ввода параметров параллелограмма
private slots:
    void on_pushButton_clicked(); // слот возвращенеия в главное окно
    void on_pushButton_5_clicked(); // слот открытия окна ввода параметров треугольника
    void on_pushButton_3_clicked(); // слот открытия окна ввода параметров окружности
    void on_pushButton_4_clicked(); // слот открытия окна ввода параметров прямоугольника
    void on_pushButton_6_clicked(); // слот открытия окна ввода параметров трапеции
    void on_pushButton_2_clicked(); // слот открытия окна ввода параметров параллелограмма
};
#endif // WINDOWMENU_H
