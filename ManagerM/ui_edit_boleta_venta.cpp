#include "ui_edit_boleta_venta.h"
#include "ui_ui_edit_boleta_venta.h"

ui_edit_boleta_venta::ui_edit_boleta_venta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_edit_boleta_venta)
{
    ui->setupUi(this);
}

ui_edit_boleta_venta::~ui_edit_boleta_venta()
{
    delete ui;
}
