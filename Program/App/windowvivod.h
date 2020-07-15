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
    void sWindow ();
    void start ();
public:
    explicit WindowVivod(QWidget *parent = nullptr);
    ~WindowVivod();

private slots:
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

private:
    Ui::WindowVivod *ui;
};

#endif // WINDOWVIVOD_H
