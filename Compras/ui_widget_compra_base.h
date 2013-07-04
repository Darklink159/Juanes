#ifndef UI_WIDGET_COMPRA_BASE_H
#define UI_WIDGET_COMPRA_BASE_H

#include <QWidget>
#include "ui_mainwindow_factura.h"

namespace Ui {
class Ui_Widget_Compra_Base;
}

class Ui_Widget_Compra_Base : public QWidget
{
    Q_OBJECT
    
public:
    explicit Ui_Widget_Compra_Base(QWidget *parent = 0);
    ~Ui_Widget_Compra_Base();
    
private:
    Ui::Ui_Widget_Compra_Base *ui;

    Ui_MainWindow_Factura *mainWindow_Factura;
};

#endif // UI_WIDGET_COMPRA_BASE_H
