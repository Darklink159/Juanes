#include "ui_new_compra_flete.h"
#include "ui_ui_new_compra_flete.h"

#include "share_include.h"
#include <QMessageBox>

ui_new_compra_flete::ui_new_compra_flete(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_compra_flete)
{
    ui->setupUi(this);

    QRegExp regExp_serie("[0-9]{3,3}");
    QRegExp regExp_numero("[0-9]{6,6}");

    QRegExp regExp_decimal("[0-9]+.[0-9]{2,2}");


    //ui->lineEdit_codigo->setReadOnly(true);

    ui->dateEdit_emision->setDate(QDate::currentDate());
    ui->dateEdit_sistema->setDate(QDate::currentDate());

    ui->lineEdit_serie->setValidator(new QRegExpValidator(regExp_serie));
    ui->lineEdit_numero->setValidator(new QRegExpValidator(regExp_numero));

    //ui->lineEdit_numeroPercepcion->setValidator(new QRegExpValidator(regExp_decimal));

    ui->lineEdit_monto->setValidator(new QRegExpValidator(regExp_decimal));

    ui->lineEdit_subtotal->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_igv->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_total->setValidator(new QRegExpValidator(regExp_decimal));
}

ui_new_compra_flete::~ui_new_compra_flete()
{
    delete ui;
}

void ui_new_compra_flete::on_pushButton_buscarTransportista_clicked()
{

}
void ui_new_compra_flete::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }


}

void ui_new_compra_flete::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}

void ui_new_compra_flete::on_pushButton_cancelar_clicked()
{
    this->close();
}


