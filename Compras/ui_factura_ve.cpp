#include "ui_factura_ve.h"
#include "ui_ui_factura_ve.h"

ui_factura_ve::ui_factura_ve(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_factura_ve)
{
    ui->setupUi(this);
}

ui_factura_ve::~ui_factura_ve()
{
    delete ui;
}
