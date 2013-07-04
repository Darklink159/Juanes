#include "ui_opciones_articulo.h"
#include "ui_ui_opciones_articulo.h"

ui_opciones_articulo::ui_opciones_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_articulo)
{
    ui->setupUi(this);

    pk_marca = "";
    pk_medida = "";

    model_marca = new QSqlQueryModel;
    model_medida = new QSqlQueryModel;

    update_table_marcas();
    update_table_medidas();


    ui->lineEdit_medida->setFocus(Qt::OtherFocusReason);
    ui->lineEdit_marca->setFocus(Qt::OtherFocusReason);
}

ui_opciones_articulo::~ui_opciones_articulo()
{
    delete ui;
}

void ui_opciones_articulo::update_table_marcas()
{
    model_marca->setQuery(SYSTEM->getMarcas());
    ui->tableView_marca->setModel(model_marca);
}

void ui_opciones_articulo::setCurrentTab(int index)
{
    ui->tabWidget->setCurrentIndex(index);
}

void ui_opciones_articulo::update_table_medidas()
{
     model_medida->setQuery(SYSTEM->getMedidas());
     ui->tableView_medida->setModel(model_medida);
}


void ui_opciones_articulo::on_pushButton_save_medida_clicked()
{
    if(pk_medida == "")
    {
        MESSAGE_INFORMATION("Informacion","Seleccione una medida");
    }else{
        object_e_medida* medida = new object_e_medida;
        medida->mf_load(pk_medida);
        medida->mf_set_descripcion(ui->lineEdit_medida->text());
        medida->mf_update();
        update_table_medidas();
    };
}

void ui_opciones_articulo::on_pushButton_save_marca_clicked()
{

    if(pk_marca == "")
    {
        MESSAGE_INFORMATION("Informacion","Seleccione una marca");
    }else{
        object_e_marca* marca = new object_e_marca;
        marca->mf_load(pk_marca);
        marca->mf_set_descripcion(ui->lineEdit_marca->text());
        marca->mf_update();
        update_table_marcas();
    }
}

void ui_opciones_articulo::closeEvent(QCloseEvent *ev)
{
    emit closing();

}

void ui_opciones_articulo::on_tabWidget_currentChanged(int index)
{
    switch(index)
    {
    case marca:

        //update_table_marcas();
        ui->tableView_marca->show();
        break;

    case medida:
        //update_table_medidas();
        ui->tableView_medida->show();
        break;


    default:
        break;
    }
}



void ui_opciones_articulo::on_pushButton_new_marca_clicked()
{
    ui_new_marca* marca_form = new ui_new_marca;
    marca_form->setAttribute(Qt::WA_DeleteOnClose);
    marca_form->mf_set_parent_form(this);
    marca_form->mf_set_parent(0);
    marca_form->show();

}

void ui_opciones_articulo::on_pushButton_new_medida_clicked()
{
    ui_new_medida* medida_form = new ui_new_medida;
    medida_form->setAttribute(Qt::WA_DeleteOnClose);
    medida_form->mf_set_parent_form(this);
    medida_form->mf_set_parent(0);
    medida_form->show();
}

void ui_opciones_articulo::on_tableView_marca_clicked(const QModelIndex &index)
{
    int row = index.row();
    pk_marca = ui->tableView_marca->model()->data(ui->tableView_marca->model()->index(row,0)).toString();
    _QSTR descripcion = ui->tableView_marca->model()->data(ui->tableView_marca->model()->index(row,1)).toString();
    ui->lineEdit_marca->clear();
    ui->lineEdit_marca->setText(descripcion);

}

void ui_opciones_articulo::on_tableView_medida_clicked(const QModelIndex &index)
{
    int row = index.row();
    pk_medida = ui->tableView_medida->model()->data(ui->tableView_medida->model()->index(row,0)).toString();
    _QSTR descripcion = ui->tableView_medida->model()->data(ui->tableView_medida->model()->index(row,1)).toString();
    ui->lineEdit_medida->clear();
    ui->lineEdit_medida->setText(descripcion);
}
