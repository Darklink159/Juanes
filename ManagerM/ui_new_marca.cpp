#include "ui_new_marca.h"
#include "ui_ui_new_marca.h"

ui_new_marca::ui_new_marca(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_marca)
{

    obj_marca = new object_e_marca;
    ui->setupUi(this);

}

ui_new_marca::~ui_new_marca()
{
    delete ui;
}

void ui_new_marca::mf_set_parent_form(ui_opciones_articulo *p)
{
    parent_form = p;
}

void ui_new_marca::mf_set_parent(int p)
{
    parent = p;
}

ui_opciones_articulo *ui_new_marca::mf_get_parent_form()
{
    return parent_form;
}

int ui_new_marca::mf_get_parent()
{
    return parent;
}

void ui_new_marca::on_pushButton_new_marca_clicked()
{
    obj_marca->mf_set_descripcion(ui->lineEdit_descripcion->text());
    obj_marca->mf_add();

    if(parent==0)
    {
        parent_form->update_table_marcas();
    }

    close();
}

void ui_new_marca::closeEvent(QCloseEvent *ev)
{
    emit closing();
}
