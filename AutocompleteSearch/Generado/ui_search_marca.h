#ifndef ui_search_marca_H
#define ui_search_marca_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class ui_search_marca;
}
class ui_search_marca : public QWidget
{
	Q_OBJECT
public:
	explicit ui_search_marca(QWidget *parent = 0);
	~ui_search_marca();
private slots:
	void on_le_descripcion_editingFinished();
private:
	Ui::ui_search_marca *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_search_marca_H
