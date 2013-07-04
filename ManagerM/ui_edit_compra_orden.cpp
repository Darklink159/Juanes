#include "ui_edit_compra_orden.h"
#include "ui_ui_edit_compra_orden.h"

ui_edit_compra_orden::ui_edit_compra_orden(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_edit_compra_orden)
{
    ui->setupUi(this);
}

ui_edit_compra_orden::~ui_edit_compra_orden()
{
    delete ui;
}
