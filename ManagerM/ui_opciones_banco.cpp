#include "ui_opciones_banco.h"
#include "ui_ui_opciones_banco.h"

ui_opciones_banco::ui_opciones_banco(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_banco)
{
    ui->setupUi(this);

    model = new QSqlQueryModel;
    update_table_bancos();
}

ui_opciones_banco::~ui_opciones_banco()
{
    delete ui;
}

void ui_opciones_banco::on_pushButton_save_clicked()
{
    object_e_banco* banco = new object_e_banco;
    banco->mf_set_pk_ruc(ui->lineEdit_ruc->text());
    banco->mf_set_nombre(ui->lineEdit_nombre->text());
    banco->mf_set_nombre_corto(ui->lineEdit_nombre_corto->text());
    banco->mf_add();

   update_table_bancos();

    ui->lineEdit_nombre->clear();
    ui->lineEdit_nombre_corto->clear();
    ui->lineEdit_ruc->clear();

}

void ui_opciones_banco::update_table_bancos()
{
    model->setQuery(SYSTEM->getBancos());
    ui->tableView_bancos->setModel(model);
}
