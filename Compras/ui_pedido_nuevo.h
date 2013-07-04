#ifndef UI_PEDIDO_NUEVO_H
#define UI_PEDIDO_NUEVO_H

#include <QWidget>

namespace Ui {
class ui_pedido_nuevo;
}

class ui_pedido_nuevo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_pedido_nuevo(QWidget *parent = 0);
    ~ui_pedido_nuevo();
    
private:
    Ui::ui_pedido_nuevo *ui;
};

#endif // UI_PEDIDO_NUEVO_H
