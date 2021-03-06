#ifndef UI_NEW_COMPRA_FACTURA_H
#define UI_NEW_COMPRA_FACTURA_H

#include <QWidget>

namespace Ui {
class ui_new_compra_factura;
}

class ui_new_compra_factura : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_compra_factura(QWidget *parent = 0);
    ~ui_new_compra_factura();
    
private slots:
    void on_pushButton_buscarProveedor_clicked();

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();
private:
    Ui::ui_new_compra_factura *ui;
};

#endif // UI_NEW_COMPRA_FACTURA_H
