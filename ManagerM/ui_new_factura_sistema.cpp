#include "ui_new_factura_sistema.h"
#include "ui_ui_new_factura_sistema.h"

ui_new_factura_sistema::ui_new_factura_sistema(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_factura_sistema)
{
    ui->setupUi(this);
    obj_factura = new object_e_factura_sistema;
}

ui_new_factura_sistema::~ui_new_factura_sistema()
{
    delete ui;
}

void ui_new_factura_sistema::mf_set_parent_form(ui_opciones_comprobante *p)
{
    parent_form = p;
}

void ui_new_factura_sistema::mf_set_parent(int p)
{
    parent = p;
}

ui_opciones_comprobante *ui_new_factura_sistema::mf_get_parent_form()
{
    return parent_form;
}

int ui_new_factura_sistema::mf_get_parent()
{
    return parent;
}

void ui_new_factura_sistema::on_pushButton_new_clicked()
{
    obj_factura->mf_set_serie(ui->spinBox_serie->text());
    obj_factura->mf_set_numero_inicio(ui->spinBox_numero_i->text());
    obj_factura->mf_set_numero_fin(ui->spinBox_numero_f->text());
    obj_factura->mf_set_numero_actual(ui->spinBox_numero_i->text());

    obj_factura->mf_add();

    if(parent==0)
    {
        parent_form->update_table_facturas();
    }

    close();
}

void ui_new_factura_sistema::on_pushButton_cancelar_clicked()
{
    close();
}
