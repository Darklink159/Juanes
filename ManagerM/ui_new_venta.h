#ifndef UI_NEW_VENTA_H
#define UI_NEW_VENTA_H

#include <QWidget>
#include <QSqlRelationalTableModel>
#include <QDateTime>
#include "share_include.h"


class QStandardItemModel;

namespace Ui {
class ui_new_venta;
}

class ui_new_venta : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta(QWidget *parent = 0);
    void actualizaContenido();
    void guardarArticulos(_QSTR codigoComp);
    bool guardarComprobante();
    ~ui_new_venta();
    
private slots:
    void on_le_nombre_textEdited(const QString &arg1);

    void on_pushButton_siguiente_clicked();

    void on_pushButton_atras_clicked();

    void on_cb_tipo_comprobante_activated(const QString &arg1);

    void on_le_marca_textEdited(const QString &arg1);

    void on_le_medida_textEdited(const QString &arg1);

    void on_pushButton_down_clicked();

    void on_pushButton_up_clicked();

private:
     Ui::ui_new_venta *ui;
     QSqlRelationalTableModel * table;
     QStandardItemModel * seleccionados_model ;
     double montoTotal;
     int tipoComprobante;
     ui_new_venta_factura* venta_facturas;
     ui_new_venta_boleta* venta_boletas;
     ui_new_venta_proforma* venta_proformas;
     ui_new_venta_cotizacion* venta_cotizaciones;


     void table_view_seleccionados_addHeaders();
     void updatePrecioView();
     void hideHabilitadoSeleccionadosColumn(bool hide);
};

#endif // UI_NEW_VENTA_H
