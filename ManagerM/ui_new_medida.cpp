#include "ui_new_medida.h"
#include "ui_ui_new_medida.h"

ui_new_medida::ui_new_medida(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_medida)
{
    ui->setupUi(this);

    obj_medida = new object_e_medida();
}

ui_new_medida::~ui_new_medida()
{
    delete obj_medida;

    delete ui;
}

void ui_new_medida::mf_set_parent_form(ui_opciones_articulo *p)
{
    parent_form = p;
}

void ui_new_medida::mf_set_parent(int p)
{
    parent = p;
}

ui_opciones_articulo *ui_new_medida::mf_get_parent_form()
{
    return parent_form;
}

int ui_new_medida::mf_get_parent()
{
    return parent;
}

void ui_new_medida::on_pushButton_new_medida_clicked()
{
    obj_medida->mf_set_descripcion(ui->lineEdit_descripcion->text());
    obj_medida->mf_add();

    if(parent==0)
    {
        parent_form->update_table_medidas();
    }

    close();
}

void ui_new_medida::closeEvent(QCloseEvent *ev)
{
    emit closing();
}
