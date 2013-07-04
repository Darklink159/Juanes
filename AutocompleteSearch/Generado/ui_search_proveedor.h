#ifndef ui_search_proveedor_H
#define ui_search_proveedor_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class ui_search_proveedor;
}
class ui_search_proveedor : public QWidget
{
	Q_OBJECT
public:
	explicit ui_search_proveedor(QWidget *parent = 0);
	~ui_search_proveedor();
private slots:
	void on_le_pk_ruc_editingFinished();
	void on_le_nombre_vendedor_editingFinished();
private:
	Ui::ui_search_proveedor *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_search_proveedor_H
