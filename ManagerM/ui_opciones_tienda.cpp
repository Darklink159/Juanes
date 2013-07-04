#include "ui_opciones_tienda.h"
#include "ui_ui_opciones_tienda.h"

ui_opciones_tienda::ui_opciones_tienda(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_opciones_tienda)
{
    ui->setupUi(this);

    mf_update_data();

}

ui_opciones_tienda::~ui_opciones_tienda()
{
    delete ui;
}

void ui_opciones_tienda::on_pushButton_guardar_clicked()
{
    _QSTR ruc;
    object_e_tienda *tienda = new object_e_tienda;

    ruc = SYSTEM->getTienda();

    if(ruc=="")
    {
        tienda->mf_set_pk_ruc(ui->lineEdit_ruc->text());
        tienda->mf_set_comentario(ui->textEdit_comentario->toPlainText());
        tienda->mf_set_direccion(ui->lineEdit_direccion->text());
        tienda->mf_set_email(ui->lineEdit_email->text());
        tienda->mf_set_fax(ui->lineEdit_fax->text());
        tienda->mf_set_nombre(ui->lineEdit_nombre->text());
        tienda->mf_set_pagina_web(ui->lineEdit_pagina_web->text());
        tienda->mf_set_telefono_fijo(ui->lineEdit_telefono->text());

        tienda->mf_add();
    }else{
        tienda->mf_load(ruc);

        tienda->mf_set_comentario(ui->textEdit_comentario->toPlainText());
        tienda->mf_set_direccion(ui->lineEdit_direccion->text());
        tienda->mf_set_email(ui->lineEdit_email->text());
        tienda->mf_set_fax(ui->lineEdit_fax->text());
        tienda->mf_set_nombre(ui->lineEdit_nombre->text());
        tienda->mf_set_pagina_web(ui->lineEdit_pagina_web->text());
        tienda->mf_set_telefono_fijo(ui->lineEdit_telefono->text());

        tienda->mf_update();
    }


    if(mf_get_parent() == 0)
    {
        this->close();
    }



}

void ui_opciones_tienda::mf_update_data()
{
    _QSTR ruc;
    object_e_tienda *tienda = new object_e_tienda;

    ruc = SYSTEM->getTienda();

    if(ruc=="")
    {
    }else{
        tienda->mf_load(ruc);

        ui->lineEdit_ruc->setText(ruc);
        ui->lineEdit_direccion->setText(tienda->mf_get_direccion());
        ui->lineEdit_email->setText(tienda->mf_get_email());
        ui->lineEdit_fax->setText(tienda->mf_get_fax());
        ui->lineEdit_nombre->setText(tienda->mf_get_nombre());
        ui->lineEdit_pagina_web->setText(tienda->mf_get_pagina_web());
        ui->lineEdit_telefono->setText(tienda->mf_get_telefono_fijo());
        ui->textEdit_comentario->setText(tienda->mf_get_comentario());
    }
}

int ui_opciones_tienda::mf_get_parent()
{
    return parent;
}

void ui_opciones_tienda::mf_set_parent(int p)
{
    parent = p;
}
