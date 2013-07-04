#include "ui_factura_nuevo.h"
#include "ui_ui_factura_nuevo.h"

ui_factura_nuevo::ui_factura_nuevo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_factura_nuevo)
{
    ui->setupUi(this);
}

ui_factura_nuevo::~ui_factura_nuevo()
{
    delete ui;
}
