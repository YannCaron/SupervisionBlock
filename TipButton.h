#ifndef TIPBUTTON_H
#define TIPBUTTON_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPen>

class TipButton : public QWidget
{
    Q_OBJECT
public:
    explicit TipButton(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);

};

#endif // TIPBUTTON_H
