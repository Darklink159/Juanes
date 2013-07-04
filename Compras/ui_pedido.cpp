#include "ui_pedido.h"
#include "ui_ui_pedido.h"

ui_pedido::ui_pedido(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_pedido)
{
    ui->setupUi(this);
}

ui_pedido::~ui_pedido()
{
    delete ui;
}
