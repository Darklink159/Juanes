#ifndef UI_OPCIONES_ARTICULO_H
#define UI_OPCIONES_ARTICULO_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_articulo;
}

class ui_opciones_articulo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_articulo(QWidget *parent = 0);
    ~ui_opciones_articulo();

private:

    QSqlQueryModel *model_marca;
    QSqlQueryModel *model_medida;

    _QSTR pk_marca;
    _QSTR pk_medida;

public:

    void update_table_marcas();
    void update_table_medidas();

    void setCurrentTab(int index);
    
private slots:

    void on_tabWidget_currentChanged(int index);

    void on_pushButton_save_medida_clicked();

    void on_pushButton_save_marca_clicked();

    void closeEvent(QCloseEvent *ev );

    void on_pushButton_new_marca_clicked();

    void on_tableView_marca_clicked(const QModelIndex &index);

    void on_pushButton_new_medida_clicked();

    void on_tableView_medida_clicked(const QModelIndex &index);

signals:
    void closing();

private:
    Ui::ui_opciones_articulo *ui;
};

#endif // UI_OPCIONES_ARTICULO_H


