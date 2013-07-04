#include "ui_edit_articulo.h"
#include "ui_ui_edit_articulo.h"
#include "ui_new_proveedor.h"

const int op_default = 0;
const int not_found = -1;

ui_edit_articulo::ui_edit_articulo(object_e_articulo *ar, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_edit_articulos)
{
    ui->setupUi(this);

    update_form();

    //ui->l_grupo_2->setVisible(false);
   // ui->cb_grupo->setVisible(false);
    //ui->btn_add_grupo->setVisible(false);

    load_selected_articulo(ar);



}

ui_edit_articulo::~ui_edit_articulo()
{
    delete ui;
}

void ui_edit_articulo::update_form()
{
    //Actualizamos los combobox con la informacion de la BD

    update_comboBox_Marca();
    update_comboBox_Medida();
    update_comboBox_Proveedor();


  //  vector<_QSTR> grupo = SYSTEM->getDescripcion("e_grupo");
    //SYSTEM->loadComboBoxFromVector(ui->cb_grupo,grupo,false);



}

void ui_edit_articulo::load_selected_articulo(object_e_articulo *ar)
{
    //Cargamos los line edit
    ui->l_codigoop->setText(ar->mf_get_pk_articulo());
    ui->le_nombre_2->setText(ar->mf_get_descripcion());
    ui->le_precio_2->setValue(ar->mf_get_precio_lista().toDouble());
    ui->le_stock_2->setValue(ar->mf_get_stock().toInt());


    //Obtenemos el nombre de proveedor
    _QSTR pk_proveedor = SYSTEM->getProveedorPKFromArticulo(ar->mf_get_pk_articulo());

    _QSTR nombre_proveedor;

    if(pk_proveedor!="")
        nombre_proveedor = SYSTEM->getNombreProveedor(pk_proveedor);
    else
        nombre_proveedor="";



    this->pk_proveedor = pk_proveedor;

    //Se marca la opcion correcta en los combobox
     //int grupo_index = ui->cb_grupo->findText(ar->mf_get_fk_grupo());
     int marca_index =ui->cb_marca->findText(ar->mf_get_fk_marca());
    int medida_index = ui->cb_medida->findText(ar->mf_get_fk_medida());
    int proveedor_index = ui->cb_proveedor->findText(nombre_proveedor);


   // grupo_index = (grupo_index==not_found)?op_default:grupo_index;
    marca_index = (marca_index==not_found)?op_default:marca_index;
    medida_index = (medida_index==not_found)?op_default:medida_index;
    proveedor_index = (proveedor_index==not_found)?op_default:proveedor_index;






    //ui->cb_grupo->setCurrentIndex(grupo_index);
    ui->cb_marca->setCurrentIndex(marca_index);
    ui->cb_medida->setCurrentIndex(medida_index);
    ui->cb_proveedor->setCurrentIndex(proveedor_index);

}

bool ui_edit_articulo::validateForm()
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



