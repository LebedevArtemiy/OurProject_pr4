#ifndef TRIANGLEWINDOW_H
#define TRIANGLEWINDOW_H

#include <QWidget>
#include "windowvivod.h"
#include "../Library/library.h"
#include "QMessageBox"
namespace Ui {
class TriangleWindow;
}

class TriangleWindow : public QWidget
{
    Q_OBJECT

signals:
    void secondWindow ();
public:
    explicit TriangleWindow(QWidget *parent = nullptr);
    ~TriangleWindow();
    QString  A = "-", B = "-", C = "-", D ="-", R="-", k1 = "-", k2="-", k3 ="-", k4="-", S ="-", P="-";
    Treygol T;

private slots:
    void on_pushButton_clicked();
    void on_pushButton_2_clicked();
private:
    Ui::TriangleWindow *ui;
    WindowVivod *vWindow;

};

#endif // TRIANGLEWINDOW_H
