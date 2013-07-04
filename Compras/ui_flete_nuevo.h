#ifndef UI_FLETE_NUEVO_H
#define UI_FLETE_NUEVO_H

#include <QWidget>

namespace Ui {
class ui_flete_nuevo;
}

class ui_flete_nuevo : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_flete_nuevo(QWidget *parent = 0);
    ~ui_flete_nuevo();
    
private:
    Ui::ui_flete_nuevo *ui;
};

#endif // UI_FLETE_NUEVO_H
