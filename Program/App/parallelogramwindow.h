#ifndef PARALLELOGRAMWINDOW_H
#define PARALLELOGRAMWINDOW_H

#include <QWidget>
#include "windowvivod.h"
#include "../Library/library.h"

namespace Ui {
class ParallelogramWindow;
}

class ParallelogramWindow : public QWidget
{
    Q_OBJECT
signals:
    void secondWindow ();
public:
    explicit ParallelogramWindow(QWidget *parent = nullptr);
    ~ParallelogramWindow();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::ParallelogramWindow *ui;
    WindowVivod *vWindow;
};

#endif // PARALLELOGRAMWINDOW_H
