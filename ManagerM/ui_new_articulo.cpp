#include "ui_new_articulo.h"
#include "ui_ui_new_articulo.h"
#include "share_include.h"
const int numHeaders = 8;
#include "ui_new_proveedor.h"



const int NO_SELECTION = 0;
//enum {MEDIDA,GRUPO,MARCA};
enum {H_CODIGO, H_NOMBRE, H_GRUPO, H_MARCA, H_MEDIDA, H_STOCK,H_PRECIO, H_PROVEEDOR};
ui_new_articulo::ui_new_articulo(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_articulo)
{
    ui->setupUi(this);

    update_form();

    //ui->l_grupo_2->setVisible(false);
    //ui->cb_grupo->setVisible(false);
    //ui->btn_add_grupo->setVisible(false);


    //ui->tableWidget->setColumnHidden(H_GRUPO,true);

    ui->le_precio_2->setMaximum(MAX_VALUE_PRECIO);

    ui->le_stock_2->setMaximum(MAX_VALUE_STOCK);

    ui->tableWidget->setColumnHidden(H_GRUPO,true);

}

ui_new_articulo::~ui_new_articulo()
{
    delete ui;
}



bool ui_new_articulo::validateRegistrarForm()
{
        if(ui->le_precio_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: precio" );
           return false;
       }
       else    if(ui->le_nombre_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: nombre" );
           return false;
       }
       else    if(ui->le_stock_2->text().isEmpty())
       {
           QMessageBox::information(this,"Error","Por favor, llene el campo: stock" );
           return false;
       }

   return true;
}

void ui_new_articulo::on_pushButton_agregar_clicked()
{
    vector<_QSTR> articulo(numHeaders);


    articulo[0] = ui->l_codigoop->text();
    articulo[1] = ui->le_nombre_2->text();
    /*
    if(ui->cb_grupo->currentIndex()==0)
    {
        articulo[2] = "";
    }

    else
    {
        articulo[2] = ui->cb_grupo->currentText();
    }
    */
    if(ui->cb_marca->currentIndex()==0)
    {
        articulo[3] = "";
    }
    else
    {
        articulo[3] = ui->cb_marca->currentText();
    }

    if(ui->cb_medida->currentIndex()==0)
    {
        articulo[4] = "";
    }
    else
    {
        articulo[4] = ui->cb_medida->currentText();
    }

    articulo[5] = ui->le_stock_2->text();
    articulo[6] = ui->le_precio_2->text();

    if(ui->cb_proveedor->currentIndex()==0)
    {
        articulo[7] = "";
    }
    else
    {
        articulo[7] = ui->cb_proveedor->currentText();

    }

    if(validateRegistrarForm())
    {
        int count = ui->tableWidget->rowCount();
        ui->tableWidget->insertRow(count);

        ui->l_resultado_2->setVisible(true);

        //Agregamos los items a la tabla


        //Codigo como texto
        QTableWidgetItem * item_codigo = new QTableWidgetItem(articulo[H_CODIGO]);
        //Columna codigo no editable
        item_codigo->setFlags(item_codigo->flags() ^ Qt::ItemIsEditable);
        ui->tableWidget->setItem(count,H_CODIGO,item_codigo);

        //Nombre como texto
        QTableWidgetItem * item_nombre = new QTableWidgetItem(articulo[H_NOMBRE]);
        ui->tableWidget->setItem(count,H_NOMBRE,item_nombre);



        //Insertamos los Combobox y SpinBox  en la Tabla temporal
        QComboBox * marcaBox =  new QComboBox();
        marcaBox->setModel(ui->cb_marca->model());
        marcaBox->setCurrentIndex(ui->cb_marca->currentIndex());

        ui->tableWidget->setCellWidget(count,H_MARCA,marcaBox);

        QComboBox * medidaBox = new QComboBox();
        medidaBox->setModel(ui->cb_medida->model());
        medidaBox->setCurrentIndex(ui->cb_medida->currentIndex());

        ui->tableWidget->setCellWidget(count,H_MEDIDA,medidaBox);

        QComboBox * proveedorBox = new QComboBox();
        proveedorBox->setModel(ui->cb_proveedor->model());
        proveedorBox->setCurrentIndex(ui->cb_proveedor->currentIndex());
        ui->tableWidget->setCellWidget(count,H_PROVEEDOR,proveedorBox);


        QSpinBox * stockBox = new QSpinBox();
        stockBox->setValue(ui->le_stock_2->value());
        stockBox->setMaximum(MAX_VALUE_STOCK);
        ui->tableWidget->setCellWidget(count,H_STOCK,stockBox);

        QSpinBox * precioBox = new QSpinBox();
        precioBox->setValue(ui->le_precio_2->value());
        precioBox->setMaximum(MAX_VALUE_PRECIO);

        ui->tableWidget->setCellWidget(count,H_PRECIO,precioBox);



        //Incrementamos el codigo del articulo en 1
        incrementar_codigo();
        clear_input();

    }
}

