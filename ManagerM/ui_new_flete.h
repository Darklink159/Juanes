#ifndef UI_NEW_FLETE_H
#define UI_NEW_FLETE_H

#include <QWidget>

namespace Ui {
class ui_new_flete;
}

class ui_new_flete : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_flete(QWidget *parent = 0);
    ~ui_new_flete();

    void setType(int);

private slots:

    void on_pushButton_buscarTransportista_clicked();

    void on_pushButton_registrar_clicked();

    void on_pushButton_editar_clicked();

    void on_pushButton_cancelar_clicked();

private:
    Ui::ui_new_flete *ui;
};

#endif // UI_NEW_FLETE_H
