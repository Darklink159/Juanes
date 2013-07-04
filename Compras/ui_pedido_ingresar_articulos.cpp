#include "ui_pedido_ingresar_articulos.h"
#include "ui_ui_pedido_ingresar_articulos.h"

ui_pedido_ingresar_articulos::ui_pedido_ingresar_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_pedido_ingresar_articulos)
{
    ui->setupUi(this);
}

ui_pedido_ingresar_articulos::~ui_pedido_ingresar_articulos()
{
    delete ui;
}
