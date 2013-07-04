#ifndef UI_FLETE_INGRESAR_FACTURA_H
#define UI_FLETE_INGRESAR_FACTURA_H

#include <QWidget>

namespace Ui {
class ui_flete_ingresar_factura;
}

class ui_flete_ingresar_factura : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_flete_ingresar_factura(QWidget *parent = 0);
    ~ui_flete_ingresar_factura();
    
private:
    Ui::ui_flete_ingresar_factura *ui;
};

#endif // UI_FLETE_INGRESAR_FACTURA_H
