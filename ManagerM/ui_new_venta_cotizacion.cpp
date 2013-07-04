#include "ui_new_venta_cotizacion.h"
#include "ui_ui_new_venta_cotizacion.h"

ui_new_venta_cotizacion::ui_new_venta_cotizacion(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_venta_cotizacion)
{
    ui->setupUi(this);
}

vector<_QSTR> ui_new_venta_cotizacion::getValores()
{
    vector<_QSTR> valores;
    valores.push_back(ui->lineEdit_ruc->text());
    valores.push_back(ui->lineEdit_nombre->text());
    valores.push_back(ui->lineEdit_direccion->text());
    return valores;
}

ui_new_venta_cotizacion::~ui_new_venta_cotizacion()
{
    delete ui;
}

void ui_new_venta_cotizacion::printValues(_QSTR a1,_QSTR a2)
{
    ui->lineEdit_ruc->setText(a1);
    ui->lineEdit_nombre->setText(a2);
}

void ui_new_venta_cotizacion::on_pushButton_clicked()
{
    ui_search_cliente *search_cliente=new ui_search_cliente;

    //trying

    connect(search_cliente,SIGNAL(returnInformation(_QSTR,_QSTR)),this,SLOT(printValues(_QSTR,_QSTR)));
    search_cliente->open();

}
