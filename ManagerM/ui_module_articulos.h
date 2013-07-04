#ifndef UI_MODULE_ARTICULOS_H
#define UI_MODULE_ARTICULOS_H

#include <QWidget>
#include "share_include.h"
namespace Ui {
class ui_module_articulos;
}

class ui_module_articulos : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_articulos(QWidget *parent = 0);
    ~ui_module_articulos();
    
private slots:
    void on_pushButton_nuevo_2_clicked();




    void on_pushButton_editar_2_clicked();

    void update_table_articulos();
    void on_pushButton_eliminar_2_clicked();


private:
    Ui::ui_module_articulos *ui;  



};

#endif // UI_MODULE_ARTICULOS_H


