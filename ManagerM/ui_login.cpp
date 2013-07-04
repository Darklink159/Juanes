#include "ui_login.h"
#include "ui_ui_login.h"

#include "share_include.h"

ui_login::ui_login(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_login)
{
    ui->setupUi(this);
    //------------------------
    md_p_ui_parent = 0;
    //------------------------


}

ui_login::~ui_login()
{
    delete ui;
    //-------------------
    delete md_p_ui_parent;
    //-------------------
}

//-------------------------------------------------------------
void ui_login::mf_set_ui_parent(ui_main *ui_parent)
{
    md_p_ui_parent = ui_parent;
}

ui_main* ui_login::mf_get_ui_parent()
{
    return md_p_ui_parent;
}

//-------------------------------------------------------------

void ui_login::on_pushButton_cancelar_clicked()
{
    close();
}

void ui_login::on_pushButton_aceptar_clicked()
{

    _QSTR usuario = ui->lineEdit_usuario->text();
    _QSTR text = ui->lineEdit_contrasenia->text();
    if(SYSTEM->validarUsuario(usuario,text))//revisar con la base de datos si el usuario es valido
    {
        //dar permmisos


        close();        

        // Show maximized app form
        APP_SHOW_MAXIMIZED;
        APP_MANAGERM->setAttribute(Qt::WA_DeleteOnClose);
        // Cargar datos de colaborador
        object_e_colaborador* colaboradorActual=new object_e_colaborador;
        _QSTR dniColaborador=SYSTEM->getDNIColaborador(usuario,text);
        USER_SET_DNI(dniColaborador.toStdString());
        colaboradorActual->mf_load(dniColaborador);
        USER_SET_NAME(colaboradorActual->mf_get_nombres().toStdString());
        qDebug()<<"USUARIO: "<<QString::fromStdString(USER_GET_NAME);


        ui_module_home* form_home = new ui_module_home;
        // Set module_home en la central widget de la ventana principal
        APP_MANAGERM->setCentralWidget(form_home);
        // Otros
        USER_SET_NICK_NAME(usuario.toStdString());
        _QSTR message = "Bienvenido " + QString::fromStdString(USER_GET_NAME) + ".";
        APP_STATUS_BAR(message);


    }else{
        //mensaje de usuario invalido
        QMessageBox::information(this,"Error","Usuario no valido");
    }
}

void ui_login::on_lineEdit_contrasenia_returnPressed()
{
    on_pushButton_aceptar_clicked();
}
