#include "ui_new_compra_nota_debito.h"
#include "ui_ui_new_compra_nota_debito.h"

ui_new_compra_nota_debito::ui_new_compra_nota_debito(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_compra_nota_debito)
{
    ui->setupUi(this);
}

ui_new_compra_nota_debito::~ui_new_compra_nota_debito()
{
    delete ui;
}
