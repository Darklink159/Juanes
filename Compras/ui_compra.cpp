#include "ui_compra.h"
#include "ui_ui_compra.h"

ui_compra::ui_compra(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_compra)
{
    ui->setupUi(this);
}

ui_compra::~ui_compra()
{
    delete ui;
}