void ui_edit_articulo::on_btn_aceptar_clicked()
{
    if(validateForm())
    {
        object_e_articulo obj;
        obj.mf_load(ui->l_codigoop->text());

        obj.mf_set_descripcion(ui->le_nombre_2->text());
        obj.mf_set_precio_lista(ui->le_precio_2->text());
        obj.mf_set_stock(ui->le_stock_2->text());

        //int grupo_index = ui->cb_grupo->currentIndex();

        //qDebug()<<"grupo index"<<grupo_index;
        int marca_index = ui->cb_marca->currentIndex();
        int medida_index = ui->cb_medida->currentIndex();
        int proveedor_index = ui->cb_proveedor->currentIndex();


        //Menor o igual a 0 indica que no existe
        /*
        if(grupo_index<=0)
        {
            obj.mf_set_fk_grupo("");
        }
        else
        {
            obj.mf_set_fk_grupo(QString::number(grupo_index));
        }*/

        if(marca_index<=0)
        {
            obj.mf_set_fk_marca("");
        }
        else
        {
            obj.mf_set_fk_marca(QString::number(marca_index));
        }

        if(medida_index<=0)
        {
            obj.mf_set_fk_medida("");
        }
        else
        {
         obj.mf_set_fk_medida(QString::number(medida_index));
        }

        if(proveedor_index<=0)
        {
            //Quitamos el proveedor del articulo
            SYSTEM->deleteProveedor_Articulo(this->pk_proveedor,ui->l_codigoop->text());
        }
        else
        {

            //Le modificamos el proveedor
            _QSTR nuevo_pk_prov = SYSTEM->getProveedorPK(ui->cb_proveedor->currentText());

            //Si no tenia proveedor
            if(this->pk_proveedor=="")
            {
                //Insertamos
                object_r_proveedor_articulo p_articulo ;

                p_articulo.mf_set_pk_articulo(ui->l_codigoop->text());
                p_articulo.mf_set_pk_proveedor(nuevo_pk_prov);

                p_articulo.mf_add();
            }
            else
            {
                //Si tenia, lo modificamos
                SYSTEM->updateProveedor_Articulo(this->pk_proveedor,ui->l_codigoop->text(),nuevo_pk_prov);
            }
        }

        obj.mf_set_habilitado(C_HABILITADO);


            //Actualizamos los nuevos datos
        if(obj.mf_update())
        {
            QMessageBox::information(this,"Registro correcto",C_CORRECTO_REGISTRO_ARTICULO)        ;
            close();

        }
        else
        {
            QMessageBox::information(this,"Error en el registro",C_ERROR_REGISTRO_ARTICULO)        ;
        }
    }

}

void ui_edit_articulo::on_btn_cancelar_clicked()
{
    close();
}

void ui_edit_articulo::on_btn_add_marca_clicked()
{
    ui_new_marca * form_new_marca = new ui_new_marca();
    form_new_marca->setAttribute(Qt::WA_DeleteOnClose);
    connect(form_new_marca,SIGNAL(closing()),this,SLOT(update_comboBox_Marca()));
     connect(form_new_marca,SIGNAL(closing()),this,SLOT(select_last_inserted_Marca()));
    form_new_marca->show();

}

void ui_edit_articulo::on_btn_add_medida_clicked()
{
    ui_new_medida * form_new_medida = new ui_new_medida();
    form_new_medida->setAttribute(Qt::WA_DeleteOnClose);
    connect(form_new_medida,SIGNAL(closing()),this,SLOT(update_comboBox_Medida()));
     connect(form_new_medida,SIGNAL(closing()),this,SLOT(select_last_inserted_Medida()));
    form_new_medida->show();
}

void ui_edit_articulo::on_btn_add_proveedor_clicked()
{
    ui_new_proveedor * form_new_proveedor = new ui_new_proveedor();
    form_new_proveedor->setAttribute(Qt::WA_DeleteOnClose);
    connect(form_new_proveedor,SIGNAL(closing()),this,SLOT(update_comboBox_Proveedor()));
     connect(form_new_proveedor,SIGNAL(closing()),this,SLOT(select_last_inserted_Proveedor()));
    form_new_proveedor->show();

}
void ui_edit_articulo::update_comboBox_Marca()
{

    vector<_QSTR> marca = SYSTEM->getDescripcion("e_marca");

    SYSTEM->loadComboBoxFromVector(ui->cb_marca,marca,false);

}

void ui_edit_articulo::update_comboBox_Medida()
{
    vector<_QSTR> medida = SYSTEM->getDescripcion("e_medida");
    SYSTEM->loadComboBoxFromVector(ui->cb_medida,medida,false);


}

void ui_edit_articulo::update_comboBox_Proveedor()
{
     //QStringList proveedor = SYSTEM->getListOfValuesNotSorted("e_proveedor","nombre_vendedor");
    vector<_QSTR> proveedor = SYSTEM->getRazonSocial_Proveedores();

    SYSTEM->loadComboBoxFromVector(ui->cb_proveedor,proveedor,false);
}

void ui_edit_articulo::select_last_inserted_Marca()
{
     ui->cb_marca->setCurrentIndex(ui->cb_marca->count()-1);
}

void ui_edit_articulo::select_last_inserted_Medida()
{
     ui->cb_medida->setCurrentIndex(ui->cb_medida->count()-1);
}

void ui_edit_articulo::select_last_inserted_Proveedor()
{
     ui->cb_proveedor->setCurrentIndex(ui->cb_proveedor->count()-1);
}




