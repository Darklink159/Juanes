#ifndef UI_NEW_MEDIDA_H
#define UI_NEW_MEDIDA_H

#include <QWidget>
#include "share_include.h"

class ui_opciones_articulo;

namespace Ui {
class ui_new_medida;
}

class ui_new_medida : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_medida(QWidget *parent = 0);
    ~ui_new_medida();
    

private:
    ui_opciones_articulo* parent_form;
    int parent;
    object_e_medida* obj_medida;

public:
    void mf_set_parent_form(ui_opciones_articulo* p);
    void mf_set_parent(int p);

    ui_opciones_articulo* mf_get_parent_form();
    int mf_get_parent();

signals:
    void closing();

private slots:
    void on_pushButton_new_medida_clicked();
    void closeEvent(QCloseEvent *);

private:
    Ui::ui_new_medida *ui;
};

#endif // UI_NEW_MEDIDA_H
