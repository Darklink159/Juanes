#include "ui_edit_proveedor.h"
#include "ui_ui_edit_proveedor.h"


ui_edit_proveedor::ui_edit_proveedor(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_edit_proveedor)
{
    ui->setupUi(this);
    QRegExp regExp_numero("[0-9]{11,11}");
    ui->lineEdit_ruc->setValidator(new QRegExpValidator(regExp_numero,this));

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

}

ui_edit_proveedor::~ui_edit_proveedor()
{
    delete ui;
}

void ui_edit_proveedor::on_pushButton_cancelar_clicked()
{
    this->close();
}

void ui_edit_proveedor::update_data(QString ruc)
{
    currentRUC = ruc;
    object_e_persona_juridica o_pj;
    o_pj.mf_load(ruc);
    ui->lineEdit_comentario->setText(o_pj.mf_get_comentario());
    ui->lineEdit_direccion->setText(o_pj.mf_get_direccion());
    ui->lineEdit_email->setText(o_pj.mf_get_email());
    ui->lineEdit_fax->setText(o_pj.mf_get_fax());
    map<QString, QString >::iterator it=regiones.begin();
    for(; it!=regiones.end(); it++)
    {
        if((*it).second == o_pj.mf_get_fk_region())
        {
            break;
        }
    }
    int index = ui->comboBox_regiones->findText((*it).first);
    ui->comboBox_regiones->setCurrentIndex(index);
    //ui->lineEdit_nombre->setText(o_pj.md_o_habilitado);
    ui->lineEdit_pagina_web->setText(o_pj.mf_get_pagina_web());
    ui->lineEdit_razon_social->setText(o_pj.mf_get_razon_social());
    ui->lineEdit_representante->setText(o_pj.mf_get_representante());
    ui->lineEdit_ruc->setText(o_pj.mf_get_pk_ruc());
    ui->lineEdit_telefono->setText(o_pj.mf_get_telefono_fijo());

    object_e_proveedor o_p;
    o_p.mf_load(ruc);
    ui->lineEdit_nombre->setText(o_p.mf_get_nombre_vendedor());
    ui->lineEdit_celular->setText(o_p.mf_get_celular_vendedor());
}

void ui_edit_proveedor::setTableView(QTableView *t)
{
    table = t;
}
void ui_edit_proveedor::on_pushButton_guardar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en el proveedor?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        QSqlQuery query;
        QString str_query;

        object_e_persona_juridica o_pj;
        o_pj.mf_set_comentario(ui->lineEdit_comentario->text());
        o_pj.mf_set_direccion(ui->lineEdit_direccion->text());
        o_pj.mf_set_email(ui->lineEdit_email->text());
        o_pj.mf_set_fax(ui->lineEdit_fax->text());
        map<QString, QString >::iterator it;
        it = regiones.find(ui->comboBox_regiones->currentText());
        o_pj.mf_set_fk_region((*it).second);
        o_pj.mf_set_razon_social(ui->lineEdit_razon_social->text());
        o_pj.mf_set_telefono_fijo(ui->lineEdit_telefono->text());
        o_pj.mf_set_representante(ui->lineEdit_representante->text());
        o_pj.mf_set_pagina_web(ui->lineEdit_pagina_web->text());
        o_pj.mf_set_habilitado("1");
        o_pj.mf_set_pk_ruc(ui->lineEdit_ruc->text());


        str_query = "UPDATE e_persona_juridica ";
        str_query += QString("SET comentario = '")+o_pj.mf_get_comentario()+QString("'");
        str_query += QString(", pk_ruc = '")+o_pj.mf_get_pk_ruc()+QString("'");
        str_query += QString(", direccion = '")+o_pj.mf_get_direccion()+QString("'");
        str_query += QString(", email = '")+o_pj.mf_get_email()+QString("'");
        str_query += QString(", fax = '")+o_pj.mf_get_fax()+QString("'");
        str_query += QString(", fk_region = '")+o_pj.mf_get_fk_region()+QString("'");
        str_query += QString(", habilitado = '")+o_pj.mf_get_habilitado()+QString("'");
        str_query += QString(", pagina_web = '")+o_pj.mf_get_pagina_web()+QString("'");
        str_query += QString(", razon_social = '")+o_pj.mf_get_razon_social()+QString("'");
        str_query += QString(", representante = '")+o_pj.mf_get_representante()+QString("'");
        str_query += QString(", telefono_fijo = '")+o_pj.mf_get_telefono_fijo()+QString("'");
        str_query += QString(" WHERE pk_ruc='")+currentRUC+QString("'");
        query.prepare(str_query);

        qDebug()<<str_query<<endl;


        if(query.exec()){
           //this->close();
        }else{
            qDebug()<<"error 1"<<endl;
            SYSTEM->messageCritical("Modificar", "Hubo un conflicto al intentar modificar los datos");
        }

        object_e_proveedor o_p;
        o_p.mf_set_pk_ruc(ui->lineEdit_ruc->text());
        o_p.mf_set_nombre_vendedor(ui->lineEdit_nombre->text());
        o_p.mf_set_celular_vendedor(ui->lineEdit_celular->text());

        str_query = "UPDATE e_proveedor ";
        //str_query += QString("SET pk_ruc = '")+o_p.mf_get_pk_ruc()+QString("'");
        str_query += QString("SET nombre_vendedor = '")+o_p.mf_get_nombre_vendedor()+QString("'");
        str_query += QString(", celular_vendedor = '")+o_p.mf_get_celular_vendedor()+QString("'");
        str_query += QString(" WHERE pk_ruc='")+ui->lineEdit_ruc->text()+QString("'");

        query.prepare(str_query);


        if(query.exec()){
            QSqlQueryModel* model = new QSqlQueryModel;
            model->setQuery("SELECT * FROM getProveedores ORDER BY pro_razon_social");
            table->setModel(model);
           this->close();
        }else{
            SYSTEM->messageCritical("Modificar", "Hubo un conflicto al intentar modificar los datos");
        }
        this->close();
    } else {

    }

}

void ui_edit_proveedor::on_pushButton_link_clicked()
{
    QDesktopServices::openUrl(QUrl("http://www.sunat.gob.pe/cl-ti-itmrconsruc/jcrS00Alias"));
}
