#include "lineedit.h"
#include <QCompleter>
#include <QKeyEvent>
#include <QAbstractItemView>
#include <QtDebug>
#include <QApplication>
#include <QModelIndex>
#include <QAbstractItemModel>
#include <QScrollBar>
#include <QTextCursor>
LineEdit::LineEdit(QWidget *parent)
: QLineEdit(parent), c(0)
{

}

LineEdit::~LineEdit()
{
}

void LineEdit::setCompleter(QCompleter *completer)
{
    if (c)
        QObject::disconnect(c, 0, this, 0);

    c = completer;

    if (!c)
        return;

    c->setWidget(this);
    c->setCompletionMode(QCompleter::PopupCompletion);
    c->setCaseSensitivity(Qt::CaseInsensitive);
    QObject::connect(c, SIGNAL(activated(QString)),
                     this, SLOT(insertCompletion(QString)));
}

QCompleter *LineEdit::completer() const
{
    return c;
}

void LineEdit::insertCompletion(const QString& completion)
{
    if (c->widget() != this)
        return;
   setText(completion);
}



void LineEdit::focusInEvent(QFocusEvent *e)
{
    if (c)
        c->setWidget(this);
    QLineEdit::focusInEvent(e);
}

void LineEdit::keyPressEvent(QKeyEvent *e)
{
    if (c && c->popup()->isVisible()) {
      //Ignoramos los siguientes eventos
       switch (e->key()) {
       case Qt::Key_Enter:
       case Qt::Key_Return:
       case Qt::Key_Escape:  
       case Qt::Key_Backtab:
            e->ignore();
            return; // let the completer do default behavior
       default:
           break;
       }
    }


    bool isShortcut = ((e->modifiers() & Qt::ControlModifier) && e->key() == Qt::Key_E); // CTRL+E
    if (!c || !isShortcut) // No procesamos cuando no hay completer
        QLineEdit::keyPressEvent(e);

    //Si apretamos control
    const bool ctrlOrShift = e->modifiers() & (Qt::ControlModifier | Qt::ShiftModifier);
    if (!c || (ctrlOrShift && e->text().isEmpty()))
        return;

    //Caracteres al final de la palabra
    static QString eow("~!@#$%^&*()_+{}|:\"<>?,./;'[]\\-=");
    bool hasModifier = (e->modifiers() != Qt::NoModifier) && !ctrlOrShift;
    QString completionPrefix = text();




    //Si no hay shortcut y no hay modificadores o el texto es vacio o la longitud es menor a 3 o contiene caracteres
    //no deseados, retornamos
    if (!isShortcut && (hasModifier || e->text().isEmpty()|| completionPrefix.length() < 3
                      || eow.contains(e->text().right(1)))) {

        c->popup()->hide();
        return;
    }

    if(completionPrefix.length()>=3)
    {
        if (completionPrefix != c->completionPrefix()) {
            c->setCompletionPrefix(completionPrefix);
            c->popup()->setCurrentIndex(c->completionModel()->index(0, 0));
        }
        QRect cr = cursorRect();
        cr.setWidth(c->popup()->sizeHintForColumn(0)
                    + c->popup()->verticalScrollBar()->sizeHint().width());
        c->complete(cr); // popup it up!
    }
}
