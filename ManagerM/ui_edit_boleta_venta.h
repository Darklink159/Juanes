#ifndef UI_EDIT_BOLETA_VENTA_H
#define UI_EDIT_BOLETA_VENTA_H

#include <QWidget>

namespace Ui {
class ui_edit_boleta_venta;
}

class ui_edit_boleta_venta : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_edit_boleta_venta(QWidget *parent = 0);
    ~ui_edit_boleta_venta();
    
private:
    Ui::ui_edit_boleta_venta *ui;
};

#endif // UI_EDIT_BOLETA_VENTA_H
