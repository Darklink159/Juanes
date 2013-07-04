#ifndef UI_NEW_COMPRA_NOTA_DEBITO_H
#define UI_NEW_COMPRA_NOTA_DEBITO_H

#include <QWidget>

namespace Ui {
class ui_new_compra_nota_debito;
}

class ui_new_compra_nota_debito : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_compra_nota_debito(QWidget *parent = 0);
    ~ui_new_compra_nota_debito();
    
private:
    Ui::ui_new_compra_nota_debito *ui;
};

#endif // UI_NEW_COMPRA_NOTA_DEBITO_H
