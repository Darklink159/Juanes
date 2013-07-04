#ifndef UI_MODULE_COMPRAS_H
#define UI_MODULE_COMPRAS_H

#include <QWidget>
#include <QTreeWidgetItem>
#include <QDebug>
#include <QSqlQueryModel>


enum {COMPRAS_NEW, COMPRAS_EDIT, COMPRAS_DELETE};
enum {ORDEN_COMPRA, GUIARR_COMPRA, FACTURA_COMPRA, FLETE_COMPRA};
enum {SOLES, DOLARES};
enum {CON_IGV, SIN_IGV};
enum {CREDITO, CONTADO, VUELTA_VIAJE};


/*
// Sub Modulos

#define NUM_F 4
enum {ORDEN, GUIA, FLETE, FACTURA_COMPRA};
*/
namespace Ui {
class ui_module_compras;
}

class ui_module_compras : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_compras(QWidget *parent = 0);
    ~ui_module_compras();

    void update_tableView_compras();

    //void mf_updateModel_proveedor();
    //void mf_updateModel_transportista();
private slots:
    // Slots que dependen de los sub modulos

    void on_pushButton_nuevo_clicked_orden();
    void on_pushButton_editar_clicked_orden();
    void on_pushButton_eliminar_clicked_orden();
    void on_pushButton_generar_clicked_orden();

    void on_pushButton_nuevo_clicked_guiaRR();
    void on_pushButton_editar_clicked_guiaRR();
    void on_pushButton_eliminar_clicked_guiaRR();
    void on_pushButton_generar_clicked_guiaRR();

    void on_pushButton_nuevo_clicked_factura_compra();
    void on_pushButton_editar_clicked_factura_compra();
    void on_pushButton_eliminar_clicked_factura_compra();

    void on_pushButton_nuevo_clicked_flete();
    void on_pushButton_editar_clicked_flete();
    void on_pushButton_eliminar_clicked_flete();

    void on_pushButton_nuevo_clicked_nota_credito();
    void on_pushButton_editar_clicked_nota_credito();
    void on_pushButton_eliminar_clicked_nota_credito();

    void on_pushButton_nuevo_clicked_nota_debito();
    void on_pushButton_editar_clicked_nota_debito();
    void on_pushButton_eliminar_clicked_nota_debito();

    /*
    void on_pushButton_nuevo_clicked_proveedor();
    void on_pushButton_editar_clicked_proveedor();
    void on_pushButton_eliminar_clicked_proveedor();

    void on_pushButton_nuevo_clicked_transportista();
    void on_pushButton_editar_clicked_transportista();
    void on_pushButton_eliminar_clicked_transportista();
    */

    void on_treeWidget_compras_itemDoubleClicked(QTreeWidgetItem *item, int column);

private:
    Ui::ui_module_compras *ui;

    QSqlQueryModel *model;
    /*
    // Sub Modulos
    int (ui_module_compras::*mpf_cmp[NUM_F])(QString);
    void (ui_module_compras::*mpf_do[NUM_F])();

    int mf_isOrden(QString);
    int mf_isGuiaRR(QString);
    int mf_isFlete(QString);
    int mf_isFactura(QString);
    */

    void mf_doOrden();
    void mf_doGuiaRR();
    void mf_doFlete();
    void mf_doFactura();

    void mf_doNotaCredito();
    void mf_doNotaDebito();
    //void mf_doProveedor();
    //void mf_doTransportista();

};

#endif // UI_MODULE_COMPRAS_H
