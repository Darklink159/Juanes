#ifndef ui_search_medida_H
#define ui_search_medida_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class ui_search_medida;
}
class ui_search_medida : public QWidget
{
	Q_OBJECT
public:
	explicit ui_search_medida(QWidget *parent = 0);
	~ui_search_medida();
private slots:
	void on_le_descripcion_editingFinished();
private:
	Ui::ui_search_medida *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_search_medida_H
