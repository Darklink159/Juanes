#ifndef SEARCHFORM_H
#define SEARCHFORM_H
#include <QWidget>
#include <QCompleter>
#include <QSqlRelationalTableModel>
namespace Ui {
	class Generado;
}
class Generado : public QWidget
{
	Q_OBJECT
public:
	explicit Generado(QWidget *parent = 0);
	~Generado();
private slots:
	void on_le_pk_articulo_editingFinished();
	void on_le_fk_grupo_editingFinished();
	void on_le_fk_marca_editingFinished();
private:
	Ui::Generado *ui;
	QString table_name;
	QSqlRelationalTableModel * table_model;
	void refreshTableView();
};
#endif // SEARCHFORM_H
