#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <windowmenu.h>
#include "windowvivod.h" // подключение .h файла окна выбора фигуры

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
   WindowMenu *sWindow; // создание окна класса WindowMenu,  выбора фигура
private slots:
   void on_pushButton_clicked(); // слот нажатия кнопки задать фигуру
};
#endif // MAINWINDOW_H
