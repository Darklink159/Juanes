#ifndef UI_MAINWINDOW_ORDEN_H
#define UI_MAINWINDOW_ORDEN_H

#include <QMainWindow>

namespace Ui {
class Ui_MainWindow_Orden;
}

class Ui_MainWindow_Orden : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ui_MainWindow_Orden(QWidget *parent = 0);
    ~Ui_MainWindow_Orden();
    
private:
    Ui::Ui_MainWindow_Orden *ui;
};

#endif // UI_MAINWINDOW_ORDEN_H
