#include "ui_pedido_nuevo.h"
#include "ui_ui_pedido_nuevo.h"

ui_pedido_nuevo::ui_pedido_nuevo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_pedido_nuevo)
{
    ui->setupUi(this);
}

ui_pedido_nuevo::~ui_pedido_nuevo()
{
    delete ui;
}