void ui_new_articulo::on_btn_aceptar_clicked()
{
    int n_elementos = ui->tableWidget->rowCount();
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar "+QString::number(n_elementos)+" productos ?","Aceptar","Cancelar");
    bool ok = true;

        if(rpta==0)
        {
            qDebug()<<"Registrando: "<<n_elementos<<endl;
            object_e_articulo articulo;
            object_r_proveedor_articulo proveedor_articulo;
            for(int i=0;i<n_elementos;i++)
            {



                    QString grupo,marca,medida,proveedor,pk_proveedor,precio,stock;

                    proveedor = ((QComboBox*)ui->tableWidget->cellWidget(i,H_PROVEEDOR))->currentText();


                    ///int grupo_index = ui->cb_grupo->findText(ui->tableWidget->item(i,H_GRUPO)->text());

                    int grupo_index =NO_SELECTION;


                    int marca_index = ((QComboBox*)ui->tableWidget->cellWidget(i,H_MARCA))->currentIndex();
                    int medida_index = ((QComboBox*)ui->tableWidget->cellWidget(i,H_MEDIDA))->currentIndex();





                    precio = ((QSpinBox*)ui->tableWidget->cellWidget(i,H_PRECIO))->text();
                    stock = ((QSpinBox*)ui->tableWidget->cellWidget(i,H_STOCK))->text();


                     int proveedor_index = ((QComboBox*)ui->tableWidget->cellWidget(i,H_PROVEEDOR))->currentIndex();

                     //No selecciono grupo
                    if(grupo_index==NO_SELECTION)
                    {
                        grupo="";
                    }
                    else
                    {
                        grupo = QString::number(grupo_index);
                    }

                    //No selecciono grupo
                    if(marca_index==NO_SELECTION)
                    {
                       marca="";
                    }
                    else
                    {
                       marca = QString::number(marca_index);
                    }

                    //No selecciono grupo
                    if(medida_index==NO_SELECTION)
                    {
                      medida="";
                    }
                    else
                    {
                      medida = QString::number(medida_index);
                    }



                    articulo.mf_set_descripcion(ui->tableWidget->item(i,H_NOMBRE)->text());
                    articulo.mf_set_fk_grupo(grupo);
                    articulo.mf_set_fk_marca(marca);
                    articulo.mf_set_fk_medida(medida);
                    articulo.mf_set_stock(stock);
                    articulo.mf_set_precio_lista(precio);
                    articulo.mf_set_habilitado(C_HABILITADO);


                    //Si ocurrio un error al insertar en la BD
                    if(!articulo.mf_add())
                    {
                        ok = false;
                        break;
                    }
                    //Tiene proveedor
                    if(proveedor_index!=NO_SELECTION)
                    {
                        pk_proveedor = SYSTEM->getProveedorPK(proveedor);

                        proveedor_articulo.mf_set_pk_articulo(ui->tableWidget->item(i,H_CODIGO)->text());
                        proveedor_articulo.mf_set_pk_proveedor(pk_proveedor);



                        if(!proveedor_articulo.mf_add())
                        {
                            ok = false;

                            break;
                        }

                    }


            }


            if(ok)
            {
                QMessageBox::information(this,"Registro correcto",C_CORRECTO_REGISTRO_ARTICULO)        ;
                reset_form();

            }
            else
            {
                QMessageBox::information(this,"Error en el registro",C_ERROR_REGISTRO_ARTICULO)        ;
            }
        }
        else
        {
              qDebug()<<"Cancel: "<<n_elementos<<endl;

        }
}

void ui_new_articulo::on_btn_borrar_clicked()
{
   QModelIndexList indexList = ui->tableWidget->selectionModel()->selectedRows();

   if(!indexList.empty())
   {
       foreach(QModelIndex index,indexList)
       {

            ui->tableWidget->removeRow(index.row());
       }



    }

   if(ui->tableWidget->rowCount()==0)
   {
        ui->l_resultado_2->setVisible(false);
   }

   ui->tableWidget->setFocus(Qt::OtherFocusReason);
   ui->tableWidget->selectRow(0);

}

void ui_new_articulo::on_btn_cancelar_clicked()
{
    close();
}

void ui_new_articulo::on_btn_add_grupo_clicked()
{
     //openOpcionesArticuloWith(GRUPO);
}

void ui_new_articulo::on_btn_add_marca_clicked()
{
    //openOpcionesArticuloWith(MARCA);
    ui_new_marca * form_new_marca = new ui_new_marca();
    form_new_marca->setAttribute(Qt::WA_DeleteOnClose);
    connect(form_new_marca,SIGNAL(closing()),this,SLOT(update_comboBox_Marca()));
    connect(form_new_marca,SIGNAL(closing()),this,SLOT(select_last_inserted_Marca()));

    form_new_marca->show();

}

