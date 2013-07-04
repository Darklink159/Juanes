#ifndef UI_MODULE_HOME_H
#define UI_MODULE_HOME_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_module_home;
}
class ui_edit_personalInformation;
class ui_module_home : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_home(QWidget *parent = 0);
    ~ui_module_home();
    
private slots:

    void on_pushButton_ventas_clicked();

    void on_pushButton_sistema_clicked();

    void on_pushButton_articulo_clicked();

    void on_pushButton_colaboradores_clicked();

    void on_pushButton_compras_clicked();
    void on_pushButton_usuario_clicked();

private:
    Ui::ui_module_home *ui;
};

#endif // UI_MODULE_HOME_H
