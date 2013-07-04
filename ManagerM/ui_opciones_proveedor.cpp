#include "ui_opciones_proveedor.h"
#include "ui_ui_opciones_proveedor.h"

ui_opciones_proveedor::ui_opciones_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_proveedor)
{
    ui->setupUi(this);

    model = new QSqlQueryModel;
    update_table_proveedores();

    //update_table_proveedores();


}

ui_opciones_proveedor::~ui_opciones_proveedor()
{
    delete ui;
}

void ui_opciones_proveedor::on_pushButton_new_clicked()
{
    ui_edit_proveedor* form_proveedor = new ui_edit_proveedor;
    form_proveedor->show();
}

void ui_opciones_proveedor::update_table_proveedores()
{
    model->setQuery(SYSTEM->getProveedores());
    ui->tableView->setModel(model);
}
