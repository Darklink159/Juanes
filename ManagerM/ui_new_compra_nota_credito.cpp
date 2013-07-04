#include "ui_new_compra_nota_credito.h"
#include "ui_ui_new_compra_nota_credito.h"

ui_new_compra_nota_credito::ui_new_compra_nota_credito(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_compra_nota_credito)
{
    ui->setupUi(this);
}

ui_new_compra_nota_credito::~ui_new_compra_nota_credito()
{
    delete ui;
}
