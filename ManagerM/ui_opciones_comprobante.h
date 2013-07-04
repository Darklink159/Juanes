#ifndef UI_OPCIONES_COMPROBANTE_H
#define UI_OPCIONES_COMPROBANTE_H

#include <QWidget>
#include "share_include.h"


namespace Ui {
class ui_opciones_comprobante;
}

class ui_opciones_comprobante : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_comprobante(QWidget *parent = 0);
    ~ui_opciones_comprobante();

private:

    QSqlQueryModel *model_boletas;
    QSqlQueryModel *model_facturas;

    _QSTR pk_boleta;
    _QSTR pk_factura;

public:

    void update_table_boletas();
    void update_table_facturas();
    
private slots:
    void on_pushButton_new_b_clicked();

    void on_pushButton_new_f_clicked();

    void on_tableView_factura_clicked(const QModelIndex &index);

    void on_tableView_boleta_clicked(const QModelIndex &index);

    void on_pushButton_save_b_clicked();

    void on_pushButton_save_f_clicked();

    void on_pushButton_usar_f_clicked();

    void on_pushButton_usar_b_clicked();

private:
    Ui::ui_opciones_comprobante *ui;
};

#endif // UI_OPCIONES_COMPROBANTE_H
