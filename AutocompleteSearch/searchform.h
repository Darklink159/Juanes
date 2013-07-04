#ifndef SEARCHFORM_H
#define SEARCHFORM_H

#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
class SearchForm;
}

class SearchForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit SearchForm(QWidget *parent = 0);
    ~SearchForm();
    
private slots:
    void on_le_nombre_editingFinished();

    void on_lineEdit_editingFinished();

private:
    Ui::SearchForm *ui;
    QCompleter * c;
    QString table_name;
    QSqlRelationalTableModel * table_model;

    void refreshTableView();


};

#endif // SEARCHFORM_H
