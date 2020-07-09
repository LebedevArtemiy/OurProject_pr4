#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windowmenu.h>

#include "../Treygol/Treygol.h" //// sdfsdfsdfs

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
private slots:
   void on_pushButton_clicked();
};
#endif // MAINWINDOW_H
