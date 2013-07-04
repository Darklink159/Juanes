#include "ui_main.h"
#include "ui_ui_main.h"

#include "share_include.h"

ui_main::ui_main(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::ui_main)
{
    ui->setupUi(this);

    // Ocultando la toolbar , pero haciando 0 su altura
    APP_TOOL_BAR->setMaximumHeight(0);
    // Añadir la toolbar
    ui->toolBar->addWidget(APP_TOOL_BAR);

   // ui->toolBar->setMovable(false);
}

ui_main::~ui_main()
{
    delete ui;
}

void ui_main::on_actionAcerca_de_ManagerM_triggered()
{
    QMessageBox::about(this,C_ABOUT_MANAGERM_TITLE,C_ABOUT_MANAGERM_DESCRIPCION);
}


void ui_main::on_actionPantalla_Completa_triggered()
{
    if(isFullScreen())
    {
        showMaximized();
    }else{
        showFullScreen();
    }

    //wlapp
}

void ui_main::on_actionSalir_triggered()
{
    close();
}


void ui_main::on_actionCerrar_Sesion_triggered()
{
    //cerrar sesion

    close();

    ui_login *form_login = new ui_login;
    form_login->show();

}

void ui_main::keyReleaseEvent(QKeyEvent *event)
{
    if(event->key() == Qt::Key_Alt)
    {
        ui->menuBar->setHidden(!(ui->menuBar->isHidden()));

    }
}

void ui_main::closeEvent(QCloseEvent *ev)
{
    //Borramos Singletons
    delete SINGLETON(FreeQuery);
    delete SINGLETON(session);
    delete SINGLETON(database_connection);
    delete SINGLETON(system_log);
    delete SINGLETON(Sistema);
    delete SINGLETON(ui_tool_bar);
    delete SINGLETON(ui_main);

    qDebug()<<"Borrando";
}

void ui_main::on_actionHome_triggered()
{
    ui_module_home *form_home = new ui_module_home;
    setCentralWidget(form_home);
   // form_home->showMaximized();

}

void ui_main::on_actionVentas_triggered()
{
    ui_module_ventas *form_ventas = new ui_module_ventas;
    setCentralWidget(form_ventas);
}

void ui_main::on_actionArticulos_triggered()
{
    ui_module_articulos * form_articulos = new ui_module_articulos();
    setCentralWidget(form_articulos);
}
