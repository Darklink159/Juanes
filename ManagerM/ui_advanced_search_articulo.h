#ifndef UI_ADVANCED_SEARCH_H
#define UI_ADVANCED_SEARCH_H

#include <QWidget>
#include <QActionGroup>
#include <QSqlTableModel>
#include <QSqlRelationalTableModel>


namespace Ui {
class ui_advanced_search_articulo;
}

class ui_advanced_search_articulo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_advanced_search_articulo(QWidget *parent = 0);
    void setTableModel(QSqlTableModel * m);
    ~ui_advanced_search_articulo();
    
public slots:
    void filterTodos();
    void filterCodigo();
    void filterMarca();
    void filterMedida();
    void filterDescripcion();
    void filter_tipo_2_Descripcion();
    void filterStock();
    void filterPrecio();

private slots:
    void on_toolButton_clicked();

    void on_lineEdit_returnPressed();

    void on_tb_borrar_clicked();

private:
    Ui::ui_advanced_search_articulo *ui;
    QList<QAction*> actions_list;
    QActionGroup* actions_group;    
    QSqlTableModel * model;
    QString queryFilter;


    bool checkQuery(QString q,QString value);


};

#endif // UI_ADVANCED_SEARCH_H
