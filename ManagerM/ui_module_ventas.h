#ifndef UI_MODULE_VENTAS_H
#define UI_MODULE_VENTAS_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_module_ventas;
}

class ui_module_ventas : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_ventas(QWidget *parent = 0);
    ~ui_module_ventas();
    
private slots:

    void on_treeWidget_ventas_itemDoubleClicked(QTreeWidgetItem *item, int column);

    void on_pushButton_nuevo_clicked();

private:

    QSqlQueryModel* model;

private:
    Ui::ui_module_ventas *ui;
};

#endif // UI_MODULE_VENTAS_H
