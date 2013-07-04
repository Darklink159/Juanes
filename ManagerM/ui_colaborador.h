#ifndef UI_COLABORADOR_H
#define UI_COLABORADOR_H

#include <QWidget>
#include <QSqlQueryModel>

namespace Ui {
class ui_colaborador;
}

class ui_colaborador : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_colaborador(QWidget *parent = 0);
    ~ui_colaborador();
    
private:
    Ui::ui_colaborador *ui;
};

#endif // UI_COLABORADOR_H
