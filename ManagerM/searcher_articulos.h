#ifndef SEARCHER_ARTICULOS_H
#define SEARCHER_ARTICULOS_H

#include "share_include.h"
/*
#include <vector>
#include <map>
#include <QString>
#include <QLineEdit>
#include <QTableView>
#include <QObject>
#include <QSqlRelationalTableModel>
#include <QMessageBox>
#include <QComboBox>
#include <QDebug>

using namespace std;
*/


enum {COD_1,GRUPO_1,MARCA_1,MEDIDA_1,DESCRIPCION_1,PRECIO_1,STOCK_1,HABILITADO_1,CANTIDAD_1};

class Searcher_Articulos: public QObject
{
    Q_OBJECT
public:
    Searcher_Articulos();
    ~Searcher_Articulos();
    void search_type_and_cb(vector<pair<QWidget*,int> >, QTableView*);
    void search_type_and_le(vector<pair<QWidget*,int> >, QTableView*);

private:
    QString filter;
    // QLineEdit y tipo de busqueda en el filtro para
    vector<pair<QWidget*, int> > pairs;
    //vector<int> types;
    QTableView* table;
private slots:
    void on_le_descripcion_returnPressed();
    void on_le_marca_returnPressed();
    void on_le_medida_returnPressed();
    void on_le_grupo_returnPressed();

    void on_le_descripcion_2_returnPressed();
    void on_cb_marca_currentIndexChanged(const QString&);
    void on_cb_medida_currentIndexChanged(const QString&);
    void on_cb_grupo_currentIndexChanged(const QString&);
private:
    void do_filter_le_articulos();
    void do_filter_cb_articulos();
};

#endif // SEARCHER_ARTICULOS_H
