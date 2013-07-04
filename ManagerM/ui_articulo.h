#ifndef UI_ARTICULO_H
#define UI_ARTICULO_H

#include <QWidget>
#include "share_include.h"

#include "object_e_articulo.h"

namespace Ui {
class ui_articulo;
}

class ui_articulo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_articulo(QWidget *parent = 0);
    ~ui_articulo();
    
private slots:
    void on_btn_borrar_clicked();

    void on_btn_aceptar_clicked();

    void on_tabWidget_currentChanged(int index);

    void on_btn_registrar_clicked();

private:
    Ui::ui_articulo *ui;

    bool validateForm();

};

#endif // UI_ARTICULO_H
