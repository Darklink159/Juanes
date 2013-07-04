#include "ui_module_clientes.h"
#include "ui_ui_module_clientes.h"



const int nmroCampos = 11;
const char * e_persona_juridica = "e_persona_juridica";
const char * e_region = "e_region";

//Primary Keys
const char * pk_region = "pk_region";
const char * regionDescripcion = "region";
const char * clientesCampos[nmroCampos] = {"RUC","Region","Razón social","Dirección","Tfno. fijo",
                                          "Fax","Representante","E-mail","Pag. web","Comentario",
                                          "Habilitado"};

ui_module_clientes::ui_module_clientes(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_clientes)
{
    ui->setupUi(this);
    updateContentFrame();
}

void ui_module_clientes::updateContentFrame()
{
    /*model->setQuery(SYSTEM->getClientes());
    ui->tableView_clientes->setModel(model);*/

    QAbstractItemModel * anteriorModel = ui->tableView_clientes->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    model = new QSqlRelationalTableModel;
    model->setTable(e_persona_juridica);
    model->setRelation(PJ_REGION,QSqlRelation(e_region,pk_region,regionDescripcion));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("pk_ruc IN(SELECT * from e_cliente)");


    for(int i=0;i<nmroCampos;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,clientesCampos[i]);
    }

    if(model->select())
    {
         ui->tableView_clientes->setModel(model);
    }
    else
    {
        SYSTEM->messageInformation("Error","Problema al cargar colaboradores");
    }

    //Ocultamos columnas
    ui->tableView_clientes->setColumnHidden(PJ_HABILITADO,true);

}

ui_module_clientes::~ui_module_clientes()
{
    delete ui;
}

void ui_module_clientes::on_pushButton_nuevo_clicked()
{
    ui_newedit_cliente *newedit_cliente_form = new ui_newedit_cliente(true);
    newedit_cliente_form->setWindowTitle("Nuevo colaborador");
    newedit_cliente_form->exec();

    updateContentFrame();
}

void ui_module_clientes::on_pushButton_editar_clicked()
{
    QModelIndexList selected=ui->tableView_clientes->selectionModel()->selectedRows();

    if(selected.size()!=1)
        QMessageBox::information(this,"Editar cliente","Debe seleccionar a un solo cliente!",QMessageBox::Ok);

    //fila seleccionada
    else
    {
        int row=selected.at(0).row();

        _QSTR pk_ruc=ui->tableView_clientes->model()->data(ui->tableView_clientes->model()->index(row,0)).toString();
        qDebug()<<pk_ruc<<endl;

        object_e_persona_juridica* clientePorEditar=new object_e_persona_juridica;
        clientePorEditar->mf_load(pk_ruc);
        ui_newedit_cliente *edita_cliente_form = new ui_newedit_cliente(false);
        edita_cliente_form->setObjectCliente(clientePorEditar);
        edita_cliente_form->setWindowTitle("Editar cliente");
        edita_cliente_form->llenarCamposEdicion();
        edita_cliente_form->exec();

        updateContentFrame();
    }
}

void ui_module_clientes::on_pushButton_clicked()
{
    //ui_buscarCliente *gen=new ui_buscarCliente();
    //gen->show();
}
