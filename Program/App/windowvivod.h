#ifndef WINDOWVIVOD_H
#define WINDOWVIVOD_H

#include <QWidget>
#include <QString>
#include "../Library/library.h"

namespace Ui {
class WindowVivod;
}

class WindowVivod : public QWidget
{
    Q_OBJECT
signals:
    void sWindow (); // сигнал, с помощью которого вызывается предыдущее окно ввода параметров
public:
    explicit WindowVivod(QWidget *parent = nullptr);
    ~WindowVivod();

private slots:
    void on_pushButton_clicked(); // слот кнопки назад

    void on_pushButton_2_clicked(); // слот кнопки вывести

private:
    Ui::WindowVivod *ui;
};

#endif // WINDOWVIVOD_H
