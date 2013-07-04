#ifndef UI_NEW_COMPRA_NOTA_CREDITO_H
#define UI_NEW_COMPRA_NOTA_CREDITO_H

#include <QWidget>

namespace Ui {
class ui_new_compra_nota_credito;
}

class ui_new_compra_nota_credito : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_compra_nota_credito(QWidget *parent = 0);
    ~ui_new_compra_nota_credito();
    
private:
    Ui::ui_new_compra_nota_credito *ui;
};

#endif // UI_NEW_COMPRA_NOTA_CREDITO_H
