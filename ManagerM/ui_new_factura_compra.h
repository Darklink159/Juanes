#ifndef UI_NEW_FACTURA_COMPRA_H
#define UI_NEW_FACTURA_COMPRA_H

#include <QWidget>

namespace Ui {
class ui_new_factura_compra;
}

class ui_new_factura_compra : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_factura_compra(QWidget *parent = 0);
    ~ui_new_factura_compra();

    void setType(int);

private slots:
    void on_pushButton_buscarProveedor_clicked();

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();
    
private:
    Ui::ui_new_factura_compra *ui;
};

#endif // UI_NEW_FACTURA_COMPRA_H
