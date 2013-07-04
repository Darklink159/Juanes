#ifndef UI_GREMISIONR_NUEVO_H
#define UI_GREMISIONR_NUEVO_H

#include <QWidget>

namespace Ui {
class ui_gremisionr_nuevo;
}

class ui_gremisionr_nuevo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_gremisionr_nuevo(QWidget *parent = 0);
    ~ui_gremisionr_nuevo();
    
private:
    Ui::ui_gremisionr_nuevo *ui;
};

#endif // UI_GREMISIONR_NUEVO_H
