#ifndef UI_NEW_COMPRA_ORDEN_H
#define UI_NEW_COMPRA_ORDEN_H

#include <QWidget>
#include <QCompleter>
#include "share_include.h"

namespace Ui {
class ui_new_compra_orden;
}

class ui_new_compra_orden : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_compra_orden(QWidget *parent = 0);
    ~ui_new_compra_orden();
    
    // Contiene un numero multiplo de 8
    // que indica la cantidad de filas que se visualizan en el completer
    // de lineEdit_ingresarArticulos.
    int numRowsVisible;
    // Completer para lineEdit_ingresarArticulos.
    //QCompleter *md_c;

    // Global Search Articulos widget
    QWidget* global;

    QWidget* search_proveedor;
    QWidget* search_transportista;
    QWidget* widget_tipo_cambio;

    //ShoppingCart* shoppingCart;
    void setText_lineEdit_ruc(QString);
    void setText_lineEdit_razon_social(QString);    

private slots:
    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();

    void on_pushButton_proveedor_clicked();

    void on_pushButton_transportista_clicked();

    void on_lineEdit_codigoProveedor_textChanged(const QString &arg1);

    void on_lineEdit_codigoTransportista_textChanged(const QString &arg1);

    void on_lineEdit_proveedorNombre_returnPressed();

    void on_lineEdit_transportistaNombre_returnPressed();

    void on_lineEdit_proveedorNombre_activated(const QString&);

    void on_lineEdit_transportistaNombre_activated(const QString&);

    void on_external_pushButton_add();

    //void on_lineEdit_ingresarArticulo_textChanged(const QString &arg1);

    //void on_lineEdit_ingresarArticulo_returnPressed();

    void on_comboBox_tipo_moneda_currentIndexChanged(int index);

    void on_comboBox_modalidad_currentIndexChanged(int index);

    /*
    void on_pushButton_add_proveedor_clicked();

    void on_pushButton_add_transportista_clicked();
    */
    void on_dateEdit_emision_dateChanged(const QDate &date);

    void on_widget_tipo_cambio_closing();

private:
    Ui::ui_new_compra_orden *ui;

    void init_lineEdit_proveedorNombre();
    void init_lineEdit_transportistaNombre();
};

#endif // UI_NEW_COMPRA_ORDEN_H
