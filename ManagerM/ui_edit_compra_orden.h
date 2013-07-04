#ifndef UI_EDIT_COMPRA_ORDEN_H
#define UI_EDIT_COMPRA_ORDEN_H

#include <QWidget>

namespace Ui {
class ui_edit_compra_orden;
}

class ui_edit_compra_orden : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_edit_compra_orden(QWidget *parent = 0);
    ~ui_edit_compra_orden();
    
private:
    Ui::ui_edit_compra_orden *ui;
};

#endif // UI_EDIT_COMPRA_ORDEN_H
