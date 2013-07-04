#ifndef UI_FACTURA_H
#define UI_FACTURA_H

#include <QWidget>

namespace Ui {
class ui_factura;
}

class ui_factura : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_factura(QWidget *parent = 0);
    ~ui_factura();
    
private:
    Ui::ui_factura *ui;
};

#endif // UI_FACTURA_H
