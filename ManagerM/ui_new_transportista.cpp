#include "ui_new_transportista.h"
#include "ui_ui_new_transportista.h"

#include <QDesktopServices>

ui_new_transportista::ui_new_transportista(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_transportista)
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
    select.push_back("region");

    // FROM
    QString str_from = QString(TABLE_NAME_E_REGION);

    from.push_back(str_from);

    // WHERE

    // EXTRA
    extra += QString("ORDER BY ") + QString("region");

    QSqlQuery query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
    int countRegion = 0;

    while(query.next())
    {
        //regiones[query.value(1).toString()] = query.value(0).toString();
        ui->comboBox_regiones->setItemText(countRegion++, query.value(0).toString());
    }
    /*
    map<QString, QString >::iterator it;
    int countRegion = 0;
    for(it = regiones.begin(); it != regiones.end(); it++)
    {
        ui->comboBox_regiones->setItemText(countRegion++, (*it).first);
    }
    ui->comboBox_regiones->setCurrentIndex(0);
    */
    /*
    int count = 0;
    ui->comboBox_regiones->setItemText(count++, "AMAZONAS");
    ui->comboBox_regiones->setItemText(count++, "ANCASH");
    ui->comboBox_regiones->setItemText(count++, "APURIMAC");
    ui->comboBox_regiones->setItemText(count++, "AREQUIPA");
    ui->comboBox_regiones->setItemText(count++, "AYACUCHO");
    ui->comboBox_regiones->setItemText(count++, "CAJAMARCA");
    ui->comboBox_regiones->setItemText(count++, "CALLAO");
    ui->comboBox_regiones->setItemText(count++, "CUSCO");
    ui->comboBox_regiones->setItemText(count++, "HUANCAVELICA");
    ui->comboBox_regiones->setItemText(count++, "HUANUCO");
    ui->comboBox_regiones->setItemText(count++, "ICA");
    ui->comboBox_regiones->setItemText(count++, "JUNIN");
    ui->comboBox_regiones->setItemText(count++, "LA LIBERTAD");
    ui->comboBox_regiones->setItemText(count++, "LAMBAYEQUE");
    ui->comboBox_regiones->setItemText(count++, "LIMA");
    ui->comboBox_regiones->setItemText(count++, "LORETO");
    ui->comboBox_regiones->setItemText(count++, "MADRE DE DIOS");
    ui->comboBox_regiones->setItemText(count++, "MOQUEGUA");
    ui->comboBox_regiones->setItemText(count++, "PASCO");
    ui->comboBox_regiones->setItemText(count++, "PIURA");
    ui->comboBox_regiones->setItemText(count++, "PUNO");
    ui->comboBox_regiones->setItemText(count++, "SAN MARTIN");
    ui->comboBox_regiones->setItemText(count++, "TACNA");
    ui->comboBox_regiones->setItemText(count++, "TUMBES");
    ui->comboBox_regiones->setItemText(count++, "UCAYALI");
    */
}

ui_new_transportista::~ui_new_transportista()
{
    delete ui;
}

/*
void ui_new_transportista::setType(int mode)
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

void ui_new_transportista::setUiModuleCompras(ui_module_compras *w)
{
    module_compras = w;
}
*/
void ui_new_transportista::setTableView(QTableView *t)
{
    table = t;
}

void ui_new_transportista::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        object_e_persona_juridica obj_e_persona_juridica;

        obj_e_persona_juridica.mf_set_pk_ruc(ui->lineEdit_ruc->text());
        // set fk_region
        vector<QString > select, from;
        vector<pair<QString, QString > > where, joins;
        QString extra;

        // SELECT
        select.push_back("pk_region");

        // FROM
        QString str_from = QString(TABLE_NAME_E_REGION);

        from.push_back(str_from);

        // WHERE
        where.push_back(make_pair("region", ui->comboBox_regiones->currentText()));

        QSqlQuery query = SYSTEM->getSelectQuery(select, from, where, joins,extra);
        if(query.isSelect())
            query.next();
        obj_e_persona_juridica.mf_set_fk_region(query.value(0).toString());

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

        object_e_transportista obj_transportista;

        obj_transportista.mf_set_pk_ruc(ui->lineEdit_ruc->text());

        obj_transportista.mf_add();

        QSqlQueryModel* model = new QSqlQueryModel;
        // update
        model->setQuery("SELECT * FROM getTransportistas ORDER BY tra_razon_social");
        table->setModel(model);
        //module_compras->mf_updateModel_transportista();
        this->close();
    } else {

    }

}
/*
void ui_new_transportista::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}
*/
void ui_new_transportista::on_pushButton_cancelar_clicked()
{
    this->close();
}

void ui_new_transportista::on_pushButton_link_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.sunat.gob.pe/cl-ti-itmrconsruc/jcrS00Alias"));
}
