#include "ui_module_colaboradores.h"
#include "ui_ui_module_colaboradores.h"


const int campos = 14;
const char * e_colaborador = "e_colaborador";
const char * e_tienda = "e_tienda";

//Primary Keys
const char * pk_tienda = "pk_ruc";
const char * tiendaDescripcion = "nombre";
const char * colaboradorCampos[campos] = {"DNI","Tienda","Nombres","Ap. Paterno","Ap. Materno","Direccion",
                                         "Fecha de Nac.","Sexo","Estado Civil","Celular","Tfno. Fijo","E-mail",
                                         "Comentario","Habilitado"};

ui_module_colaboradores::ui_module_colaboradores(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_colaboradores)
{
    ui->setupUi(this);
    updateContentFrame();
}

ui_module_colaboradores::~ui_module_colaboradores()
{
    delete ui;
}

void ui_module_colaboradores::updateContentFrame()
{
    /*model->setQuery(SYSTEM->getColaboradores());

    ui->tableView_colaboradores->setModel(model);*/

    //Limipiamos el model anterior
    QAbstractItemModel * anteriorModel = ui->tableView_colaboradores->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    model = new QSqlRelationalTableModel;
    model->setTable(e_colaborador);
    model->setRelation(COL_TIENDA,QSqlRelation(e_tienda,pk_tienda,tiendaDescripcion));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("habilitado=1");


    for(int i=0;i<campos;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,colaboradorCampos[i]);
    }

    if(model->select())
    {
         ui->tableView_colaboradores->setModel(model);
    }
    else
    {
        SYSTEM->messageInformation("Error","Problema al cargar colaboradores");
    }

    //Ocultamos columnas
    ui->tableView_colaboradores->setColumnHidden(COL_HABILITADO,true);

}

void ui_module_colaboradores::on_pushButton_nuevo_clicked()
{
    ui_newedit_colaborador *newedit_colaborador_form = new ui_newedit_colaborador(true);
    newedit_colaborador_form->setWindowTitle("Nuevo colaborador");
    newedit_colaborador_form->exec();

    updateContentFrame();
}

void ui_module_colaboradores::on_pushButton_editar_clicked()
{
    QModelIndexList selected=ui->tableView_colaboradores->selectionModel()->selectedRows();

    if(selected.size()!=1)
        QMessageBox::information(this,"Editar colaborador","Debe seleccionar a un solo colaborador!",QMessageBox::Ok);

    //fila seleccionada
    else
    {
        int row=selected.at(0).row();

        _QSTR pk_dni=ui->tableView_colaboradores->model()->data(ui->tableView_colaboradores->model()->index(row,0)).toString();
        qDebug()<<pk_dni<<endl;
        object_e_colaborador* colaboradorPorEditar=new object_e_colaborador;
        colaboradorPorEditar->mf_load(pk_dni);
        ui_newedit_colaborador *edita_colaborador_form = new ui_newedit_colaborador(false);
        edita_colaborador_form->setObjectColaborador(colaboradorPorEditar);
        edita_colaborador_form->setWindowTitle("Editar colaborador");
        edita_colaborador_form->llenarCamposEdicion();
        edita_colaborador_form->exec();

        updateContentFrame();
    }
}

void ui_module_colaboradores::on_pushButton_eliminar_clicked()
{
    QModelIndexList selectedList = ui->tableView_colaboradores->selectionModel()->selectedRows();
    if(selectedList.size()==0)
            QMessageBox::information(this,"Eliminar Colaborador", "Debe seleccionar al menos un colaborador");
    else
    {
        bool result=true;
        for (int i = 0; i < selectedList.size(); ++i)
        {
            QModelIndex index = selectedList.at(i);
            int row=index.row();

            _QSTR pk_dni=ui->tableView_colaboradores->model()->data(ui->tableView_colaboradores->model()->index(row,0)).toString();
            qDebug()<<"ELIMINANDO "<<pk_dni<<endl;
            result=SYSTEM->deleteColaborador(pk_dni);
        }
        if(result)
        {
            QMessageBox::information(this,"Eliminar Colaborador", "Colaboradores eliminados");
            updateContentFrame();
        }
        else
            QMessageBox::information(this,"Eliminar Colaborador", "Problema eliminando colaboradores.\nVuelva a intentarlo");
    }
}
