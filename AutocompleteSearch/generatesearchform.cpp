#include "generatesearchform.h"
#include "ui_generatesearchform.h"
#include <QSqlDatabase>
#include <QSqlTableModel>
#include <QDebug>
#include "searchform.h"
#include <QFile>
#include <QFileDialog>
GenerateSearchForm::GenerateSearchForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::GenerateSearchForm)
{
    ui->setupUi(this);
    QSqlDatabase db = QSqlDatabase::database();

    foreach(QString e,db.tables())
    {
        ui->cb_table->addItem(e);
    }

}

GenerateSearchForm::~GenerateSearchForm()
{


    delete ui;
}

void GenerateSearchForm::on_cb_table_currentIndexChanged(const QString &table_name)
{
    loadListWithColumnsFromTable(table_name);
}

void GenerateSearchForm::loadListWithColumnsFromTable(const QString &table_name)
{
    //Removemos los elementos antes de insertar
    ui->list_columns->clear();

    QSqlTableModel model;
    model.setTable(table_name);
   // model.select();

    //Insertamos los campos de la tabla
    for(int i=0;i<model.columnCount();i++)
    {
        QString columnName = model.headerData(i,Qt::Horizontal,Qt::DisplayRole).toString();
        ui->list_columns->addItem(columnName);
    }
}

void GenerateSearchForm::generateFormWithSelectedColumns(QStringList list,QString filePath)
{
    QFile fileIn1("header.txt");
    QFile fileIn2("end.txt");


    QFile file(filePath+".ui");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"No se pudo crear el archivo";
        return;
    }

    if (!fileIn1.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"No se pudo abrir el archivo head.txt";
        return;
    }

    if (!fileIn2.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        qDebug()<<"No se pudo abrir el archivo end.txt";
        return;
    }


    QFileInfo fileInfo(file);
    QString fileName = fileInfo.baseName();



    QTextStream in(&fileIn1);
    QTextStream out(&file);

    out<<"<?xml version=\"1.0\" encoding=\"UTF-8\"?>"<<endl;
    out<<"<ui version=\"4.0\">"<<endl;
    out<<"<class>"<<fileName<<"</class>"<<endl;
    out<<"<widget class=\"QWidget\" name=\""<<fileName<<"\">"<<endl;


    while (!in.atEnd())
    {
          QString line = in.readLine();

           out<<line<<endl;
    }

    fileIn1.close();
    //Procesamos
    int tam = list.size();

    for(int i=1;i<=tam;i++)
    {
        int index = i-1;
        out<<"<item row=\""<<i<<"\" column =\"0\">"<<endl;

        out<< "<widget class=\"QLabel\" name=\"l_"<<list.at(index)<<"\">"<<endl;
        out<<"<property name=\"text\">"<<endl;
        out<<"<string>"<<list.at(index)<<"</string>"<<endl;
        out<< "</property>"<<endl;
        out<<"</widget>"<<endl;

        out<<"</item>"<<endl;

        out<<"<item row=\""<<i<<"\" column=\"1\">"<<endl;
        out<<"<widget class=\"LineEdit\" name=\"le_"<<list.at(index)<<"\"/>"<<endl;
        out<<"</item>"<<endl;

    }


    in.setDevice(&fileIn2);

    while (!in.atEnd())
    {
          QString line = in.readLine();
           out<<line<<endl;
    }






}

void GenerateSearchForm::generateHeaderWithSelectedColumns(QStringList list, QString filePath)
{
    QFile file(filePath+".h");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"No se pudo crear el archivo";
        return;
    }

    QFileInfo fileInfo(file);
    QString fileName = fileInfo.baseName();

     QTextStream out(&file);

    out<<"#ifndef "<<fileName<<"_H"<<endl;
    out<<"#define "<<fileName<<"_H"<<endl;

    out<<"#include <QWidget>"<<endl;
    out<<"#include <QCompleter>"<<endl;
    out<<"#include <QSqlRelationalTableModel>"<<endl;
    out<<"namespace Ui {"<<endl;
    out<<"\tclass "<<fileName<<";"<<endl;
    out<<"}"<<endl;

    out<<"class "<<fileName<<" : public QWidget"<<endl;
    out<<"{"<<endl;
    out<<"\tQ_OBJECT"<<endl;

    out<<"public:"<<endl;
    out<<"\texplicit "<<fileName<<"(QWidget *parent = 0);"<<endl;
    out<<"\t~"<<fileName<<"();"<<endl;

    out<<"private slots:"<<endl;
    foreach(QString columnName,list)
    {
        out<<"\tvoid on_le_"+columnName+"_editingFinished();"<<endl;
    }
    out<<"private:"<<endl;
    out<<"\tUi::"<<fileName <<" *ui;"<<endl;


    out<<"\tQString table_name;"<<endl;

    out<<"\tQSqlRelationalTableModel * table_model;"<<endl;

    out<<"\tvoid refreshTableView();"<<endl;

    out<<"};"<<endl;

    out<<"#endif // "<<fileName<<"_H"<<endl;

}

