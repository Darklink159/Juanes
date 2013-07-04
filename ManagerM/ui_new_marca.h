#ifndef UI_NEW_MARCA_H
#define UI_NEW_MARCA_H

#include <QWidget>
#include "share_include.h"

class ui_opciones_articulo;


namespace Ui {
class ui_new_marca;
}

class ui_new_marca : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_marca(QWidget *parent = 0);
    ~ui_new_marca();

private:
    ui_opciones_articulo* parent_form;
    int parent;
    object_e_marca* obj_marca;

public:
    void mf_set_parent_form(ui_opciones_articulo* p);
    void mf_set_parent(int p);

    ui_opciones_articulo* mf_get_parent_form();
    int mf_get_parent();

signals:
    void closing();
    
private slots:
    void on_pushButton_new_marca_clicked();
    void closeEvent(QCloseEvent *ev);


private:
    Ui::ui_new_marca *ui;
};

#endif // UI_NEW_MARCA_H


