#include <QtGui/QApplication>
#include "ui_main.h"

#include "share_include.h"



int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    // Set LOG_FILE name
    SYS_LOG_FILE(C_LOG_FILE_NAME);
    // Set LOG_FILE_ERROR name
    SYS_LOGX_FILE(C_LOG_FILE_ERROR_NAME);
    // Set app name
    SYS_APP(C_APP_NAME);
    // Set app state
    SYS_STATE(STATE_STAR_APP);
    // Escribir en files LOG_FILE, LOG_FILE_ERROR
    SYS_WRITE;

    // Cargar config database
    DATABASE_CONFIG(C_DB_FILE_CONFIG_NAME);

    // Intentando conectar
    if(DATABASE_CONNECT)
    {
        // Ok

        // Buscando tienda
        if(SYSTEM->getTienda() == "")
        {
            // Crear tienda
            ui_opciones_tienda *tienda_form = new ui_opciones_tienda;
            tienda_form->mf_set_parent(0);
            tienda_form->show();

            SYSTEM->init_e_sistema();


        }else{
            // Buscando administrador
            if(SYSTEM->getAdministrador() == "")
            {
                // Crear administrador

                // Set tipo de usuario
                SYSTEM->init_e_tipo_usuario();

                // Show newedit_colaborador form
                ui_newedit_colaborador *colaborador_form = new ui_newedit_colaborador(1);
                colaborador_form->mf_set_parent(0);
                colaborador_form->show();
            }else{
                // Show login form
                ui_login *login_form = new ui_login;
                login_form->show();
            }
        }

    }else{
      // No connected
        // Show opciones_base_datos_form. Create your config database in the first time.
        ui_opciones_base_datos *db_form = new ui_opciones_base_datos;
        db_form->mf_set_parent(0);
        db_form->show();
    }

   // APP_SHOW_MAXIMIZED;

    /*ui_main app_managerm;
    app_managerm.showMaximized();
    */

    return a.exec();
}
