#ifndef UI_COMPRA_H
#define UI_COMPRA_H

#include <QWidget>

namespace Ui {
class ui_compra;
}

class ui_compra : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_compra(QWidget *parent = 0);
    ~ui_compra();
    
private:
    Ui::ui_compra *ui;
};

#endif // UI_COMPRA_H
