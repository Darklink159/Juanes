#ifndef UI_PEDIDO_INGRESAR_ARTICULOS_H
#define UI_PEDIDO_INGRESAR_ARTICULOS_H

#include <QWidget>

namespace Ui {
class ui_pedido_ingresar_articulos;
}

class ui_pedido_ingresar_articulos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_pedido_ingresar_articulos(QWidget *parent = 0);
    ~ui_pedido_ingresar_articulos();
    
private:
    Ui::ui_pedido_ingresar_articulos *ui;
};

#endif // UI_PEDIDO_INGRESAR_ARTICULOS_H
