#ifndef UI_OPCIONES_PROVEEDOR_H
#define UI_OPCIONES_PROVEEDOR_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_proveedor;
}

class ui_opciones_proveedor : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_proveedor(QWidget *parent = 0);
    ~ui_opciones_proveedor();
    
private slots:
    void on_pushButton_new_clicked();

private:
    QSqlQueryModel* model;

public:
    void update_table_proveedores();

private:
    Ui::ui_opciones_proveedor *ui;
};

#endif // UI_OPCIONES_PROVEEDOR_H
