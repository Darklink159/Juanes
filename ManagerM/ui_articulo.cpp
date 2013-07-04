#include "ui_articulo.h"
#include "ui_ui_articulo.h"


enum {AR_BUSQUEDA, AR_REGISTRO};
const int numHeaders = 7;
const int numResultInfo = 2;
_QSTR headers[numHeaders] = {"Código","Nombre","Grupo","Marca","Medida","Precio","Stock"};
_QSTR result_info[numResultInfo] = {"Artículos encontrados :", "Artículos por registrar :"};

ui_articulo::ui_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_articulo)
{
    ui->setupUi(this);

    ui->l_resultado->setVisible(false);
    ui->tableWidget->setVisible(false);
    ui->btn_registrar->setVisible(false);

    ui->l_codigoop->setVisible(false);
    ui->l_codigoop->setText(QString::number(SYSTEM->getAutoIncrement("e_articulo")));


    //TODO : LOAD MARCAS,GRUPOS,MEDIDAS FROM DB to COMBOBOX

}

ui_articulo::~ui_articulo()
{
    delete ui;
}

void ui_articulo::on_btn_borrar_clicked()
{
    ui->le_codigo->clear();
    ui->le_nombre->clear();
    ui->le_grupo->clear();
    ui->le_marca->clear();
    ui->le_medida->clear();
    ui->le_precio->clear();
    ui->le_stock->clear();
    ui->l_resultado->setVisible(false);


    ui->tableView->setModel(NULL);


    while(ui->tableWidget->rowCount())
    {
        ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
    }


}

void ui_articulo::on_btn_aceptar_clicked()
{
     int currentIndex = ui->tabWidget->currentIndex();
     vector<_QSTR> articulo(numHeaders);
     articulo[0] = ui->le_codigo->text();

     articulo[1] = ui->le_nombre->text();
     articulo[2] = ui->le_grupo->text();
     articulo[3] = ui->le_marca->text();
     articulo[4] = ui->le_medida->text();
     articulo[5] = ui->le_stock->text();
     articulo[6] = ui->le_precio->text();


    if(currentIndex==AR_BUSQUEDA)
    {



            QSqlQuery query = SYSTEM->getArticulos(articulo[0],articulo[1],articulo[2],articulo[3],articulo[4],articulo[5],articulo[6]);

            if(query.isActive()&& query.next())
            {
                QSqlQueryModel * model = new QSqlQueryModel();
                model->setQuery(query);


                //Modificamos los headers de la tabla
                for(int i=0;i<numHeaders;i++)
                {
                    model->setHeaderData(i, Qt::Horizontal,headers[i]);
                }

                 ui->tableView->setModel(model);
                 ui->l_resultado->setVisible(true);

            }
            else
            {
                QMessageBox::information(this,"Error","No se encontro ningun artículo con esas características");
            }

    }
    else if(currentIndex==AR_REGISTRO)
    {
        if(validateForm())
        {
            int count = ui->tableWidget->rowCount();
            ui->tableWidget->insertRow(count);

            for(int i=0;i<numHeaders;i++)
             {
                ui->tableWidget->setItem(count,i,new QTableWidgetItem(articulo[i]));
             }

        }



    }



}



void ui_articulo::on_tabWidget_currentChanged(int index)
{
    switch(index)
    {
    //Tab Buscar
        case 0:
            ui->btn_aceptar->setText("Buscar");
            ui->btn_registrar->setVisible(false);
            ui->tableView->setVisible(true);
            ui->tableWidget->setVisible(false);
            ui->l_codigoop->setVisible(false);
            ui->le_codigo->setVisible(true);


        break;

        //Tab Registrar
        case 1:
            ui->btn_aceptar->setText("Agregar");
            ui->btn_registrar->setVisible(true);
            ui->tableView->setVisible(false);
            ui->tableWidget->setVisible(true);
            ui->l_codigoop->setVisible(true);
            ui->le_codigo->setVisible(false);


        break;

    }

    //Seteamos el mensaje de resultado que aparecerá al realizar una operacion
    ui->l_resultado->setText(result_info[index]);

    on_btn_borrar_clicked();


}

void ui_articulo::on_btn_registrar_clicked()
{
    int n_elementos = ui->tableWidget->rowCount();
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar "+QString::number(n_elementos)+" productos ?","Aceptar","Cancelar");

        if(rpta==0)
        {
            qDebug()<<"Registrando: "<<n_elementos<<endl;
            object_e_articulo articulo;
            for(int i=0;i<n_elementos;i++)
            {
                    articulo.mf_set_descripcion(ui->tableWidget->item(i,1)->text());
                    articulo.mf_set_fk_grupo(ui->tableWidget->item(i,2)->text());
                    articulo.mf_set_fk_marca(ui->tableWidget->item(i,3)->text());
                    articulo.mf_set_fk_medida(ui->tableWidget->item(i,4)->text());
                    articulo.mf_set_stock(ui->tableWidget->item(i,5)->text());
                    articulo.mf_set_precio_lista(ui->tableWidget->item(i,6)->text());


                    articulo.mf_add();
            }
        }
        else
        {
              qDebug()<<"Cancel: "<<n_elementos<<endl;

        }


}

bool ui_articulo::validateForm()
{
   if(ui->le_marca->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_marca" );
           return false;
       }
       else    if(ui->le_precio->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_precio" );
           return false;
       }
       else    if(ui->le_nombre->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_nombre" );
           return false;
       }
       else    if(ui->le_medida->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_medida" );
           return false;
       }
       else    if(ui->le_grupo->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_grupo" );
           return false;
       }
       else    if(ui->le_stock->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: le_stock" );
           return false;
       }

   return true;
}


