#ifndef UI_LOGIN_H
#define UI_LOGIN_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_login;
}

class ui_login : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_login(QWidget *parent = 0);
    ~ui_login();

//----------------------------------------------
private:
    ui_main* md_p_ui_parent;

public:
    void mf_set_ui_parent(ui_main* ui_parent);
    ui_main* mf_get_ui_parent();

//----------------------------------------------
    
private slots:
    void on_pushButton_cancelar_clicked();

    void on_pushButton_aceptar_clicked();

    void on_lineEdit_contrasenia_returnPressed();

private:
    Ui::ui_login *ui;
};

#endif // UI_LOGIN_H
