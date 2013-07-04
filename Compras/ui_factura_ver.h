#ifndef UI_FACTURA_VER_H
#define UI_FACTURA_VER_H

#include <QWidget>

namespace Ui {
class ui_factura_ver;
}

class ui_factura_ver : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_factura_ver(QWidget *parent = 0);
    ~ui_factura_ver();
    
private:
    Ui::ui_factura_ver *ui;
};

#endif // UI_FACTURA_VER_H
