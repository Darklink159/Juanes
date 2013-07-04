#ifndef UI_MAINWINDOW_COMPRA_H
#define UI_MAINWINDOW_COMPRA_H

#include <QMainWindow>
#include "ui_widget_compra_base.h"

namespace Ui {
class Ui_MainWindow_Compra;
}

class Ui_MainWindow_Compra : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ui_MainWindow_Compra(QWidget *parent = 0);
    ~Ui_MainWindow_Compra();
    
private:
    Ui::Ui_MainWindow_Compra *ui;

    Ui_Widget_Compra_Base *widget_base;
};

#endif // UI_MAINWINDOW_COMPRA_H
