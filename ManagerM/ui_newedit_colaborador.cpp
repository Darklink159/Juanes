#include "ui_newedit_colaborador.h"
#include "ui_ui_newedit_colaborador.h"

ui_newedit_colaborador::ui_newedit_colaborador(bool esNuevoC, QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ui_newedit_colaborador)
{
    ui->setupUi(this);
    this->esNuevoC=esNuevoC;
    ui->dateEdit_nacimiento->setCalendarPopup(true);
    llenarComboBox();
    QRegExp vDNI("[0-9]{9}");
    QRegExp vTlfnoCelular("[+]{0,1}[0-9]{9,11}");
    QRegExp vTlfnoFijo("[0-9]{9,9}");
    QRegExp vEmail("\\b[A-Za-z0-9._%+-]+@[A-Za-z0-9.-]+\\.[A-Za-z]{2,4}\\b");
    QValidator *validarCelular=new QRegExpValidator(vTlfnoCelular,this);
    QValidator *validarFijo=new QRegExpValidator(vTlfnoFijo,this);
    QValidator *validarEmail=new QRegExpValidator(vEmail,this);
    QValidator *validarDNI=new QRegExpValidator(vDNI,this);
    ui->lineEdit_dni->setValidator(validarDNI);
    ui->lineEdit_celular->setValidator(validarCelular);
    ui->lineEdit_telefonoFijo->setValidator(validarFijo);
    ui->lineEdit_email->setValidator(validarEmail);

    //control de lineEdits
    ui->label_DNIesCorrecto->hide();
    ui->label_nombreEsCorrecto->hide();
    ui->label_apPatEsCorrecto->hide();
    ui->label_apMatEsCorrecto->hide();
}

void ui_newedit_colaborador::setObjectColaborador(object_e_colaborador *colaborador)
{
    colaboradorAsociado=colaborador;
}

void ui_newedit_colaborador::llenarCamposEdicion()
{
    ui->lineEdit_nombres->setText(colaboradorAsociado->mf_get_nombres());
    ui->lineEdit_apPaterno->setText(colaboradorAsociado->mf_get_apellido_paterno());
    ui->lineEdit_apMaterno->setText(colaboradorAsociado->mf_get_apellido_materno());
    ui->lineEdit_dni->setText(colaboradorAsociado->mf_get_pk_dni());
    ui->lineEdit_direccion->setText(colaboradorAsociado->mf_get_direccion());
    ui->lineEdit_celular->setText(colaboradorAsociado->mf_get_telefono_celular());
    ui->lineEdit_telefonoFijo->setText(colaboradorAsociado->mf_get_telefono_fijo());
    ui->lineEdit_email->setText(colaboradorAsociado->mf_get_email());

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



    object_e_tienda *tienda=new object_e_tienda;
    tienda->mf_load(colaboradorAsociado->mf_get_fk_tienda());

    indx=ui->comboBox_tienda->findText(tienda->mf_get_nombre());
    qDebug()<<tienda->mf_get_nombre()<<"    "<<indx<<endl;
    ui->comboBox_tienda->setCurrentIndex(indx);

    object_e_usuario *usuario=new object_e_usuario();
    usuario->mf_load(colaboradorAsociado->mf_get_pk_dni());
    ui->lineEdit_nick->setText(usuario->mf_get_nick());

    //ui->lineEdit_pass->setText(usuario->mf_get_clave());

    _QSTR habil=((usuario->mf_get_habilitado()=="1")?"Si":"No");
    indx=ui->comboBox_habilitado->findText(habil);
    ui->comboBox_habilitado->setCurrentIndex(indx);

    ui->textEdit_comentario->setText(colaboradorAsociado->mf_get_comentario());

    object_e_tipo_usuario *tipo_usuario=new object_e_tipo_usuario;
    tipo_usuario->mf_load(usuario->mf_get_fk_tipo_usuario());
    indx=ui->comboBox_tipoUsuario->findText(tipo_usuario->mf_get_descripcion());
    qDebug()<<tipo_usuario->mf_get_descripcion()<<"    "<<indx<<endl;
    ui->comboBox_tipoUsuario->setCurrentIndex(indx);


    //CAMPOS QUE NO SE PUEDEN EDITAR
    ui->lineEdit_nick->setEnabled(false);
    ui->lineEdit_pass->hide();
    ui->label_pass->hide();
    ui->lineEdit_dni->setEnabled(false);
    ui->pushButton_generateAccess->hide();
}

