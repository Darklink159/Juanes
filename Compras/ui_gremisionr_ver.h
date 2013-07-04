#ifndef UI_GREMISIONR_VER_H
#define UI_GREMISIONR_VER_H

#include <QWidget>

namespace Ui {
class ui_gremisionr_ver;
}

class ui_gremisionr_ver : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_gremisionr_ver(QWidget *parent = 0);
    ~ui_gremisionr_ver();
    
private:
    Ui::ui_gremisionr_ver *ui;
};

#endif // UI_GREMISIONR_VER_H
