#ifndef WINDOWMENU_H
#define WINDOWMENU_H

#include <QWidget>

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
private slots:
    void on_pushButton_clicked();
};
#endif // WINDOWMENU_H