void ui_newedit_colaborador::llenarComboBox()
{
    //se llena tienda y tipo usuario
    ui->comboBox_tienda->clear();
    ui->comboBox_tipoUsuario->clear();
    vector<_QSTR> tiposUsuario=SYSTEM->getAllTiposUsuarios();
    vector<_QSTR> tiendas=SYSTEM->getAllTiendas();

    for(int i=0;i<(int)tiposUsuario.size();i++)
        ui->comboBox_tipoUsuario->addItem(QString(tiposUsuario[i]));

    for(int i=0;i<(int)tiendas.size();i++)
        ui->comboBox_tienda->addItem(QString(tiendas[i]));
}


void ui_newedit_colaborador::on_pushButton_generateAccess_clicked()
{
    _QSTR dni=ui->lineEdit_dni->text();
        if(ui->label_DNIesCorrecto->isHidden()&&dni!="")
        {
            ui->lineEdit_nick->setText(dni);
            ui->lineEdit_pass->setText(dni);

        }
        else
            QMessageBox::information(this,"Generar información","Arregle el campo DNI, información\n es necesaria para la generación!",QMessageBox::Ok);
}

void ui_newedit_colaborador::on_pushButton_save_clicked()
{
    _QSTR tienda,nombres,apPat,apMat,dni,direccion,fNac,estCivil,genero,nmroCelular,nmroFijo,email,comentario,colaboradorHabilitado;
    _QSTR tipo,nick,pass,habilitado;

    //Ventana empleada para Nuevo Colaborador

    //datos para la tabla e_colaborador
    nombres=ui->lineEdit_nombres->text();
    apPat=ui->lineEdit_apPaterno->text();
    apMat=ui->lineEdit_apMaterno->text();
    dni=ui->lineEdit_dni->text();
    direccion=ui->lineEdit_direccion->text();
    nmroCelular=ui->lineEdit_celular->text();
    nmroFijo=ui->lineEdit_telefonoFijo->text();
    email=ui->lineEdit_email->text();
    tienda=ui->comboBox_tienda->currentText();
    QString codigoTienda=SYSTEM->getTienda(tienda);
    //Solo es necesario la primera letra de estCivil y de genero
    estCivil=ui->comboBox_estCivil->currentText()[0];
    genero=ui->comboBox_genero->currentText()[0];
    fNac=ui->dateEdit_nacimiento->date().toString("yyyy-MM-dd");
    comentario=ui->textEdit_comentario->toPlainText();
    colaboradorHabilitado="1";
    //datos para la tabla e_usuario
    tipo=ui->comboBox_tipoUsuario->currentText();
    QString codigoTipoUsuario=SYSTEM->getTipoUsuario(tipo);
    nick=ui->lineEdit_nick->text();
    pass=ui->lineEdit_pass->text();
    habilitado=ui->comboBox_habilitado->currentText();
    habilitado=habilitado=="Si"?"1":"0";


    bool boolDni;
    boolDni=ui->label_DNIesCorrecto->isHidden();

    if(esNuevoC)
    {
        //entra si se esta añadiendo un trabajador
        object_e_colaborador *colaborador=new object_e_colaborador(dni,codigoTienda,nombres,apPat,apMat,direccion,fNac,genero,estCivil,nmroCelular,nmroFijo,email,comentario,colaboradorHabilitado);
        object_e_usuario *usuario=new object_e_usuario(dni,codigoTipoUsuario,nick,pass,habilitado);

        if(!boolDni||dni==""||nombres==""||apPat==""||apMat=="")
            QMessageBox::information(this,"Añadir colaborador","Los siguientes campos son indispensables:\n1.DNI\n2.Nombres\n3.Apellido paterno\n4.Apellido materno!",QMessageBox::Ok);
        else
        {
            if(nick==""||pass=="")
                QMessageBox::information(this,"Añadir colaborador","Debe generar el password y nick!",QMessageBox::Ok);
            else
            {
                if(colaborador->mf_add())
                {
                    if(usuario->mf_add())
                    {
                        QMessageBox::information(this,"Añadir colaborador","Inserción correcta!",QMessageBox::Ok);
                        close();
                        //getColaborador()->actualizar();

                    }
                    else
                        QMessageBox::information(this,"Añadir colaborador","Inserción inválida!, error en informacion laboral",QMessageBox::Ok);
                }
                else
                {
                    QMessageBox::information(this,"Añadir colaborador","Inserción inválida, error en llenado de datos personales!",QMessageBox::Ok);
                }
            }
        }
    }
    else
   {
       //Ventana empleada para Editar datos de un Colaborador
       //update colaborador
       if(!boolDni||dni==""||nombres==""||apPat==""||apMat=="")
           QMessageBox::information(this,"Editar colaborador","Los siguientes campos son indispensables:\n1.DNI\n2.Nombres\n3.Apellido paterno\n4.Apellido materno!",QMessageBox::Ok);
       else
       {
           object_e_colaborador *colaborador=new object_e_colaborador;
           colaborador->mf_load(dni);
           colaborador->mf_set_apellido_materno(apMat);
           colaborador->mf_set_apellido_paterno(apPat);
           colaborador->mf_set_estado_civil(estCivil);
           colaborador->mf_set_fecha_nacimiento(fNac);
           colaborador->mf_set_nombres(nombres);
           colaborador->mf_set_sexo(genero);
           colaborador->mf_set_fk_tienda(codigoTienda);
           colaborador->mf_set_comentario(comentario);
           colaborador->mf_set_direccion(direccion);
           colaborador->mf_set_email(email);
           colaborador->mf_set_telefono_celular(nmroCelular);
           colaborador->mf_set_telefono_fijo(nmroFijo);
           colaborador->mf_set_habilitado(colaboradorHabilitado);

           //update usuario
           object_e_usuario *usuario=new object_e_usuario;
           usuario->mf_load(dni);
           usuario->mf_set_fk_tipo_usuario(codigoTipoUsuario);
           usuario->mf_set_habilitado(habilitado);
           if(usuario->mf_update()&&colaborador->mf_update())
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

int ui_newedit_colaborador::mf_get_parent()
{
    return parent;
}

void ui_newedit_colaborador::mf_set_parent(int p)
{
    parent = p;
}


void ui_newedit_colaborador::on_pushButton_cancel_clicked()
{
     close();
}

void ui_newedit_colaborador::on_lineEdit_dni_lostFocus()
{
    ui->label_DNIesCorrecto->setStyleSheet("QLabel {color:red;}");
        _QSTR dni=ui->lineEdit_dni->text();
        if(dni.size()!=8)
            ui->label_DNIesCorrecto->show();
        else
            ui->label_DNIesCorrecto->hide();
}

void ui_newedit_colaborador::on_lineEdit_nombres_lostFocus()
{
    ui->label_nombreEsCorrecto->setStyleSheet("QLabel {color:red;}");
        _QSTR nombre=ui->lineEdit_nombres->text();
        if(nombre=="")
            ui->label_nombreEsCorrecto->show();
        else
            ui->label_nombreEsCorrecto->hide();
}

void ui_newedit_colaborador::on_lineEdit_apPaterno_lostFocus()
{
    ui->label_apPatEsCorrecto->setStyleSheet("QLabel {color:red;}");
        _QSTR apPat=ui->lineEdit_apPaterno->text();
        if(apPat=="")
            ui->label_apPatEsCorrecto->show();
        else
            ui->label_apPatEsCorrecto->hide();
}

void ui_newedit_colaborador::on_lineEdit_apMaterno_lostFocus()
{
    ui->label_apMatEsCorrecto->setStyleSheet("QLabel {color:red;}");
        _QSTR apPat=ui->lineEdit_apMaterno->text();
        if(apPat=="")
            ui->label_apMatEsCorrecto->show();
        else
            ui->label_apMatEsCorrecto->hide();
}


ui_newedit_colaborador::~ui_newedit_colaborador()
{
    delete ui;
}
