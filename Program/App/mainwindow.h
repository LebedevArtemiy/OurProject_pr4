#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windowmenu.h>
#include "windowvivod.h"
#include "../Library/library.h"

QT_BEGIN_NAMESPACE
namespace Ui { class MainWindow; }
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private:
    Ui::MainWindow *ui;
   WindowMenu *sWindow;
   WindowVivod *xWindow;
private slots:
   void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
