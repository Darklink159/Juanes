#ifndef UI_PEDIDO_H
#define UI_PEDIDO_H

#include <QWidget>

namespace Ui {
class ui_pedido;
}

class ui_pedido : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_pedido(QWidget *parent = 0);
    ~ui_pedido();
    
private:
    Ui::ui_pedido *ui;
};

#endif // UI_PEDIDO_H
