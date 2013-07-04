#include "ui_factura_ver.h"
#include "ui_ui_factura_ver.h"

ui_factura_ver::ui_factura_ver(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_factura_ver)
{
    ui->setupUi(this);
}

ui_factura_ver::~ui_factura_ver()
{
    delete ui;
}
