#ifndef UI_SEARCH_PROVEEDOR_H
#define UI_SEARCH_PROVEEDOR_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQueryModel>

class ui_edit_proveedor;

namespace Ui {
class ui_search_proveedor;
}

class ui_search_proveedor : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_search_proveedor(QWidget *parent = 0);
    ~ui_search_proveedor();


private slots:


    void on_lineEdit_razonSocial_textChanged(const QString &arg1);

    void on_pushButton_new_clicked();

    void on_pushButton_change_clicked();

    void on_pushButton_add_clicked();

private:
    Ui::ui_search_proveedor *ui;

    QSqlQueryModel *model;
};

#endif // UI_SEARCH_PROVEEDOR_H
