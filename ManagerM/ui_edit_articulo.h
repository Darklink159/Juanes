#ifndef UI_EDIT_ARTICULOS_H
#define UI_EDIT_ARTICULOS_H

#include <QDialog>
#include "object_e_articulo.h"
class object_e_articulo;
namespace Ui {
class ui_edit_articulos;
}

class ui_edit_articulo : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_edit_articulo(object_e_articulo * ar, QWidget *parent = 0);
    ~ui_edit_articulo();
    
private slots:


    void on_btn_aceptar_clicked();

    void on_btn_cancelar_clicked();

    void on_btn_add_marca_clicked();

    void on_btn_add_medida_clicked();

    void update_comboBox_Marca();
    void update_comboBox_Medida();
    void update_comboBox_Proveedor();

    void select_last_inserted_Marca();
    void select_last_inserted_Medida();
    void select_last_inserted_Proveedor();

    void on_btn_add_proveedor_clicked();

  //  void on_btn_add_grupo_clicked();

private:
    Ui::ui_edit_articulos *ui;
    void update_form();
    void load_selected_articulo(object_e_articulo *ar);
    bool validateForm();

    _QSTR pk_proveedor;
};

#endif // UI_EDIT_ARTICULOS_H
