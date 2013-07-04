#include "ui_module_compras.h"
#include "ui_ui_module_compras.h"

#include "share_include.h"

#include "ui_new_compra_factura.h"
#include "ui_new_compra_flete.h"
#include "ui_new_compra_guia_rr.h"

#include "ui_new_compra_orden.h"
#include "ui_new_compra_nota_credito.h"
#include "ui_new_compra_nota_debito.h"

// Don't work


ui_module_compras::ui_module_compras(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_module_compras)
{
    ui->setupUi(this);

    model = new QSqlQueryModel;
    ui->pushButton_generar->hide();
    ui->toolButton_search->addAction(new QAction("Nombre", this));
    /*
    mpf_cmp[ORDEN] = &ui_module_compras::mf_isOrden;
    mpf_cmp[GUIA] = &ui_module_compras::mf_isGuiaRR;
    mpf_cmp[FLETE] = &ui_module_compras::mf_isFlete;
    mpf_cmp[FACTURA_COMPRA] = &ui_module_compras::mf_isFactura;

    mpf_do[ORDEN] = &ui_module_compras::mf_doOrden;
    mpf_do[GUIA] = &ui_module_compras::mf_doGuiaRR;
    mpf_do[FLETE] = &ui_module_compras::mf_doFlete;
    mpf_do[FACTURA_COMPRA] = &ui_module_compras::mf_doFactura;
    */
}

ui_module_compras::~ui_module_compras()
{
    delete ui;
}

void ui_module_compras::update_tableView_compras()
{
    ui->tableView_compras->setModel(model);
}


void ui_module_compras::on_treeWidget_compras_itemDoubleClicked(QTreeWidgetItem *item, int column)
{

    _QSTR section = item->text(column);

    qDebug()<<section<<endl;
    if(section == "Orden")
    {
        mf_doOrden();
        //model->setQuery(SYSTEM->);
        return;
    }

    if(section == "Guia RR")
    {
        mf_doGuiaRR();
        return;
    }

    if(section == "Flete")
    {
        mf_doFlete();
        return;
    }

    if(section == "Factura")
    {
        mf_doFactura();
        return;
    }

    if(section == "Nota de Credito")
    {
        mf_doNotaCredito();
        return;
    }

    if(section == "Nota de Debito")
    {
        mf_doNotaDebito();
        return;
    }
    /*
    if(section == "Proveedores")
    {
        mf_doProveedor();       
        return;
    }

    if(section == "Transportistas")
    {
        mf_doTransportista();
        return;
    }
    */

}


void ui_module_compras::mf_doOrden()
{
    ui->pushButton_generar->setText("Generar Guia RR");
    ui->pushButton_generar->show();
    disconnect(ui->pushButton_generar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_generar, SIGNAL(clicked()), this, SLOT(on_pushButton_generar_clicked_orden()));

    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_orden()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_orden()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_orden()));
}

void ui_module_compras::mf_doGuiaRR()
{
    ui->pushButton_generar->setText("Generar Factura");
    ui->pushButton_generar->show();
    disconnect(ui->pushButton_generar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_generar, SIGNAL(clicked()), this, SLOT(on_pushButton_generar_clicked_guiaRR()));

    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_guiaRR()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_guiaRR()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_guiaRR()));
}

void ui_module_compras::mf_doFlete()
{
    //ui->pushButton_generar->setText("Generar Flete");
    ui->pushButton_generar->hide();

    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_flete()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_flete()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_flete()));

}

void ui_module_compras::mf_doFactura()
{
    //ui->pushButton_generar->setText("Generar Factura");
    ui->pushButton_generar->hide();
    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_factura_compra()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_factura_compra()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_factura_compra()));
}

void ui_module_compras::mf_doNotaCredito()
{
    ui->pushButton_generar->hide();
    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_nota_credito()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_nota_credito()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_nota_credito()));
}

void ui_module_compras::mf_doNotaDebito()
{
    ui->pushButton_generar->hide();
    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_nota_debito()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_nota_debito()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_nota_debito()));
}

/*
void ui_module_compras::mf_doProveedor()
{
    ui->pushButton_generar->hide();

    // Set the model
    mf_updateModel_proveedor();

    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_proveedor()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_proveedor()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_proveedor()));
}

void ui_module_compras::mf_doTransportista()
{
    ui->pushButton_generar->hide();

    // Set the model
    mf_updateModel_transportista();
    disconnect(ui->pushButton_nuevo, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_nuevo, SIGNAL(clicked()), this, SLOT(on_pushButton_nuevo_clicked_transportista()));

    disconnect(ui->pushButton_editar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_editar, SIGNAL(clicked()), this, SLOT(on_pushButton_editar_clicked_transportista()));

    disconnect(ui->pushButton_eliminar, SIGNAL(clicked()), 0, 0);
    connect(ui->pushButton_eliminar, SIGNAL(clicked()), this, SLOT(on_pushButton_eliminar_clicked_transportista()));
}
*/
/*
void ui_module_compras::mf_updateModel_proveedor()
{
    object_e_proveedor_funciones obj_proveedor;
    ui->tableView_compras->setModel(obj_proveedor.mf_model_e_proveedor());
}

void ui_module_compras::mf_updateModel_transportista()
{
    object_e_transportista_funciones obj_transportista;
    ui->tableView_compras->setModel(obj_transportista.mf_model_e_transportista());
}
*/
void ui_module_compras::on_pushButton_nuevo_clicked_orden()
{
    ui_new_compra_orden* form_orden = new ui_new_compra_orden();
    form_orden->setAttribute(Qt::WA_DeleteOnClose);    
    //form_orden->setType(COMPRAS_NEW);
    form_orden->show();
}

