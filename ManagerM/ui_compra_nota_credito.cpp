#include "ui_compra_nota_credito.h"
#include "ui_ui_compra_nota_credito.h"

ui_compra_nota_credito::ui_compra_nota_credito(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_compra_nota_credito)
{
    ui->setupUi(this);
}

ui_compra_nota_credito::~ui_compra_nota_credito()
{
    delete ui;
}
