#include "ui_new_proveedor.h"
#include "ui_ui_new_proveedor.h"

#include <QDesktopServices>

ui_new_proveedor::ui_new_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_proveedor)
{
    ui->setupUi(this);
    QRegExp regExp_numero("[0-9]{11,11}");
    ui->lineEdit_ruc->setValidator(new QRegExpValidator(regExp_numero));

    for(int i=0; i<25; i++)
        ui->comboBox_regiones->addItem("");
    /*
    QRegExp regExp_alfabeto("[A-Z]*");
    ui->comboBox_regiones->setValidator(new QRegExpValidator(regExp_alfabeto));
    */

    //connect(ui->tableView, SIGNAL(entered(QModelIndex)));
    //ui->tableView->entered(*new QModelIndex);
    vector<QString > select, from;
    vector<pair<QString, QString > > where, joins;
    QString extra;

    // SELECT
    select.push_back("*");

    // FROM
    QString str_from = QString(TABLE_NAME_E_REGION);

    from.push_back(str_from);

    // WHERE

    QSqlQuery query = SYSTEM->getSelectQuery(select, from, where, joins,extra);

    while(query.next())
    {
        regiones[query.value(1).toString()] = query.value(0).toString();
    }
    map<QString, QString >::iterator it;
    int countRegion = 0;
    for(it = regiones.begin(); it != regiones.end(); it++)
    {
        ui->comboBox_regiones->setItemText(countRegion++, (*it).first);
    }
    ui->comboBox_regiones->setCurrentIndex(0);

    table = NULL;



}

ui_new_proveedor::~ui_new_proveedor()
{
    delete ui;
}

void ui_new_proveedor::setType(int mode)
{
    if(mode == COMPRAS_NEW)
    {
        ui->pushButton_registrar->setText("Registrar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_registrar_clicked()));
        return;
    }
    if(mode == COMPRAS_EDIT)
    {
        ui->pushButton_registrar->setText("Editar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked()));
        return;
    }
    if(mode == COMPRAS_DELETE)
    {
        return;
    }
}

void ui_new_proveedor::setUiModuleCompras(ui_module_compras *w)
{
    module_compras = w;
}

void ui_new_proveedor::setTableView(QTableView *t)
{
    table = t;
}


void ui_new_proveedor::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar el proveedor?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        qDebug()<<"Procesando consulta"<<endl;
        object_e_persona_juridica obj_e_persona_juridica;

        // 11
        obj_e_persona_juridica.mf_set_pk_ruc(ui->lineEdit_ruc->text());




        map<QString, QString >::iterator it;
        it = regiones.find(ui->comboBox_regiones->currentText());

        obj_e_persona_juridica.mf_set_fk_region((*it).second);
        obj_e_persona_juridica.mf_set_razon_social(ui->lineEdit_razon_social->text());

        obj_e_persona_juridica.mf_set_direccion(ui->lineEdit_direccion->text());
        obj_e_persona_juridica.mf_set_telefono_fijo(ui->lineEdit_telefono->text());

        obj_e_persona_juridica.mf_set_fax(ui->lineEdit_fax->text());
        obj_e_persona_juridica.mf_set_representante(ui->lineEdit_representante->text());
        obj_e_persona_juridica.mf_set_email(ui->lineEdit_email->text());
        obj_e_persona_juridica.mf_set_pagina_web(ui->lineEdit_pagina_web->text());
        obj_e_persona_juridica.mf_set_comentario(ui->lineEdit_comentario->text());
        obj_e_persona_juridica.mf_set_habilitado("1");

        obj_e_persona_juridica.mf_add();

        object_e_proveedor obj_e_proveedor;

        // 3
        obj_e_proveedor.mf_set_pk_ruc(ui->lineEdit_ruc->text());
        obj_e_proveedor.mf_set_celular_vendedor(ui->lineEdit_celular->text());
        obj_e_proveedor.mf_set_nombre_vendedor(ui->lineEdit_nombre->text());

        obj_e_proveedor.mf_add();

        if(table)
        {
            QSqlQueryModel* model = new QSqlQueryModel;
            // update
            model->setQuery("SELECT * FROM getProveedores ORDER BY pro_razon_social");
            table->setModel(model);
        }
        //module_compras->mf_updateModel_proveedor();
        this->close();
    } else {

    }

}

void ui_new_proveedor::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en el proveedor?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}

void ui_new_proveedor::on_pushButton_cancelar_clicked()
{
    this->close();
}


void ui_new_proveedor::on_pushButton_link_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.sunat.gob.pe/cl-ti-itmrconsruc/jcrS00Alias"));

}
void ui_new_proveedor::closeEvent(QCloseEvent *ev)
{
    emit closing();

}
