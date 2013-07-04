#ifndef search_articulo_H
#define search_articulo_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class search_articulo;
}
class search_articulo : public QWidget
{
	Q_OBJECT
public:
	explicit search_articulo(QWidget *parent = 0);
	~search_articulo();
private slots:
	void on_le_fk_marca_editingFinished();
	void on_le_fk_medida_editingFinished();
	void on_le_descripcion_editingFinished();
private:
	Ui::search_articulo *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // search_articulo_H
