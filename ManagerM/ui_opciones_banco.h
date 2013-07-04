#ifndef UI_OPCIONES_BANCO_H
#define UI_OPCIONES_BANCO_H

#include <QWidget>
#include "share_include.h"

namespace Ui {
class ui_opciones_banco;
}

class ui_opciones_banco : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_opciones_banco(QWidget *parent = 0);
    ~ui_opciones_banco();

private slots:
    void on_pushButton_save_clicked();


private:
    QSqlQueryModel* model;

public:
    void update_table_bancos();
    
private:
    Ui::ui_opciones_banco *ui;
};

#endif // UI_OPCIONES_BANCO_H


