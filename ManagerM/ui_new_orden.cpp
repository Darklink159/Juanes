#include "ui_new_orden.h"
#include "ui_ui_new_orden.h"



ui_new_orden::ui_new_orden(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_new_orden)
{
    ui->setupUi(this);

    object_e_orden_compra_funciones obj;
    int max_pk_orden = obj.mf_pk_orden_compra_max();

    QString str_max_pk_orden;
    str_max_pk_orden.setNum(max_pk_orden);

    ui->lineEdit_codigo->setText(str_max_pk_orden);

    QRegExp regExp_serie("[0-9]{3,3}");
    QRegExp regExp_numero("[0-9]{6,6}");

    QRegExp regExp_decimal("[0-9]+.[0-9]{2,2}");


    //ui->lineEdit_codigo->setReadOnly(true);

    ui->dateEdit_emision->setDate(QDate::currentDate());
    ui->dateEdit_sistema->setDate(QDate::currentDate());

    ui->lineEdit_serie->setValidator(new QRegExpValidator(regExp_serie));
    ui->lineEdit_numero->setValidator(new QRegExpValidator(regExp_numero));

    //ui->lineEdit_numeroPercepcion->setValidator(new QRegExpValidator(regExp_decimal));

    ui->lineEdit_subtotal->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_igv->setValidator(new QRegExpValidator(regExp_decimal));
    ui->lineEdit_total->setValidator(new QRegExpValidator(regExp_decimal));
}

ui_new_orden::~ui_new_orden()
{
    delete ui;
}

void ui_new_orden::setType(int mode)
{
    if(mode == COMPRAS_NEW)
    {
        ui->pushButton_registrar->setText("Registrar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_registrar_clicked()));
        return;
    }
    if(mode == COMPRAS_EDIT)
    {
        ui->pushButton_registrar->setText("Editar");
        disconnect(ui->pushButton_registrar, SIGNAL(clicked()), 0, 0);
        connect(ui->pushButton_registrar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked()));
        return;
    }
    if(mode == COMPRAS_DELETE)
    {
        return;
    }
}

void ui_new_orden::on_pushButton_buscarProveedor_clicked()
{

}

void ui_new_orden::on_pushButton_buscarTransportista_clicked()
{

}

void ui_new_orden::on_pushButton_ingresarArticulos_clicked()
{

}

// Son para mismo boton los siguientes 2 metodos slot
void ui_new_orden::on_pushButton_registrar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Esta seguro que desea registrar la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {

        //object_e_tipo_comprobante obj_tipo_comprobante;
        /*
        int pk_tipo_comprobante = obj_tipo_comprobante.f_pk_tipo_comprobante_max();
        _QSTR str_pk_tipo_comprobante;
        str_pk_tipo_comprobante.setNum(pk_tipo_comprobante+1);        

        obj_tipo_comprobante.mf_set_pk_tipo_comprobante(str_pk_tipo_comprobante);
        obj_tipo_comprobante.mf_set_descripcion(TABLE_NAME_E_ORDEN_COMPRA);
        */


        object_e_comprobante obj_comprobante;
        object_e_comprobante_funciones obj_comprobante_funciones;

        int pk_comprobante = obj_comprobante_funciones.mf_pk_comprobante_max();
        _QSTR str_pk_comprobante;
        str_pk_comprobante.setNum(pk_comprobante+1);

        obj_comprobante.mf_set_pk_comprobante(str_pk_comprobante);
        obj_comprobante.mf_set_pk_tienda("01234567891");

        _QSTR str_pk_tipo_comprobante;
        str_pk_tipo_comprobante.setNum(ORDEN_COMPRA);
        obj_comprobante.mf_set_tipo(str_pk_tipo_comprobante);
        //obj_comprobante.mf_set_emitido();
        //obj_comprobante.mf_set_habilitado();
        obj_comprobante.mf_set_fecha_emision(ui->dateEdit_emision->text());
        obj_comprobante.mf_set_fecha_sistema(ui->dateEdit_sistema->text());
        obj_comprobante.mf_set_serie(ui->lineEdit_serie->text());
        obj_comprobante.mf_set_numero(ui->lineEdit_numero->text());

        obj_comprobante.mf_add();


        object_e_orden_compra obj_orden_compra;
        object_e_orden_compra_funciones obj_orden_compra_funciones;

        int pk_orden_compra = obj_orden_compra_funciones.mf_pk_orden_compra_max();
        _QSTR str_pk_orden_compra;
        str_pk_orden_compra.setNum(pk_orden_compra+1);
        //obj_orden_compra.mf_set_fk_comprobante();
        obj_orden_compra.mf_set_pk_orden_compra(str_pk_orden_compra);
        obj_orden_compra.mf_set_fk_comprobante(str_pk_comprobante);
        obj_orden_compra.mf_set_fk_proveedor(ui->lineEdit_codigoProveedor->text());
        obj_orden_compra.mf_set_fk_transportista(ui->lineEdit_codigoTransportista->text());

        QString str_current_index;
        str_current_index.setNum(ui->comboBox_tipo_moneda->currentIndex());
        obj_orden_compra.mf_set_fk_tipo_pago(str_current_index);
        obj_orden_compra.mf_set_igv(ui->lineEdit_igv->text());
        obj_orden_compra.mf_set_total(ui->lineEdit_total->text());


        obj_orden_compra.mf_add();

        this->close();
    } else {

    }

}

void ui_new_orden::on_pushButton_editar_clicked()
{
    int rpta = QMessageBox::question(this,"Confirmación","Desea guardar los cambios hechos en la orden?","Aceptar","Cancelar");

    if(rpta == 0)
    {
        this->close();
    } else {

    }
}

void ui_new_orden::on_pushButton_cancelar_clicked()
{
    this->close();
}
