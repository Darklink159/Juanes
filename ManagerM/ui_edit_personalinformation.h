#ifndef UI_EDIT_PERSONALINFORMATION_H
#define UI_EDIT_PERSONALINFORMATION_H

#include <QDialog>
#include "share_include.h"

namespace Ui {
class ui_edit_personalInformation;
}

class ui_edit_personalInformation : public QDialog
{
    Q_OBJECT
    
public:
    explicit ui_edit_personalInformation(QWidget *parent = 0);
    void llenarCamposEdicion();
    void camposHabiles();
    ~ui_edit_personalInformation();
    
private slots:
    void on_pushButton_cancel_clicked();

    void on_pushButton_save_clicked();

    void on_pushButton_change_clicked();

private:
    Ui::ui_edit_personalInformation *ui;
    _QSTR dniUser;
};

#endif // UI_EDIT_PERSONALINFORMATION_H
