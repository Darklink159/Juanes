#ifndef ui_search_grupo_H
#define ui_search_grupo_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class ui_search_grupo;
}
class ui_search_grupo : public QWidget
{
	Q_OBJECT
public:
	explicit ui_search_grupo(QWidget *parent = 0);
	~ui_search_grupo();
private slots:
	void on_le_descripcion_editingFinished();
private:
	Ui::ui_search_grupo *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_search_grupo_H
