#include "ui_module_ventas.h"
#include "ui_ui_module_ventas.h"
#include "ui_new_venta.h"
//enum modulo_ventas{}
#include "search_articulo.h"
ui_module_ventas::ui_module_ventas(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_ventas)
{

    model = new QSqlQueryModel;



    ui->setupUi(this);
}

ui_module_ventas::~ui_module_ventas()
{
    delete ui;
}

void ui_module_ventas::on_treeWidget_ventas_itemDoubleClicked(QTreeWidgetItem *item, int column)
{

    _QSTR section = item->text(column);

    if(section == "Boleta")
    {
        model->setQuery(SYSTEM->getBoletas());

    }
    if(section == "Factura")
    {
        model->setQuery(SYSTEM->getFacturas());
    }
    if(section == "Guia RR")
    {

    }
    if(section == "Crédito")
    {

    }
    if(section == "Débito")
    {

    }
    if(section == "Nota Pedido")
    {

    }
    if(section == "Ticket")
    {

    }
    if(section == "Cotización")
    {

    }
    if(section == "Proforma")
    {

    }

    ui->tableView_ventas->setModel(model);

}

void ui_module_ventas::on_pushButton_nuevo_clicked()
{
   ui_new_venta * form_new_venta = new ui_new_venta();
   form_new_venta->show();
   /*search_articulo * form_new_venta = new search_articulo();

    form_new_venta->setAttribute(Qt::WA_DeleteOnClose);


    form_new_venta->show();*/
}
