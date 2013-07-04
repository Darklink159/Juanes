#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>
#include <QFileDialog>
#include <QDebug>

#include "managerprofile.h"
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
    void on_pushButton_examinar_clicked();

    void on_pushButton_aceptar_clicked();

    void on_pushButton_salir_clicked();

    void dialogExaminar_fileSelected(const QString &);
private:
    Ui::MainWindow *ui;
    QString str_proFile;

    QFileDialog *dialogExaminar;
    void logParser();
};

#endif // MAINWINDOW_H
