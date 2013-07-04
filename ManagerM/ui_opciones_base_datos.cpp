#include "ui_opciones_base_datos.h"
#include "ui_ui_opciones_base_datos.h"

ui_opciones_base_datos::ui_opciones_base_datos(QWidget *parent) :
    QTabWidget(parent),
    ui(new Ui::ui_opciones_base_datos)
{
    ui->setupUi(this);

    mf_update_data();
}

ui_opciones_base_datos::~ui_opciones_base_datos()
{
    delete ui;
}

void ui_opciones_base_datos::mf_update_data()
{
    ui->lineEdit_host->setText(DATABASE->mf_get_host());
    ui->lineEdit_puerto->setText(DATABASE->mf_get_port());
    ui->lineEdit_usuario->setText(DATABASE->mf_get_user());
    ui->lineEdit_clave->setText(DATABASE->mf_get_pass());
    ui->lineEdit_nombre_db->setText(DATABASE->mf_get_name());
}

void ui_opciones_base_datos::on_pushButton_guardar_clicked()
{

    _STR host = ui->lineEdit_host->text().toStdString();
    _STR db_nombre = ui->lineEdit_nombre_db->text().toStdString();
    _STR puerto = ui->lineEdit_puerto->text().toStdString();
    _STR usuario = ui->lineEdit_usuario->text().toStdString();
    _STR clave = ui->lineEdit_clave->text().toStdString();

    ofstream db_cfg;

    db_cfg.open(C_DB_FILE_DEFAULT_CONFIG_NAME);

    if(mf_get_parent() == 0)
    {
        this->close();
    }

    db_cfg<<host<<" "<<db_nombre<<" "<<usuario<<" "<<clave<<" "<<puerto;



}

void ui_opciones_base_datos::mf_set_parent(int p)
{
    parent = p;
}

int ui_opciones_base_datos::mf_get_parent()
{
    return parent;
}


