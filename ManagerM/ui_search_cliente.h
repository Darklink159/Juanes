#ifndef UI_SEARCH_CLIENTE_H
#define UI_SEARCH_CLIENTE_H

#include <QDialog>
#include "share_include.h"

namespace Ui {
class ui_search_cliente;
}

class ui_search_cliente : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_search_cliente(QWidget *parent = 0);
    void updateContentFrame(_QSTR filtro);
    ~ui_search_cliente();
    
private slots:
    void on_lineEdit_ruc_textEdited(const QString &arg1);

    void on_lineEdit_razonSocial_textEdited(const QString &arg1);

    void on_tableView_clientes_doubleClicked(const QModelIndex &index);

    void on_buttonBox_accepted();

signals:
    void returnInformation(_QSTR ruc,_QSTR nombre);
private:
    Ui::ui_search_cliente *ui;
    QSqlQueryModel *tabla;
}
;
#endif // UI_SEARCH_CLIENTE_H
