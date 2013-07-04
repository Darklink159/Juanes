#ifndef UI_PEDIDO_VER_H
#define UI_PEDIDO_VER_H

#include <QWidget>

namespace Ui {
class ui_pedido_ver;
}

class ui_pedido_ver : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_pedido_ver(QWidget *parent = 0);
    ~ui_pedido_ver();
    
private:
    Ui::ui_pedido_ver *ui;
};

#endif // UI_PEDIDO_VER_H
