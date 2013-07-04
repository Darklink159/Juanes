#include "ui_module_home.h"
#include "ui_ui_module_home.h"

ui_module_home::ui_module_home(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_home)
{
    ui->setupUi(this);
    ui->label_usuario->setText(QString::fromStdString(USER_GET_NAME));

}

ui_module_home::~ui_module_home()
{
    delete ui;
}

void ui_module_home::on_pushButton_ventas_clicked()
{
    ui_module_ventas* form_ventas = new ui_module_ventas;
    APP_MANAGERM->setCentralWidget(form_ventas);
    APP_TOOL_BAR->setMaximumHeight(C_TOOLBAR_SIZE);
}

void ui_module_home::on_pushButton_sistema_clicked()
{
    ui_opciones* form_opciones = new ui_opciones;
    form_opciones->show();
}

void ui_module_home::on_pushButton_articulo_clicked()
{
    ui_module_articulos* form_articulos = new ui_module_articulos();
    APP_MANAGERM->setCentralWidget(form_articulos);

    //Revisar

     APP_TOOL_BAR->setMaximumHeight(C_TOOLBAR_SIZE);
}

void ui_module_home::on_pushButton_colaboradores_clicked()
{
    ui_module_colaboradores* form_colaboradores = new ui_module_colaboradores;
    APP_MANAGERM->setCentralWidget(form_colaboradores);
    APP_TOOL_BAR->setMaximumHeight(C_TOOLBAR_SIZE);
}

void ui_module_home::on_pushButton_compras_clicked()
{
    ui_module_compras* form_compras = new ui_module_compras();
    APP_MANAGERM->setCentralWidget(form_compras);
    APP_TOOL_BAR->setMaximumHeight(C_TOOLBAR_SIZE);
}

void ui_module_home::on_pushButton_usuario_clicked()
{
    ui_edit_personalInformation *dialog_Informacion=new ui_edit_personalInformation;
    dialog_Informacion->show();
}
