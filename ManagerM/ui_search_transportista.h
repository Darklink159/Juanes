#ifndef UI_SEARCH_TRANSPORTISTA_H
#define UI_SEARCH_TRANSPORTISTA_H

#include <QWidget>
#include <QSqlTableModel>
#include <QSqlQueryModel>
namespace Ui {
class ui_search_transportista;
}

class ui_search_transportista : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_search_transportista(QWidget *parent = 0);
    ~ui_search_transportista();
    
private slots:
    void on_lineEdit_razonSocial_textChanged(const QString &arg1);

    void on_pushButton_new_clicked();

    void on_pushButton_add_clicked();

    void on_pushButton_change_clicked();

private:
    Ui::ui_search_transportista *ui;

    QSqlQueryModel *model;
};

#endif // UI_SEARCH_TRANSPORTISTA_H