void ui_new_articulo::on_btn_add_medida_clicked()
{
   // openOpcionesArticuloWith(MEDIDA);

    ui_new_medida * form_new_medida = new ui_new_medida();
    form_new_medida->setAttribute(Qt::WA_DeleteOnClose);


    connect(form_new_medida,SIGNAL(closing()),this,SLOT(update_comboBox_Medida()));
    connect(form_new_medida,SIGNAL(closing()),this,SLOT(select_last_inserted_Medida()));

    form_new_medida->show();

}

void ui_new_articulo::on_btn_add_proveedor_clicked()
{
    ui_new_proveedor * form_new_proveedor = new ui_new_proveedor();
    form_new_proveedor->setAttribute(Qt::WA_DeleteOnClose);

    connect(form_new_proveedor,SIGNAL(closing()),this,SLOT(update_comboBox_Proveedor()));
    connect(form_new_proveedor,SIGNAL(closing()),this,SLOT(select_last_inserted_Proveedor()));
    form_new_proveedor->show();
}


void ui_new_articulo::update_form()
{


    ui->l_resultado_2->setVisible(false);
    //Obtenemos el valor correcto del codigo de articulo
    update_codigo_text(QString::number(SYSTEM->getAutoIncrement("e_articulo")));




   // vector<_QSTR> grupo = SYSTEM->getDescripcion("e_grupo");

    //SYSTEM->loadComboBoxFromVector(ui->cb_grupo,grupo,false);



     //Actualizamos los combobox con la informacion de la BD

    update_comboBox_Marca();
    update_comboBox_Medida();
    update_comboBox_Proveedor();


}

void ui_new_articulo::update_comboBox_Marca()
{
      vector<_QSTR> marca = SYSTEM->getDescripcion("e_marca");
      SYSTEM->loadComboBoxFromVector(ui->cb_marca,marca,false);


}

void ui_new_articulo::update_comboBox_Medida()
{
    vector<_QSTR> medida = SYSTEM->getDescripcion("e_medida");
      SYSTEM->loadComboBoxFromVector(ui->cb_medida,medida,false);

}

void ui_new_articulo::update_comboBox_Proveedor()
{
   // QStringList proveedor = SYSTEM->getListOfValuesNotSorted("e_proveedor","nombre_vendedor");
    vector<_QSTR> proveedor = SYSTEM->getRazonSocial_Proveedores();
    SYSTEM->loadComboBoxFromVector(ui->cb_proveedor,proveedor,false);

}

void ui_new_articulo::select_last_inserted_Marca()
{
    ui->cb_marca->setCurrentIndex(ui->cb_marca->count()-1);
}

void ui_new_articulo::select_last_inserted_Medida()
{
    ui->cb_medida->setCurrentIndex(ui->cb_medida->count()-1);
}

void ui_new_articulo::select_last_inserted_Proveedor()
{
    ui->cb_proveedor->setCurrentIndex(ui->cb_proveedor->count()-1);
}





void ui_new_articulo::closeEvent(QCloseEvent *ev)
{
    emit closing();
}

void ui_new_articulo::reset_form()
{

    //Borramos los line edit y combobox
    clear_input();

    //Reestablecemos el valor correcto de la numeracion y actualizamos los valores de combobox
    update_form();

    //Borramos los articulos de la tabla
    while(ui->tableWidget->rowCount())
    {
           ui->tableWidget->removeRow(ui->tableWidget->rowCount()-1);
    }
}

void ui_new_articulo::incrementar_codigo()
{
    //Incrementamos la numeracion del codigo de articulo
    int prox_codigo = ui->l_codigoop->text().toInt()+1;

    update_codigo_text(QString::number(prox_codigo));
}

void ui_new_articulo::clear_input()
{
    //Borra todos los line edits y deselecciona los combobox

    ui->le_nombre_2->clear();
    //ui->cb_grupo->setCurrentIndex(0);
    ui->cb_marca->setCurrentIndex(0);
    ui->cb_medida->setCurrentIndex(0);
    ui->cb_proveedor->setCurrentIndex(0);
    ui->le_precio_2->cleanText();

    ui->le_stock_2->cleanText();    

    ui->le_nombre_2->setFocus(Qt::OtherFocusReason);
}

void ui_new_articulo::update_codigo_text(QString nuevo_codigo)
{
    ui->l_codigoop->setText(nuevo_codigo);
}

void ui_new_articulo::keyPressEvent(QKeyEvent *ev)
{

    //Borra las filas seleccionadas con tecla Supr/Delete
    if(ui->tableWidget->hasFocus())
    {

        if(ev->type() ==QEvent::KeyPress)
        {
            QKeyEvent * keyEvent = (QKeyEvent*) ev;
            if(keyEvent->key()==Qt::Key_Delete)
            {
                on_btn_borrar_clicked();
            }
        }
    }
}


