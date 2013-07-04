#include "ui_edit_personalinformation.h"
#include "ui_ui_edit_personalinformation.h"

ui_edit_personalInformation::ui_edit_personalInformation(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_edit_personalInformation)
{ 
    ui->setupUi(this);
    ui->dateEdit_nacimiento->setCalendarPopup(true);
    dniUser=SYSTEM->getDNIColaborador(QString::fromStdString(USER_GET_NICK_NAME));
    llenarCamposEdicion();
    camposHabiles();

}

void ui_edit_personalInformation::llenarCamposEdicion()
{
    object_e_colaborador *colaboradorAsociado=new object_e_colaborador();
    colaboradorAsociado->mf_load(dniUser);
    ui->lineEdit_nombres->setText(colaboradorAsociado->mf_get_nombres());
    ui->lineEdit_apPaterno->setText(colaboradorAsociado->mf_get_apellido_paterno());
    ui->lineEdit_apMaterno->setText(colaboradorAsociado->mf_get_apellido_materno());
    ui->lineEdit_dni->setText(colaboradorAsociado->mf_get_pk_dni());
    ui->lineEdit_direccion->setText(colaboradorAsociado->mf_get_direccion());
    ui->lineEdit_celular->setText(colaboradorAsociado->mf_get_telefono_celular());
    ui->lineEdit_telefonoFijo->setText(colaboradorAsociado->mf_get_telefono_fijo());

    _QSTR fecha=colaboradorAsociado->mf_get_fecha_nacimiento();
    int anho=fecha.mid(0,4).toInt(),mes=fecha.mid(5,2).toInt(),dia=fecha.mid(8,2).toInt();
    ui->dateEdit_nacimiento->setDate(QDate(anho,mes,dia));

    int indx=0;
    //solo busca la primera letra
    _QSTR sexo=colaboradorAsociado->mf_get_sexo(),estCivil=colaboradorAsociado->mf_get_estado_civil();
    if(sexo=="M")
    {
        indx=ui->comboBox_genero->findText("Masculino");
        ui->comboBox_genero->setCurrentIndex(indx);
    }else if(sexo=="F")
    {
        indx=ui->comboBox_genero->findText("Femenino");
        ui->comboBox_genero->setCurrentIndex(indx);
    }

    //solo busca la primera letra
    if(estCivil=="S")
    {
        indx=ui->comboBox_estCivil->findText("Soltero");
        ui->comboBox_estCivil->setCurrentIndex(indx);
    }else if (estCivil=="C")
    {
        indx=ui->comboBox_estCivil->findText("Casado");
        ui->comboBox_estCivil->setCurrentIndex(indx);
    }else if (estCivil=="V")
    {
        indx=ui->comboBox_estCivil->findText("Viudo");
        ui->comboBox_estCivil->setCurrentIndex(indx);
    }else if (estCivil=="D")
    {
        indx=ui->comboBox_estCivil->findText("Divorciado");
        ui->comboBox_estCivil->setCurrentIndex(indx);
    }

    object_e_usuario *usuario=new object_e_usuario();
    usuario->mf_load(dniUser);
    ui->lineEdit_nick1->setText(usuario->mf_get_nick());
    ui->lineEdit_pass1->setText(usuario->mf_get_clave());


}

void ui_edit_personalInformation::camposHabiles()
{
    ui->groupBox_2->setEnabled(false);
    ui->lineEdit_nick1->setEnabled(false);
    ui->lineEdit_pass1->setEnabled(false);
}

ui_edit_personalInformation::~ui_edit_personalInformation()
{
    delete ui;
}

void ui_edit_personalInformation::on_pushButton_cancel_clicked()
{
    close();
}

void ui_edit_personalInformation::on_pushButton_save_clicked()
{
    SYSTEM->messageQuestion(C_CAMBIAR_TITLE,C_CAMBIAR_TEXT);
    object_e_usuario *usuario=new object_e_usuario();
    usuario->mf_load(dniUser);
    _QSTR newPass;
    newPass=ui->lineEdit_pass1->text();
    if(newPass!="")
    {
        if(newPass.length()<6)
            SYSTEM->messageInformation(C_WRONG_PASSWORD,C_LENGTH_PASSWORD);
        else
        {
            usuario->mf_set_clave(newPass);
            if(usuario->mf_update())
            {
                SYSTEM->messageInformation(C_CAMBIO_CORRECTO,C_CAMBIO_CORRECTO_TEXT);
                APP_STATUS_BAR(C_CAMBIO_CORRECTO);
                close();
            }
            else
                SYSTEM->messageInformation(C_CAMBIO_INCORRECTO,C_CAMBIO_INCORRECTO);
        }
    }
    else SYSTEM->messageInformation(C_CAMPOS_VACIOS,C_CAMPOS_VACIOS_TEXT);
}

void ui_edit_personalInformation::on_pushButton_change_clicked()
{
   ui->lineEdit_pass1->setEnabled(true);
}
