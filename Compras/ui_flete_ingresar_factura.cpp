#include "ui_flete_ingresar_factura.h"
#include "ui_ui_flete_ingresar_factura.h"

ui_flete_ingresar_factura::ui_flete_ingresar_factura(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_flete_ingresar_factura)
{
    ui->setupUi(this);
}

ui_flete_ingresar_factura::~ui_flete_ingresar_factura()
{
    delete ui;
}
