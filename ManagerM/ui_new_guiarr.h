#ifndef UI_NEW_GUIARR_H
#define UI_NEW_GUIARR_H

#include <QWidget>

namespace Ui {
class ui_new_guiarr;
}

class ui_new_guiarr : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_guiarr(QWidget *parent = 0);
    ~ui_new_guiarr();

    void setType(int);

private slots:
    void on_pushButton_buscarProveedor_clicked();

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_ingresarArticulos_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();
private:
    Ui::ui_new_guiarr *ui;
};

#endif // UI_NEW_GUIARR_H
