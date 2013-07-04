#include "ui_opciones_comprobante.h"
#include "ui_ui_opciones_comprobante.h"

ui_opciones_comprobante::ui_opciones_comprobante(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_comprobante)
{
    ui->setupUi(this);

    pk_boleta = "";
    pk_factura = "";

    model_boletas = new QSqlQueryModel;
    model_facturas = new QSqlQueryModel;

    update_table_boletas();
    update_table_facturas();
}

ui_opciones_comprobante::~ui_opciones_comprobante()
{
    delete ui;
}

void ui_opciones_comprobante::update_table_boletas()
{
    model_boletas->setQuery(SYSTEM->getBoletaSistema());
    ui->tableView_boleta->setModel(model_boletas);
}

void ui_opciones_comprobante::update_table_facturas()
{
     model_facturas->setQuery(SYSTEM->getFacturaSistema());
     ui->tableView_factura->setModel(model_facturas);
}

void ui_opciones_comprobante::on_pushButton_new_b_clicked()
{
    ui_new_boleta_sistema* boleta_form = new ui_new_boleta_sistema;
    boleta_form->setAttribute(Qt::WA_DeleteOnClose);
    boleta_form->mf_set_parent_form(this);
    boleta_form->mf_set_parent(0);
    boleta_form->show();
}

void ui_opciones_comprobante::on_pushButton_new_f_clicked()
{
    ui_new_factura_sistema* factura_form = new ui_new_factura_sistema;
    factura_form->setAttribute(Qt::WA_DeleteOnClose);
    factura_form->mf_set_parent_form(this);
    factura_form->mf_set_parent(0);
    factura_form->show();
}

void ui_opciones_comprobante::on_tableView_factura_clicked(const QModelIndex &index)
{
    int row = index.row();

    pk_factura = ui->tableView_factura->model()->data(ui->tableView_factura->model()->index(row,0)).toString();

    _QSTR serie = ui->tableView_factura->model()->data(ui->tableView_factura->model()->index(row,1)).toString();
    _QSTR numero_inicio = ui->tableView_factura->model()->data(ui->tableView_factura->model()->index(row,2)).toString();
    _QSTR numero_fin = ui->tableView_factura->model()->data(ui->tableView_factura->model()->index(row,3)).toString();

    ui->spinBox_serie_f->setValue(serie.toInt());
    ui->spinBox_inicio_f->setValue(numero_inicio.toInt());
    ui->spinBox_fin_f->setValue(numero_fin.toInt());
}


void ui_opciones_comprobante::on_tableView_boleta_clicked(const QModelIndex &index)
{
    int row = index.row();

    pk_boleta = ui->tableView_boleta->model()->data(ui->tableView_boleta->model()->index(row,0)).toString();

    _QSTR serie = ui->tableView_boleta->model()->data(ui->tableView_boleta->model()->index(row,1)).toString();
    _QSTR numero_inicio = ui->tableView_boleta->model()->data(ui->tableView_boleta->model()->index(row,2)).toString();
    _QSTR numero_fin = ui->tableView_boleta->model()->data(ui->tableView_boleta->model()->index(row,3)).toString();

    ui->spinBox_serie_b->setValue(serie.toInt());
    ui->spinBox_inicio_b->setValue(numero_inicio.toInt());
    ui->spinBox_fin_b->setValue(numero_fin.toInt());
}

void ui_opciones_comprobante::on_pushButton_save_b_clicked()
{
    object_e_boleta_sistema* boleta_form = new object_e_boleta_sistema;

    boleta_form->mf_load(pk_boleta);

    boleta_form->mf_set_serie(QString::number(ui->spinBox_serie_b->value()));
    boleta_form->mf_set_numero_inicio(QString::number(ui->spinBox_inicio_b->value()));
    boleta_form->mf_set_numero_fin(QString::number(ui->spinBox_fin_b->value()));

    boleta_form->mf_update();

    update_table_boletas();

}

void ui_opciones_comprobante::on_pushButton_save_f_clicked()
{
    object_e_factura_sistema* factura_form = new object_e_factura_sistema;

    factura_form->mf_load(pk_factura);

    factura_form->mf_set_serie(QString::number(ui->spinBox_serie_f->value()));
    factura_form->mf_set_numero_inicio(QString::number(ui->spinBox_inicio_f->value()));
    factura_form->mf_set_numero_fin(QString::number(ui->spinBox_fin_f->value()));

    factura_form->mf_update();

    update_table_facturas();
}

void ui_opciones_comprobante::on_pushButton_usar_f_clicked()
{
    if(SYSTEM->setFacturaSistema(pk_factura))
        SYSTEM->code_factura = pk_factura.toStdString();
}

void ui_opciones_comprobante::on_pushButton_usar_b_clicked()
{
    if(SYSTEM->setBoletaSistema(pk_boleta))
        SYSTEM->code_boleta = pk_boleta.toStdString();
}
