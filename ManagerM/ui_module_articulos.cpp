#include "ui_module_articulos.h"
#include "ui_ui_module_articulos.h"
#include "ui_new_articulo.h"

#include "ui_edit_articulo.h"
#include <QSqlRelationalTableModel>
#include <QModelIndexList>
#include <QSortFilterProxyModel>
#include <QSqlError>
const int num_header = 9;

const char * e_articulo = "e_articulo";
const char * e_grupo = "e_grupo";
const char * e_marca = "e_marca";
const char * e_medida = "e_medida";
        //" e_articulo as A LEFT JOIN r_proveedor_articulo as R on A.pk_articulo = R.pk_articulo LEFT JOIN e_persona_juridica as PJ on R.pk_proveedor = PJ.pk_ruc";
const char * v_articuloProveedor = "v_articuloProveedor";
//Primary Keys

const char * pk_grupo = "pk_grupo";
const char * pk_marca = "pk_marca";
const char * pk_medida = "pk_medida";

//campo buscado

const char * descripcion = "descripcion";

//Headers tabla

const char * tableHeaders[num_header] = {"Código","Grupo","Marca","Medida","Descripción","Precio","Stock","Habilitado","Proveedor"};

ui_module_articulos::ui_module_articulos(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_articulos)
{
    ui->setupUi(this);



    update_table_articulos();




}

ui_module_articulos::~ui_module_articulos()
{

    delete ui;
}

void ui_module_articulos::on_pushButton_nuevo_2_clicked()
{
    ui_new_articulo * form_new_articulo = new ui_new_articulo();
    connect(form_new_articulo,SIGNAL(closing()),this,SLOT(update_table_articulos()));

    form_new_articulo->setAttribute(Qt::WA_DeleteOnClose);
    form_new_articulo->show();

}

void ui_module_articulos::update_table_articulos()
{
    //Limipiamos el model anterior
    QAbstractItemModel * anteriorModel = ui->tableView_articulos->model();
    if(anteriorModel)
            delete anteriorModel;

    //Creamos el nuevo model
    QSqlRelationalTableModel * model = new QSqlRelationalTableModel();
    model->setTable(v_articuloProveedor);


  /* model->setRelation(GRUPO,QSqlRelation(e_grupo,pk_grupo,descripcion));
   model->setRelation(MARCA,QSqlRelation(e_marca,pk_marca,descripcion));
    model->setRelation(MEDIDA,QSqlRelation(e_medida,pk_medida,descripcion));
    model->setJoinMode(QSqlRelationalTableModel::LeftJoin);
    model->setFilter("habilitado=1");*/


    for(int i=0;i<num_header;i++)
    {
        model->setHeaderData(i,Qt::Horizontal,tableHeaders[i]);
    }

    if(model->select())
    {

            ui->tableView_articulos->setModel(model);
            ui->busqueda->setTableModel(model);


    }
    else
    {
        qDebug()<<model->query().lastError();
        qDebug()<<model->query().lastQuery();
        QMessageBox::information(this,"Error","Ocurrio un error al cargar la información");
    }

    //Ocultamos columnas
    ui->tableView_articulos->setColumnHidden(GRUPO,true);
    ui->tableView_articulos->setColumnHidden(HABILITADO,true);
    ui->tableView_articulos->horizontalHeader()->setResizeMode(QHeaderView::Stretch);
    //qDebug()<<model->query().lastQuery()<<endl;
}



void ui_module_articulos::on_pushButton_editar_2_clicked()
{

    QModelIndexList  list = ui->tableView_articulos->selectionModel()->selectedRows();
    int filas = list.size();


    if(filas>1)
    {
        QMessageBox::information(this,"Error","Solo se puede editar una fila a la vez");
    }
    else
    {
        if(filas==0)
        {
            QMessageBox::information(this,"Error","Por favor, seleccione una fila para editar");
        }
        else
        {
            object_e_articulo  articulo;

            QSqlRelationalTableModel * model = (QSqlRelationalTableModel*)ui->tableView_articulos->model();
            QSqlRecord record = model->record(list.at(0).row());



            articulo.mf_set_pk_articulo(record.value(COD).toString());
            articulo.mf_set_descripcion(record.value(DESCRIPCION).toString());
            articulo.mf_set_fk_marca(record.value(MARCA).toString());
            articulo.mf_set_fk_grupo(record.value(GRUPO).toString());
            articulo.mf_set_fk_medida(record.value(MEDIDA).toString());
            articulo.mf_set_precio_lista(record.value(PRECIO).toString());
            articulo.mf_set_stock(record.value(STOCK).toString());


            ui_edit_articulo  form_edit_articulos(&articulo) ;
            form_edit_articulos.exec();


            //Actualizamos la tabla de articulos
            update_table_articulos();
        }
    }

}

void ui_module_articulos::on_pushButton_eliminar_2_clicked()
{
   QModelIndexList  list = ui->tableView_articulos->selectionModel()->selectedRows();
    int filas = list.size();
   if(filas==0)
   {
       QMessageBox::information(this,"Error","Por favor, seleccione una fila para eliminar");
   }
   else
   {
       int rpta = QMessageBox::question(this,"Confirmación","Esta seguro de eliminar "+QString::number(filas)+" articulos?","Aceptar","Cancelar");

       if(rpta==0)
       {
           bool ok = true;
           for(int i=0;i<filas;i++)
           {
               QSqlRelationalTableModel * model = (QSqlRelationalTableModel*)ui->tableView_articulos->model();
               QSqlRecord record = model->record(list.at(i).row());

               object_e_articulo obj;
               obj.mf_load(record.value(COD).toString());

               obj.mf_set_habilitado(C_NO_HABILITADO);

               //Si ocurre un error
              if (!obj.mf_update())
              {
                ok = false;
              }
           }


           if(!ok)
           {
               //Mostramos mensaje de error
               QMessageBox::information(this,"Error",C_ERROR_ELIMINAR_ARTICULO)        ;


           }
           else
           {
               //No ocurre ningun error
              update_table_articulos();
           }



       }

   }

}



