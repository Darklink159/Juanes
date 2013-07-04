#ifndef UI_GREMISIONR_H
#define UI_GREMISIONR_H

#include <QWidget>

namespace Ui {
class ui_gremisionr;
}

class ui_gremisionr : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_gremisionr(QWidget *parent = 0);
    ~ui_gremisionr();
    
private:
    Ui::ui_gremisionr *ui;
};

#endif // UI_GREMISIONR_H
