#ifndef UI_NEWEDIT_CLIENTE_H
#define UI_NEWEDIT_CLIENTE_H

#include <QDialog>
#include "share_include.h"

class object_e_persona_juridica;
namespace Ui {
class ui_newedit_cliente;
}

class ui_newedit_cliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_newedit_cliente(bool esNuevoC,QWidget *parent = 0);
    void llenarComboBox();
    void setObjectCliente(object_e_persona_juridica* cliente);
    void llenarCamposEdicion();
    ~ui_newedit_cliente();
    
private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_save_clicked();

private:
    Ui::ui_newedit_cliente *ui;
    bool esNuevoC;
    object_e_persona_juridica* cliente;
};

#endif // UI_NEWEDIT_CLIENTE_H
