#ifndef BLOCK_H
#define BLOCK_H

#include <QObject>
#include <QWidget>
#include <QPainter>
#include <QPen>

class Frame : public QWidget
{
    Q_OBJECT
public:
    explicit Frame(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *);

signals:

public slots:
};

#endif // BLOCK_H
