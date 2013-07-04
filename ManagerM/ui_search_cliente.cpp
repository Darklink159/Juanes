#include "ui_search_cliente.h"
#include "ui_ui_search_cliente.h"

#define PK_RUC 0;

ui_search_cliente::ui_search_cliente(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_search_cliente)
{
    ui->setupUi(this);

    tabla = new QSqlQueryModel;
    updateContentFrame("");

}
void ui_search_cliente::updateContentFrame(_QSTR filtro)
{
    tabla->setQuery(SYSTEM->getRucNombreClientes(filtro));
    ui->tableView_clientes->setModel(tabla);
}
ui_search_cliente::~ui_search_cliente()
{
    delete ui;
}

void ui_search_cliente::on_lineEdit_ruc_textEdited(const QString &nuevo)
{
    _QSTR filtro="";
    bool hayAnd = false;
    if(!nuevo.isEmpty())
    {
        filtro = " AND e_persona_juridica.pk_ruc LIKE '"+nuevo+"%'";
        hayAnd = true;
    }

    if(!ui->lineEdit_razonSocial->text().isEmpty())
    {
        if(hayAnd)
        {
            filtro+=" AND ";
        }
        filtro+= "e_persona_juridica.razon_social LIKE '%"+ui->lineEdit_razonSocial->text()+"%' ";
    }
    updateContentFrame(filtro);
}

void ui_search_cliente::on_lineEdit_razonSocial_textEdited(const QString &nuevo)
{
    _QSTR filtro="";
    bool hayAnd = false;
    if(!nuevo.isEmpty())
    {
        filtro = " AND e_persona_juridica.razon_social LIKE '%"+nuevo+"%'";
        hayAnd = true;
    }

    if(!ui->lineEdit_ruc->text().isEmpty())
    {
        if(hayAnd)
        {
            filtro+=" AND ";
        }
        filtro+= "e_persona_juridica.pk_ruc LIKE '"+ui->lineEdit_ruc->text()+"%' ";
    }
    updateContentFrame(filtro);
}


void ui_search_cliente::on_tableView_clientes_doubleClicked(const QModelIndex &index)
{
    int row=index.row();
    _QSTR ruc=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,0)).toString();
    _QSTR nombre=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,1)).toString();
    emit returnInformation(ruc,nombre);
    close();
}

void ui_search_cliente::on_buttonBox_accepted()
{

    QModelIndexList selected=ui->tableView_clientes->selectionModel()->selectedRows();
    qDebug()<<selected.length();
    int row=selected.at(0).row();
    _QSTR ruc=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,0)).toString();
    _QSTR nombre=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,1)).toString();
    emit returnInformation(ruc,nombre);
}
