#ifndef UI_FLETE_H
#define UI_FLETE_H

#include <QWidget>

namespace Ui {
class ui_flete;
}

class ui_flete : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_flete(QWidget *parent = 0);
    ~ui_flete();
    
private:
    Ui::ui_flete *ui;
};

#endif // UI_FLETE_H
