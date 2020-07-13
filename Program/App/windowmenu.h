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
    void firstWindow();
public:
    WindowMenu(QWidget *parent = nullptr);
    ~WindowMenu();

private:
    Ui::WindowMenu *ui;
    TriangleWindow *trWindow;
    CircleWindow *crWindow;
    RectangleWindow *rcWindow;
    TrapezoidWindow *tWindow;
    ParallelogramWindow *pWindow;
    WindowVivod *vWindow;
private slots:
    void on_pushButton_clicked();
    void on_pushButton_5_clicked();
    void on_pushButton_3_clicked();
    void on_pushButton_4_clicked();
    void on_pushButton_6_clicked();
    void on_pushButton_2_clicked();
};
#endif // WINDOWMENU_H
