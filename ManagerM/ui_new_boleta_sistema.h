#ifndef UI_NEW_BOLETA_SISTEMA_H
#define UI_NEW_BOLETA_SISTEMA_H

#include <QWidget>
#include "share_include.h"

class object_e_boleta_sistema;
class ui_opciones_comprobante;

namespace Ui {
class ui_new_boleta_sistema;
}

class ui_new_boleta_sistema : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_boleta_sistema(QWidget *parent = 0);
    ~ui_new_boleta_sistema();

private:
    ui_opciones_comprobante* parent_form;
    int parent;
    object_e_boleta_sistema* obj_boleta;

public:
    void mf_set_parent_form(ui_opciones_comprobante* p);
    void mf_set_parent(int p);

    ui_opciones_comprobante* mf_get_parent_form();
    int mf_get_parent();


private slots:
    void on_pushButton_new_clicked();

    void on_pushButton_clicked();

private:
    Ui::ui_new_boleta_sistema *ui;
};

#endif // UI_NEW_BOLETA_SISTEMA_H
