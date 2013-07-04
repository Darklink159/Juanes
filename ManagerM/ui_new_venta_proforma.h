#ifndef UI_NEW_VENTA_PROFORMA_H
#define UI_NEW_VENTA_PROFORMA_H

#include <QWidget>
#include "share_include.h"
namespace Ui {
class ui_new_venta_proforma;
}

class ui_new_venta_proforma : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_venta_proforma(QWidget *parent = 0);
    vector<_QSTR> getValores();
    ~ui_new_venta_proforma();
    

public slots:
    void printValues(_QSTR,_QSTR);

private slots:
    void on_pushButton_clicked();

private:
    Ui::ui_new_venta_proforma *ui;
};

#endif // UI_NEW_VENTA_PROFORMA_H