void GenerateSearchForm::generateCPPWithSelectedColumns(QStringList list, QString filePath)
{

    QFile file(filePath+".cpp");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
    {
        qDebug()<<"No se pudo crear el archivo";
        return;
    }

    QFileInfo fileInfo(file);
    QString fileName = fileInfo.baseName();
     QTextStream out(&file);

    out<<"#include \""<<fileName<<".h\""<<endl;
    out<<"#include \"ui_"<<fileName<<".h\""<<endl;
    out<<"#include <QStringListModel>"<<endl;
    out<<fileName<<"::"<<fileName<<"(QWidget *parent) :"<<endl;
    out<<"QWidget(parent),"<<endl;
    out<<"ui(new Ui::"<<fileName<<")"<<endl;
    out<<"{"<<endl;
    out<<"\tui->setupUi(this);"<<endl;

    out<<"\ttable_name = \""<<ui->cb_table->currentText()<<"\";"<<endl;

    for(int i=0;i<list.size();i++)
    {
        out<<"\tQCompleter * c"<<i<<" = new QCompleter(this);"<<endl;
        out<<"\tQStringList list"<<i<<"= SYSTEM->getListOfValues(table_name,\""<<list.at(i)<<"\") ;"<<endl;

        out<<"\tQStringListModel * model"<< i<<"= new QStringListModel(this);"<<endl;
        out<<"\tmodel"<<i<<"->setStringList(list"<<i<<");"<<endl;

        out<<"\tc"<<i<<"->setModelSorting(QCompleter::CaseInsensitivelySortedModel);"<<endl;
        out<<"\tc"<<i<<"->setCaseSensitivity(Qt::CaseInsensitive);"<<endl;
        out<<"\tc"<<i<<"->setWrapAround(false);"<<endl;
        out<<"\tc"<<i<<"->setModel(model"<<i<<");"<<endl;


        out<<"\tui->le_"<<list.at(i)<<"->setCompleter(c"<<i<<");"<<endl;

        out<<endl;
    }



    out<< "\ttable_model = new QSqlRelationalTableModel();"<<endl;
    out<<"\ttable_model->setTable(table_name);"<<endl;

   out<<"\ttable_model->select();"<<endl;

   out<<"\tui->tableView->setModel(table_model);"<<endl;


    out<<"}"<<endl;

    out<<"void "<<fileName<<"::refreshTableView()"<<endl;
    out<<"{"<<endl;
    out<<"\tQString filtro;"<<endl;
     out<<"\tbool primero = true;"<<endl;

        foreach(QString columnName,list)
        {
            out<<"\tif(!ui->le_"+columnName+"->text().isEmpty())"<<endl;
            out<<"\t{"<<endl;
            out<<" \t\tif(primero)"<<endl;
            out<<"\t\t{"<<endl;
            out<<"\t\t\tprimero = false;"<<endl;
            out<<"\t\t}"<<endl;
            out<<"\t\telse"<<endl;
            out<<"\t\t{"<<endl;
            out<<"\t\t\tfiltro+=\" AND \";"<<endl;
            out<<"\t\t}"<<endl;

            out<<"\tfiltro+=\""+columnName+"='\"+ui->le_"+columnName+"->text()+\"'\";"<<endl;
            out<<"\t}"<<endl;



        }

        out<< "\ttable_model->setFilter(filtro);"<<endl;
        out<<"\ttable_model->select();"<<endl;
    out<<"}"<<endl;

    foreach(QString columnName,list)
    {
        out<<"void "<<fileName<<"::on_le_"+columnName+"_editingFinished()"<<endl;
        out<<"{"<<endl;
            out<<"\trefreshTableView();"<<endl;
        out<<"}"<<endl;

    }

    out<<fileName<<"::~"<<fileName<<"()"<<endl;
    out<<"{"<<endl;
    out<<"\tdelete ui;"<<endl;
    out<<"}"<<endl;


}

void GenerateSearchForm::on_btn_generar_clicked()
{
    QStringList list;
    foreach(QListWidgetItem * it,ui->list_columns->selectedItems())
    {
        list<<it->text();
    }

    QString filePath = QFileDialog::getSaveFileName();

    if(!filePath.isNull())
    {

        generateFormWithSelectedColumns(list,filePath);
        generateHeaderWithSelectedColumns(list,filePath);
        generateCPPWithSelectedColumns(list,filePath);

    }

      //  SearchForm * formSearch = new SearchForm();
        //formSearch->setAttribute(Qt::WA_DeleteOnClose);
        //formSearch->show();

     //close();

}
