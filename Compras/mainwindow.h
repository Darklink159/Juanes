#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMdiArea>
#include <QLineEdit>
#include <QTreeView>
#include <QFileSystemModel>
#include <QSplitter>

#include "ui_pedido.h"
#include "ui_factura.h"
#include "ui_flete.h"
#include "ui_gremisionr.h"
#include "ui_pedido_ver.h"
#include "ui_toolbar_basic.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();
    
private slots:
    /*
    void on_pushButton_pedido_clicked();

    void on_pushButton_factura_clicked();

    void on_pushButton_gremisionr_clicked();

    void on_pushButton_flete_clicked();
    */
private:
    Ui::MainWindow *ui;
    ui_toolbar_basic *toolbar_basic;

};

#endif // MAINWINDOW_H
