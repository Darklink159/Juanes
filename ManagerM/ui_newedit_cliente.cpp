#include "ui_newedit_cliente.h"
#include "ui_ui_newedit_cliente.h"

ui_newedit_cliente::ui_newedit_cliente(bool esNuevoC, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_newedit_cliente)
{
    this->esNuevoC=esNuevoC;
    ui->setupUi(this);
    llenarComboBox();
    QRegExp vRUC("[0-9]{11}");
    QRegExp vTlfnoCelular("[+]{0,1}[0-9]{9,11}");
    QRegExp vTlfnoFijo("[0-9]{9,9}");
    QRegExp vEmail("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}\\b");

    QValidator *validarCelular=new QRegExpValidator(vTlfnoCelular,this);
    QValidator *validarFijo=new QRegExpValidator(vTlfnoFijo,this);
    QValidator *validarEmail=new QRegExpValidator(vEmail,this);
    QValidator *validarRUC=new QRegExpValidator(vRUC,this);

    ui->lineEdit_ruc->setValidator(validarRUC);
    ui->lineEdit_telefonoCelular->setValidator(validarCelular);
    ui->lineEdit_telefonoFijo->setValidator(validarFijo);
    ui->lineEdit_email->setValidator(validarEmail);

}

void ui_newedit_cliente::llenarComboBox()
{
    //se llena tienda y tipo usuario
    ui->comboBox_region->clear();
    vector<_QSTR> regiones=SYSTEM->getAllRegiones();

    for(int i=0;i<(int)regiones.size();i++)
        ui->comboBox_region->addItem(QString(regiones[i]));
}

void ui_newedit_cliente::setObjectCliente(object_e_persona_juridica *cliente)
{
    this->cliente=cliente;
}

void ui_newedit_cliente::llenarCamposEdicion()
{
    ui->lineEdit_comentario->setText(cliente->mf_get_comentario());

    _QSTR codigoRegion=cliente->mf_get_fk_region();
    int indx=ui->comboBox_region->findText(SYSTEM->getRegion(codigoRegion));
    ui->comboBox_region->setCurrentIndex(indx);

    ui->lineEdit_direccion->setText(cliente->mf_get_direccion());
    ui->lineEdit_email->setText(cliente->mf_get_email());
    ui->lineEdit_fax->setText(cliente->mf_get_fax());
    ui->lineEdit_nombre->setText(cliente->mf_get_razon_social());
    ui->lineEdit_paginaWeb->setText(cliente->mf_get_pagina_web());
    ui->lineEdit_representante->setText(cliente->mf_get_representante());
    ui->lineEdit_ruc->setText(cliente->mf_get_pk_ruc());
    //ui->lineEdit_telefonoCelular->setText(cliente->mf_get_telefono_celular());
    ui->lineEdit_telefonoFijo->setText(cliente->mf_get_telefono_fijo());
    ui->lineEdit_ruc->setEnabled(false);
}

ui_newedit_cliente::~ui_newedit_cliente()
{
    delete ui;
}

void ui_newedit_cliente::on_pushButton_cancel_clicked()
{
    close();
}

void ui_newedit_cliente::on_pushButton_save_clicked()
{

    _QSTR ruc,nombre,direccion,region,nmroCelular,nmroFijo,fax,representante,email,pWeb,comentario,habilitado;

    //Ventana empleada para Nuevo Cliente

    //datos para la tabla e_cliente
    ruc=ui->lineEdit_ruc->text();
    nombre=ui->lineEdit_nombre->text();
    region=ui->comboBox_region->currentText();
    _QSTR regionCod=SYSTEM->getCodigoRegion(region);
    qDebug()<<"La region es "<<region<<endl;
    direccion=ui->lineEdit_direccion->text();
    nmroCelular=ui->lineEdit_telefonoCelular->text();
    nmroFijo=ui->lineEdit_telefonoFijo->text();
    fax=ui->lineEdit_fax->text();
    representante=ui->lineEdit_representante->text();
    email=ui->lineEdit_email->text();
    pWeb=ui->lineEdit_paginaWeb->text();
    comentario=ui->lineEdit_comentario->text();
    habilitado="1";
    bool boolRuc;
    boolRuc=ui->lineEdit_ruc->hasAcceptableInput();

    if(esNuevoC)
    {
        //entra si se esta añadiendo un trabajador
        object_e_persona_juridica *cliente_juridico=new object_e_persona_juridica(ruc,regionCod,nombre,direccion,nmroFijo,fax,representante,email,pWeb,comentario,habilitado);
        object_e_cliente *cliente=new object_e_cliente(ruc);
        if(!boolRuc||nombre==""||representante=="")
            QMessageBox::information(this,"Añadir cliente","Los siguientes campos son indispensables:\n1.RUC(11 digitos)\n2.Razón Social\n3.Región\n4.Representante!",QMessageBox::Ok);
        else
        {
            if(cliente_juridico->mf_add())
            {
                if(cliente->mf_add())
                {
                    QMessageBox::information(this,"Añadir cliente","Inserción correcta!",QMessageBox::Ok);
                    close();
                    //getColaborador()->actualizar();

                }
                else
                    QMessageBox::information(this,"Añadir cliente","Inserción inválida",QMessageBox::Ok);
            }
            else
            {
                QMessageBox::information(this,"Añadir cliente","Inserción inválida de los datos",QMessageBox::Ok);
            }

        }
    }
    else
    {

        //Ventana empleada para Editar datos de un Cliente
        //update cliente
        if(!boolRuc||nombre==""||representante=="")
            QMessageBox::information(this,"Editar colaborador","Los siguientes campos son indispensables:\n1.RUC\n2.Razón Social\n3.Región\n4.Representante!",QMessageBox::Ok);
        else
        {
            cliente->mf_set_comentario(comentario);
            cliente->mf_set_fk_region(regionCod);
            cliente->mf_set_direccion(direccion);
            cliente->mf_set_email(email);
            cliente->mf_set_fax(fax);
            cliente->mf_set_pagina_web(pWeb);
            cliente->mf_set_razon_social(nombre);
            cliente->mf_set_representante(representante);
            //cliente->mf_set_telefono_celular(nmroCelular);
            cliente->mf_set_telefono_fijo(nmroFijo);

            //update usuario
            if(cliente->mf_update())
            {
                QMessageBox::information(this,"Editar colaborador","Edición correcta!",QMessageBox::Ok);
                close();
                //getColaborador()->actualizar();
            }
            else
            {
                QMessageBox::information(this,"Editar colaborador","Hubo un error en la edicion!",QMessageBox::Ok);
                close();
            }
        }


    }

}
