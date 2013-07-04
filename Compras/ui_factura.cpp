#include "ui_factura.h"
#include "ui_ui_factura.h"

ui_factura::ui_factura(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_factura)
{
    ui->setupUi(this);
    //ui->widget->setWindowModified();
}

ui_factura::~ui_factura()
{
    delete ui;
}
