#include "ui_opciones.h"
#include "ui_ui_opciones.h"

ui_opciones::ui_opciones(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones)
{
    ui->setupUi(this);

    tab_articulos = new ui_opciones_articulo(ui->widget_category);
    tab_base_datos = new ui_opciones_base_datos(ui->widget_category);
    tab_bancos = new ui_opciones_banco(ui->widget_category);
    tab_proveedores = new ui_opciones_proveedor(ui->widget_category);
    tab_tienda = new ui_opciones_tienda(ui->widget_category);
    tab_general = new ui_opciones_general(ui->widget_category);
    tab_comprobante = new ui_opciones_comprobante(ui->widget_category);


    mf_hide_all_tabs();
    ui->label_category->setText("Articulos");
    tab_articulos->show();

}

ui_opciones::~ui_opciones()
{
    delete ui;
}

void ui_opciones::mf_hide_all_tabs()
{
    tab_articulos->hide();
    tab_base_datos->hide();
    tab_bancos->hide();
    tab_proveedores->hide();
    tab_tienda->hide();
    tab_general->hide();
    tab_comprobante->hide();

}

void ui_opciones::on_listWidget_modulos_clicked(const QModelIndex &index)
{
    int section = index.row();

    mf_hide_all_tabs();

    switch(section)
    {
    case articulo:

        ui->label_category->setText("Articulos");
        tab_articulos->show();

        break;

    case proveedor:

        ui->label_category->setText("Proveedores");
        tab_proveedores->show();

        break;


    case tienda:
        ui->label_category->setText("Tienda");
        tab_tienda->show();

        break;

    case base_datos:

        ui->label_category->setText("Base de Datos");
        tab_base_datos->show();

        break;

    case banco:

        ui->label_category->setText("Bancos");
        tab_bancos->show();

        break;

    case comprobante:

        ui->label_category->setText("Comprobantes");
        tab_comprobante->show();

        break;

    case general:

        ui->label_category->setText("General");
        tab_general->show();

        break;


    default:
        break;

    }
}
