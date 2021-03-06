#ifndef UI_MODULE_COLABORADORES_H
#define UI_MODULE_COLABORADORES_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_module_colaboradores;
}

class ui_module_colaboradores : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_module_colaboradores(QWidget *parent = 0);
    void updateContentFrame();
    ~ui_module_colaboradores();
    
private slots:
    void on_pushButton_nuevo_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_eliminar_clicked();

private:
    Ui::ui_module_colaboradores *ui;
    QSqlRelationalTableModel* model;
};

#endif // UI_MODULE_COLABORADORES_H
