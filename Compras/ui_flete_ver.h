#ifndef UI_FLETE_VER_H
#define UI_FLETE_VER_H

#include <QWidget>

namespace Ui {
class ui_flete_ver;
}

class ui_flete_ver : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_flete_ver(QWidget *parent = 0);
    ~ui_flete_ver();
    
private:
    Ui::ui_flete_ver *ui;
};

#endif // UI_FLETE_VER_H
