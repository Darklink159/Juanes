#ifndef UI_NEW_VENTA_COTIZACION_H
#define UI_NEW_VENTA_COTIZACION_H

#include <QWidget>
#include "share_include.h"
namespace Ui {
class ui_new_venta_cotizacion;
}

class ui_new_venta_cotizacion : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_cotizacion(QWidget *parent = 0);
    vector<_QSTR> getValores();
    ~ui_new_venta_cotizacion();

public slots:
    void printValues(_QSTR,_QSTR);
private slots:
    void on_pushButton_clicked();

private:
    Ui::ui_new_venta_cotizacion *ui;
};

#endif // UI_NEW_VENTA_COTIZACION_H
