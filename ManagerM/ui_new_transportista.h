#ifndef UI_NEW_TRANSPORTISTA_H
#define UI_NEW_TRANSPORTISTA_H

#include <QWidget>
#include "share_include.h"
#include <QMessageBox>

namespace Ui {
class ui_new_transportista;
}

class ui_new_transportista : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_transportista(QWidget *parent = 0);
    ~ui_new_transportista();

    //void setType(int);
    //void setUiModuleCompras(ui_module_compras*);
    void setTableView(QTableView*);
private slots:
    void on_pushButton_registrar_clicked();

    //void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();
    void on_pushButton_link_clicked();

private:
    Ui::ui_new_transportista *ui;

    QTableView* table;
    ui_module_compras* module_compras;
};

#endif // UI_NEW_TRANSPORTISTA_H
