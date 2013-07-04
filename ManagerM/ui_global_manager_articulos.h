#ifndef UI_GLOBAL_MANAGER_ARTICULOS_H
#define UI_GLOBAL_MANAGER_ARTICULOS_H

#include <QWidget>
#include "share_include.h"
class Searcher_Articulos;

namespace Ui {
class ui_global_manager_articulos;
}

class ui_global_manager_articulos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_global_manager_articulos(QWidget *parent = 0);
    ~ui_global_manager_articulos();
    
    //QTableView* get_tableView_articulos();
    //QPushButton* get_pb_add();

    void setTableWidget(QTableWidget*);
    void set_cb_modalidad(QComboBox*);
    void set_cb_tipo_moneda(QComboBox*);
    void setProveedor(const QString&);

    void init_focus();
    QPushButton* getPB_add();

private slots:
    void on_tableView_articulos_doubleClicked(const QModelIndex &index);

    void on_lineEdit_descripcion_textChanged(const QString &arg1);

    void on_lineEdit_marca_textChanged(const QString &arg1);

    void on_lineEdit_medida_textChanged(const QString &arg1);

    void on_pushButton_add_clicked();

    void on_pushButton_down_clicked();

    void on_pushButton_up_clicked();

    void on_comboBox_modo_currentIndexChanged(const QString &arg1);

    void on_pushButton_clicked();

    void on_pushButton_new_clicked();

    void on_pushButton_edit_clicked();

private:
    Ui::ui_global_manager_articulos *ui;

    QTableWidget* tableWidget_md_parent;
    // Puntero al comboBox_modalidad de ui_orden_compra
    QComboBox* cb_modalidad_md_parent;
    // Puntero al comboBox_tipo_moneda de ui_orden_compra
    QComboBox* cb_tipo_moneda_md_parent;

    QString proveedor;
    void update_table_articulos();

    bool eventFilter(QObject *obj, QEvent *e);

    void do_search_and();
};

#endif // UI_GLOBAL_MANAGER_ARTICULOS_H

