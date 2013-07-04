#ifndef UI_MAIN_H
#define UI_MAIN_H

#include <QMainWindow>


namespace Ui {
class ui_main;
}

class ui_main : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ui_main(QWidget *parent = 0);
    ~ui_main();
    
private slots:
    void on_actionAcerca_de_ManagerM_triggered();

    void on_actionPantalla_Completa_triggered();

    void on_actionSalir_triggered();

    void on_actionCerrar_Sesion_triggered();

    void on_actionHome_triggered();

    void on_actionVentas_triggered();

    void on_actionArticulos_triggered();

private:
    Ui::ui_main *ui;
protected:

    void keyReleaseEvent(QKeyEvent *);
    void closeEvent(QCloseEvent * ev);

private:

};

#endif // UI_MAIN_H
