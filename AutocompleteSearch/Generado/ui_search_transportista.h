#ifndef ui_search_transportista_H
#define ui_search_transportista_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
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
	void on_le_pk_ruc_editingFinished();
private:
	Ui::ui_search_transportista *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_search_transportista_H
