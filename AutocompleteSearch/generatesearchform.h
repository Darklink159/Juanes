#ifndef GENERATESEARCHFORM_H
#define GENERATESEARCHFORM_H

#include <QWidget>

namespace Ui {
class GenerateSearchForm;
}

class GenerateSearchForm : public QWidget
{
    Q_OBJECT
    
public:
    explicit GenerateSearchForm(QWidget *parent = 0);
    ~GenerateSearchForm();
    
private slots:
    void on_cb_table_currentIndexChanged(const QString &table_name);

    void on_btn_generar_clicked();

private:
    Ui::GenerateSearchForm *ui;

    void loadListWithColumnsFromTable(const QString  & table_name);
    void generateFormWithSelectedColumns(QStringList list,QString filePath);
    void generateHeaderWithSelectedColumns(QStringList list,QString filePath);
    void generateCPPWithSelectedColumns(QStringList list,QString filePath);

};

#endif // GENERATESEARCHFORM_H
