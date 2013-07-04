#ifndef UI_NEW_ORDEN_H
#define UI_NEW_ORDEN_H

#include <QWidget>

#include "share_include.h"
namespace Ui {
class ui_new_orden;
}

class ui_new_orden : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_orden(QWidget *parent = 0);
    ~ui_new_orden();

    void setType(int);
    
private slots:
    void on_pushButton_buscarProveedor_clicked();

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::ui_new_orden *ui;
};

#endif // UI_NEW_ORDEN_H
