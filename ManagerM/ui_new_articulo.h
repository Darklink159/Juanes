#ifndef UI_NEW_ARTICULO_H
#define UI_NEW_ARTICULO_H

#include <QWidget>

namespace Ui {
class ui_new_articulo;
}

class ui_new_articulo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_articulo(QWidget *parent = 0);
    ~ui_new_articulo();
    
private slots:


    bool validateRegistrarForm();



    void on_pushButton_agregar_clicked();

    void on_btn_aceptar_clicked();

    void on_btn_borrar_clicked();

    void on_btn_cancelar_clicked();

    void on_btn_add_grupo_clicked();

    void on_btn_add_marca_clicked();

    void on_btn_add_medida_clicked();

    void update_form();

    void update_comboBox_Marca();
    void update_comboBox_Medida();
    void update_comboBox_Proveedor();

    void select_last_inserted_Marca();
    void select_last_inserted_Medida();
    void select_last_inserted_Proveedor();

    void closeEvent(QCloseEvent *ev );

    void on_btn_add_proveedor_clicked();

signals:
    void closing();
private:
    Ui::ui_new_articulo *ui;
//Funciones auxiliares
    //void openOpcionesArticuloWith(int tab);

    void reset_form();
    void incrementar_codigo();
    void clear_input();
    void update_codigo_text(QString nuevo_codigo);
    void keyPressEvent(QKeyEvent *);
};

#endif // UI_NEW_ARTICULO_H
