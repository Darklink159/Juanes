#ifndef UI_TOOLBAR_BASIC_H
#define UI_TOOLBAR_BASIC_H

#include <QMainWindow>

namespace Ui {
class ui_toolbar_basic;
}

class ui_toolbar_basic : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit ui_toolbar_basic(QWidget *parent = 0);
    ~ui_toolbar_basic();
    
private:
    Ui::ui_toolbar_basic *ui;
};

#endif // UI_TOOLBAR_BASIC_H
