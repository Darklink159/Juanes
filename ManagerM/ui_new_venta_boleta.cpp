#include "ui_new_venta_boleta.h"
#include "ui_ui_new_venta_boleta.h"

ui_new_venta_boleta::ui_new_venta_boleta(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_boleta)
{
    ui->setupUi(this);
}

vector<_QSTR> ui_new_venta_boleta::getValores()
{
    vector<_QSTR> valores;
    valores.push_back(ui->lineEdit_dni->text());
    valores.push_back(ui->lineEdit_nombre->text());
    valores.push_back(ui->lineEdit_direccion->text());
    return valores;
}

ui_new_venta_boleta::~ui_new_venta_boleta()
{
    delete ui;
}

