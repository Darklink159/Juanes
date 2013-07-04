#include "ui_tipo_cambio_dolar.h"
#include "ui_ui_tipo_cambio_dolar.h"

#include <QDebug>

ui_tipo_cambio_dolar::ui_tipo_cambio_dolar(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::ui_tipo_cambio_dolar)
{
    ui->setupUi(this);

    model = new QSqlTableModel(ui->tableView);
    model->setTable("e_cambio_dolar_sistema");
    model->select();
    model->setHeaderData(2, Qt::Horizontal, tr("Cambio"));
    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(1);
    //ui->tableView->hideColumn(3);
    ui->tableView->show();
}

ui_tipo_cambio_dolar::~ui_tipo_cambio_dolar()
{
    delete ui;
}

void ui_tipo_cambio_dolar::setMonth(int month)
{

}

void ui_tipo_cambio_dolar::setDate(const QDate &date)
{
    //md_date = date;
    ui->dateEdit->setDate(date);
}

void ui_tipo_cambio_dolar::select()
{
    on_dateEdit_dateChanged(ui->dateEdit->date());
    /*
    model->select();
    model->setHeaderData(2, Qt::Horizontal, tr("Cambio"));
    ui->tableView->setModel(model);
    ui->tableView->hideColumn(0);
    ui->tableView->hideColumn(1);
    ui->tableView->hideColumn(3);
    ui->tableView->show();
    */
}

void ui_tipo_cambio_dolar::closeEvent(QCloseEvent* e)
{
    emit closing();
}

void ui_tipo_cambio_dolar::on_dateEdit_dateChanged(const QDate &date)
{
    //QDate local_date = ui->dateEdit->date();
    QString month, year;
    month.setNum(date.month());
    year.setNum(date.year());
    model->setFilter("MONTH(fecha)="+month+" && YEAR(fecha)="+year+"");
    qDebug()<<"MONTH(fecha)="+month+" && YEAR(fecha)="+year+""<<endl;
    //model->setFilter("fecha=06");
    model->select();
}

void ui_tipo_cambio_dolar::on_pushButton_new_clicked()
{

}

void ui_tipo_cambio_dolar::on_pushButton_edit_clicked()
{

}
