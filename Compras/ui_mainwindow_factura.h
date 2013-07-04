#ifndef UI_MAINWINDOW_FACTURA_H
#define UI_MAINWINDOW_FACTURA_H

#include <QMainWindow>

namespace Ui {
class Ui_MainWindow_Factura;
}

class Ui_MainWindow_Factura : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit Ui_MainWindow_Factura(QWidget *parent = 0);
    ~Ui_MainWindow_Factura();
    
private:
    Ui::Ui_MainWindow_Factura *ui;
};

#endif // UI_MAINWINDOW_FACTURA_H
