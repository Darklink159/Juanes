#include "selecttablestogenscript.h"
#include "ui_selecttablestogenscript.h"

#include "cppscript.h"
#include <QFileDialog>
#include <QSqlDatabase>
SelectTablesToGenScript::SelectTablesToGenScript(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::SelectTablesToGenScript)
{
    ui->setupUi(this);

    QSqlDatabase db = QSqlDatabase::database();

    foreach(QString e,db.tables())
    {
        ui->listWidget_tables->addItem(e);
    }

}

SelectTablesToGenScript::~SelectTablesToGenScript()
{
    delete ui;
}

void SelectTablesToGenScript::on_pushButton_selectAll_clicked()
{    
    ui->listWidget_tables->selectAll();
}

void SelectTablesToGenScript::on_pushButton_generate_clicked()
{

    CPPScript obj;

    QSqlDatabase db = QSqlDatabase::database();

    obj.mf_setHost(db.hostName());
    //ui->listWidget->addItem(db.hostName());
    obj.mf_setUser(db.userName());
    //ui->listWidget->addItem(db.userName());
    obj.mf_setPass(db.password());
    //ui->listWidget->addItem(db.password());
    obj.mf_setDB(db.databaseName());
    //ui->listWidget->addItem(db.databaseName());




    foreach(QListWidgetItem * it, ui->listWidget_tables->selectedItems())
    {
        obj.push_back_tableName(it->text());
        //ui->listWidget->addItem(it->text());
    }


    QFileDialog fileDialog;
    fileDialog.setFileMode(QFileDialog::DirectoryOnly);
    //fileDialog.setOption(QFileDialog::ShowDirsOnly, true);
    int opt = fileDialog.exec();

    ui->lineEdit_directory->setText(fileDialog.directory().absolutePath());
    obj.setDirFolder(ui->lineEdit_directory->text().toStdString());
    //ui->listWidget->addItem(ui->lineEdit_directory->text());


    obj.generateClass_withinDB();
}
