#ifndef UI_FACTURA_NUEVO_H
#define UI_FACTURA_NUEVO_H

#include <QWidget>

namespace Ui {
class ui_factura_nuevo;
}

class ui_factura_nuevo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_factura_nuevo(QWidget *parent = 0);
    ~ui_factura_nuevo();
    
private:
    Ui::ui_factura_nuevo *ui;
};

#endif // UI_FACTURA_NUEVO_H
