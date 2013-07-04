#include "mainwindow.h"
#include <QApplication>
#include <QTreeView>
#include <QFileSystemModel>
#include <QSplitter>
#include <QPushButton>
#include <QLayout>
#include <QStatusBar>
#include <QToolBar>
#include "ui_mainwindow_compra.h"
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;
    //w.show();

    Ui_MainWindow_Compra test;
    test.show();
    /*
    QWidget *widget = new QWidget;

    QStatusBar *statusbar = new QStatusBar(widget);
    QToolBar *toolbar = new QToolBar(widget);
    widget->show();
    */

    //QFileSystemModel *model = new QFileSystemModel;
    //model->setRootPath(QDir::currentPath());
    /*
    QWidget *widget = new QWidget;
    QPushButton *button = new QPushButton;
    QGridLayout *layout = new QGridLayout(widget);
    layout->addWidget(button,0, 0, 1, 1);
    widget->show();
    */

    //QSplitter *splitter = new QSplitter;
    //QTreeView *tree = new QTreeView(splitter);
    //tree->setModel(model);
    //tree->show();
    return a.exec();
}
