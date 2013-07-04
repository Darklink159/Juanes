#ifndef ui_new_articulo_H
#define ui_new_articulo_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class ui_new_articulo;
}
class ui_new_articulo : public QWidget
{
	Q_OBJECT
public:
	explicit ui_new_articulo(QWidget *parent = 0);
	~ui_new_articulo();
private slots:
	void on_le_pk_articulo_editingFinished();
	void on_le_fk_marca_editingFinished();
	void on_le_descripcion_editingFinished();
	void on_le_fk_medida_editingFinished();
private:
	Ui::ui_new_articulo *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // ui_new_articulo_H
