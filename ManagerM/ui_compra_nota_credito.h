#ifndef UI_COMPRA_NOTA_CREDITO_H
#define UI_COMPRA_NOTA_CREDITO_H

#include <QWidget>

namespace Ui {
class ui_compra_nota_credito;
}

class ui_compra_nota_credito : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_compra_nota_credito(QWidget *parent = 0);
    ~ui_compra_nota_credito();
    
private:
    Ui::ui_compra_nota_credito *ui;
};

#endif // UI_COMPRA_NOTA_CREDITO_H
