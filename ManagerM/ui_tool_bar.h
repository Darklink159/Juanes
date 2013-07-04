#ifndef UI_TOOL_BAR_H
#define UI_TOOL_BAR_H

#include <QWidget>

#include "share_include.h"

namespace Ui {
class ui_tool_bar;
}

class ui_tool_bar : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_tool_bar(QWidget *parent = 0);
    ~ui_tool_bar();
    
private slots:
    void on_pushButton_home_clicked();

    void on_pushButton_ventas_clicked();

    void on_pushButton_opciones_clicked();

    void on_pushButton_colaborador_clicked();

    void on_pushButton_articulos_clicked();

    void on_pushButton_compras_clicked();
    void on_pushButton_cliente_clicked();

private:
    Ui::ui_tool_bar *ui;
};

#endif // UI_TOOL_BAR_H
