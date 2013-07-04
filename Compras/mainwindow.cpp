#include "mainwindow.h"
#include "ui_mainwindow.h"

#include "ui_mainwindow_compra.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //toolbar_basic = new ui_toolbar_basic;

    //this->setCentralWidget(toolbar_basic);


    //ui_toolbar_basic *w = new ui_toolbar_basic;
    //w->show();

    /*
    QFileSystemModel *model = new QFileSystemModel;
    model->setRootPath(QDir::currentPath());
    ui->treeView->setModel(model);
    */

    //ui->treeWidget->addTopLevelItem();
    /*
    QWidget *widget = new QWidget;
    //QMdiArea *mdi  = new QMdiArea(widget);

    widget->setGeometry(0, 0, 300, 300);
    widget->setStyleSheet("background-color: rgb(85, 170, 127);");
    //mdi->resize(widget->size());
    ui_pedido_ver *w = new ui_pedido_ver(widget);
*/
    //widget->show();
/*
    QMdiArea *mdi = new QMdiArea(this);
    mdi->setStyleSheet("background-color: rgb(85, 170, 127);");
    mdi->move(0, 20);
    mdi->resize(this->size());
    QLineEdit *lineE = new QLineEdit(this);
    lineE->move(10, 50);
    //ui_pedido_ver *w = new ui_pedido_ver(this);
    //w->move(0, 30);
*/
    //QMainWindow *w = new QMainWindow;

    //QPushButton *pb = new QPushButton(this);
    //this->setParent(pb);
    //w->show();
    //pb->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}

/*
void MainWindow::on_pushButton_pedido_clicked()
{
    ui_pedido *w = new ui_pedido;
    w->show();
}

void MainWindow::on_pushButton_factura_clicked()
{
    ui_factura *w = new ui_factura;
    w->show();
}

void MainWindow::on_pushButton_gremisionr_clicked()
{
    ui_gremisionr *w = new ui_gremisionr;
    w->show();
}

void MainWindow::on_pushButton_flete_clicked()
{
    ui_flete *w = new ui_flete;
    w->show();
}
*/
