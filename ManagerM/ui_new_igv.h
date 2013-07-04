#ifndef UI_NEW_IGV_H
#define UI_NEW_IGV_H

#include <QWidget>

namespace Ui {
class ui_new_igv;
}

class ui_new_igv : public QWidget
{
    Q_OBJECT
    
public:
    explicit ui_new_igv(QWidget *parent = 0);
    ~ui_new_igv();
    
private:
    Ui::ui_new_igv *ui;
};

#endif // UI_NEW_IGV_H
