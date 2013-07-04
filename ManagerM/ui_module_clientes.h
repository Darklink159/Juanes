#ifndef UI_MODULE_CLIENTES_H
#define UI_MODULE_CLIENTES_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_module_clientes;
}

class ui_module_clientes : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_clientes(QWidget *parent = 0);
    void updateContentFrame();
    ~ui_module_clientes();
    
private slots:
    void on_pushButton_nuevo_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_clicked();

private:
    Ui::ui_module_clientes *ui;
    QSqlRelationalTableModel* model;
};

#endif // UI_MODULE_CLIENTES_H
