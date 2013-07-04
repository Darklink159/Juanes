#ifndef UI_EDIT_TRANSPORTISTA_H
#define UI_EDIT_TRANSPORTISTA_H

#include <QWidget>
#include "share_include.h"
namespace Ui {
class ui_edit_transportista;
}

class ui_edit_transportista : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_edit_transportista(QWidget *parent = 0);
    ~ui_edit_transportista();
    
    QString currentRUC;
    void update_data(QString ruc);

    void setTableView(QTableView*);
private slots:
    void on_pushButton_link_clicked();

    void on_pushButton_cancelar_clicked();

    void on_pushButton_guardar_clicked();

private:
    Ui::ui_edit_transportista *ui;    

    QTableView* table;
    map<QString, QString > regiones;
};

#endif // UI_EDIT_TRANSPORTISTA_H




