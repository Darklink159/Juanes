#ifndef UI_TIPO_CAMBIO_DOLAR_H
#define UI_TIPO_CAMBIO_DOLAR_H

#include <QWidget>
#include <QDate>
#include <QSqlQueryModel>
#include <QSqlTableModel>

namespace Ui {
class ui_tipo_cambio_dolar;
}

class ui_tipo_cambio_dolar : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_tipo_cambio_dolar(QWidget *parent = 0);
    ~ui_tipo_cambio_dolar();


    void setMonth(int);
    void setDate(const QDate&);

    void select();
private:
    Ui::ui_tipo_cambio_dolar *ui;

    QSqlTableModel* model;
    QDate md_date;

    void closeEvent(QCloseEvent *);
signals:
    void closing();

private slots:
    void on_dateEdit_dateChanged(const QDate &date);
    void on_pushButton_new_clicked();
    void on_pushButton_edit_clicked();
};

#endif // UI_TIPO_CAMBIO_DOLAR_H