void ui_module_compras::on_pushButton_editar_clicked_orden()
{
    /*
    ui_new_orden* form_orden = new ui_new_orden();
    form_orden->setAttribute(Qt::WA_DeleteOnClose);
    form_orden->setType(COMPRAS_EDIT);
    form_orden->show();
    */
}

void ui_module_compras::on_pushButton_eliminar_clicked_orden()
{

}

void ui_module_compras::on_pushButton_generar_clicked_orden()
{
    /*
    ui_new_guiarr* form_guiaRR = new ui_new_guiarr();    
    form_guiaRR->show();
    */
}

void ui_module_compras::on_pushButton_nuevo_clicked_guiaRR()
{
    ui_new_compra_guia_rr* form_guiaRR = new ui_new_compra_guia_rr();
    form_guiaRR->setAttribute(Qt::WA_DeleteOnClose);
    //form_guiaRR->setType(COMPRAS_NEW);
    form_guiaRR->show();
}

void ui_module_compras::on_pushButton_editar_clicked_guiaRR()
{
    /*
    ui_new_guiarr* form_guiaRR = new ui_new_guiarr();
    form_guiaRR->setAttribute(Qt::WA_DeleteOnClose);
    form_guiaRR->setType(COMPRAS_EDIT);
    form_guiaRR->show();
    */
}

void ui_module_compras::on_pushButton_eliminar_clicked_guiaRR()
{

}

void ui_module_compras::on_pushButton_generar_clicked_guiaRR()
{
    /*
    ui_new_factura_compra* form_factura_compra = new ui_new_factura_compra();
    form_factura_compra->show();
    */
}

void ui_module_compras::on_pushButton_nuevo_clicked_factura_compra()
{
    ui_new_compra_factura* w = new ui_new_compra_factura();
    w->setAttribute(Qt::WA_DeleteOnClose);
    //w->setType(COMPRAS_NEW);
    w->show();
}

void ui_module_compras::on_pushButton_editar_clicked_factura_compra()
{
    /*
    ui_new_factura_compra* form_factura_compra = new ui_new_factura_compra();
    form_factura_compra->setAttribute(Qt::WA_DeleteOnClose);
    form_factura_compra->setType(COMPRAS_EDIT);
    form_factura_compra->show();
    */
}

void ui_module_compras::on_pushButton_eliminar_clicked_factura_compra()
{

}

void ui_module_compras::on_pushButton_nuevo_clicked_flete()
{
    ui_new_compra_flete* form_flete = new ui_new_compra_flete();
    form_flete->setAttribute(Qt::WA_DeleteOnClose);
    //form_flete->setType(COMPRAS_NEW);
    form_flete->show();
}

void ui_module_compras::on_pushButton_editar_clicked_flete()
{

}

void ui_module_compras::on_pushButton_eliminar_clicked_flete()
{

}

void ui_module_compras::on_pushButton_nuevo_clicked_nota_credito()
{
    ui_new_compra_nota_credito* w = new ui_new_compra_nota_credito;
    w->setAttribute(Qt::WA_DeleteOnClose);
    //form_flete->setType(COMPRAS_NEW);
    w->show();
}

void ui_module_compras::on_pushButton_editar_clicked_nota_credito()
{

}

void ui_module_compras::on_pushButton_eliminar_clicked_nota_credito()
{

}

void ui_module_compras::on_pushButton_nuevo_clicked_nota_debito()
{
    ui_new_compra_nota_debito* w = new ui_new_compra_nota_debito;
    w->setAttribute(Qt::WA_DeleteOnClose);
    //form_flete->setType(COMPRAS_NEW);
    w->show();
}

void ui_module_compras::on_pushButton_editar_clicked_nota_debito()
{

}

void ui_module_compras::on_pushButton_eliminar_clicked_nota_debito()
{

}

/*
void ui_module_compras::on_pushButton_nuevo_clicked_proveedor()
{
    ui_new_proveedor* form_proveedor = new ui_new_proveedor();
    form_proveedor->setAttribute(Qt::WA_DeleteOnClose);    
    form_proveedor->setUiModuleCompras(this);
    form_proveedor->setType(COMPRAS_NEW);
    form_proveedor->show();
}

void ui_module_compras::on_pushButton_editar_clicked_proveedor()
{
    ui_new_proveedor* form_proveedor = new ui_new_proveedor();
    form_proveedor->setAttribute(Qt::WA_DeleteOnClose);
    form_proveedor->setUiModuleCompras(this);
    form_proveedor->setType(COMPRAS_EDIT);
    form_proveedor->show();
}

void ui_module_compras::on_pushButton_eliminar_clicked_proveedor()
{

}

void ui_module_compras::on_pushButton_nuevo_clicked_transportista()
{
    ui_new_transportista* form_transportista = new ui_new_transportista();
    form_transportista->setAttribute(Qt::WA_DeleteOnClose);
    form_transportista->setUiModuleCompras(this);
    form_transportista->setType(COMPRAS_NEW);
    form_transportista->show();
}

void ui_module_compras::on_pushButton_editar_clicked_transportista()
{
    ui_new_transportista* form_transportista = new ui_new_transportista();
    form_transportista->setAttribute(Qt::WA_DeleteOnClose);
    form_transportista->setUiModuleCompras(this);
    form_transportista->setType(COMPRAS_EDIT);
    form_transportista->show();
}

void ui_module_compras::on_pushButton_eliminar_clicked_transportista()
{

}
*/
