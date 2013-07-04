#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    dialogExaminar = new QFileDialog;
    connect(dialogExaminar, SIGNAL(fileSelected(QString)), this, SLOT(dialogExaminar_fileSelected(QString)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_examinar_clicked()
{
    dialogExaminar->setNameFilter("*.pro");
    dialogExaminar->show();
}

void MainWindow::on_pushButton_aceptar_clicked()
{
    QString str = ui->lineEdit_proFile->text();

    if(str == "")
    {
        int ret;
        QMessageBox *msgBox = new QMessageBox;

        QString str_warning = "No hay ningún un archivo seleccionado.";
        msgBox->setIcon(QMessageBox::Information);
        msgBox->setWindowTitle("Confirmar salir");
        //msgBox->setWindowIcon(QIcon(":/new/Remove-Male-User.png"));

        msgBox->setText(str_warning);
        msgBox->setStandardButtons(QMessageBox::Ok);

        msgBox->setButtonText(QMessageBox::Ok, "Aceptar");
        ret = msgBox->exec();

        switch(ret)
        {
        case QMessageBox::Ok:
            msgBox->close();
            break;
        default:
            break;
        }
        return;
    }

    int ret;
    QMessageBox *msgBox = new QMessageBox;

    QString str_warning = "¿Esta seguro que desea aplicar la aplicación al proyecto?";
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar aceptar");
    //msgBox->setWindowIcon(QIcon(":/new/Remove-Male-User.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    //msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Ok, "Aceptar");
    msgBox->setButtonText(QMessageBox::Cancel, "No, gracias");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Ok:
        logParser();
        msgBox->close();
        break;
    case QMessageBox::Cancel:
        return;
        break;
    default:
        break;
    }


}

void MainWindow::on_pushButton_salir_clicked()
{
    int ret;
    QMessageBox *msgBox = new QMessageBox;

    QString str_warning = "¿Esta seguro que desea salir?";
    msgBox->setIcon(QMessageBox::Warning);
    msgBox->setWindowTitle("Confirmar salir");
    //msgBox->setWindowIcon(QIcon(":/new/Remove-Male-User.png"));

    msgBox->setText(str_warning);
    msgBox->setStandardButtons(QMessageBox::Ok | QMessageBox::Cancel);
    //msgBox->setDefaultButton(QMessageBox::Save);
    msgBox->setButtonText(QMessageBox::Ok, "Salir");
    msgBox->setButtonText(QMessageBox::Cancel, "No, gracias");
    ret = msgBox->exec();

    switch(ret)
    {
    case QMessageBox::Ok:
        this->close();
        break;
    case QMessageBox::Cancel:
        return;
        break;
    default:
        break;
    }
}

void MainWindow::dialogExaminar_fileSelected(const QString &str)
{
    //str_proFile = str;
    //qDebug()<<str_proFile<<endl;
    ui->lineEdit_proFile->setText(str);
    qDebug()<<ui->lineEdit_proFile->text()<<endl;
}

void MainWindow::logParser()
{
    ManagerProFile obj(ui->lineEdit_proFile->text());
    obj.processProFile();
}
