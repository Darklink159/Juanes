#ifndef UI_FACTURA_VE_H
#define UI_FACTURA_VE_H

#include <QWidget>

namespace Ui {
class ui_factura_ve;
}

class ui_factura_ve : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_factura_ve(QWidget *parent = 0);
    ~ui_factura_ve();
    
private:
    Ui::ui_factura_ve *ui;
};

#endif // UI_FACTURA_VE_H
