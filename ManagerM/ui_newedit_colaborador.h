#ifndef UI_NEWEDIT_COLABORADOR_H
#define UI_NEWEDIT_COLABORADOR_H

#include <QDialog>
#include "share_include.h"

namespace Ui {
class ui_newedit_colaborador;
}

class ui_newedit_colaborador : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_newedit_colaborador(bool esNuevoC, QWidget *parent = 0);
    void llenarComboBox();
    void setObjectColaborador(object_e_colaborador* colaborador);
    void llenarCamposEdicion();
    ~ui_newedit_colaborador();
    
private slots:
    void on_pushButton_generateAccess_clicked();

    void on_pushButton_cancel_clicked();

    void on_lineEdit_dni_lostFocus();

    void on_lineEdit_nombres_lostFocus();

    void on_lineEdit_apPaterno_lostFocus();

    void on_lineEdit_apMaterno_lostFocus();

    void on_pushButton_save_clicked();

private:
    Ui::ui_newedit_colaborador *ui;
    bool esNuevoC;
    object_e_colaborador* colaboradorAsociado;


private:

    int parent;//para saber desde es llamado

public:
    //void mf_update_data();

    int mf_get_parent();
    void mf_set_parent(int p);

};

#endif // UI_NEWEDIT_COLABORADOR_H
