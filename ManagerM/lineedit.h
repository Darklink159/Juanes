#ifndef TEXTEDIT_H
#define TEXTEDIT_H

#include <QLineEdit>

class QCompleter;

class LineEdit : public QLineEdit
{
    Q_OBJECT

public:
    LineEdit(QWidget *parent = 0);
    ~LineEdit();

    void setCompleter(QCompleter *c);
    QCompleter *completer() const;

protected:
    void keyPressEvent(QKeyEvent *e);
    void focusInEvent(QFocusEvent *e);

private slots:
    void insertCompletion(const QString &completion);



private:
    QCompleter *c;
};
#endif // TEXTEDIT_H
