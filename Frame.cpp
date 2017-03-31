#include "Frame.h"

Frame::Frame(QWidget *parent) : QWidget(parent)
{

}

void paintFill(QPainter* p, int x, int y, int w, int h, int r) {
    QLinearGradient gradient(0, y, 0, h);
        gradient.setColorAt(0, QColor(0, 204, 102));
        gradient.setColorAt(0.5, QColor(0, 123, 62));

        // draw block
    QPainterPath path;
        path.addRoundedRect(QRectF(x, y, w, h), r, r);
        p->fillPath(path, QBrush(gradient));
}

void paintLine(QPainter* p, int x, int y, int w, int h, int r) {
    int m = 1;
    int s = 1;

    QPainterPath path;
    path.addRoundedRect(QRectF(x + m, y + m, w - m * 2, h - m * 2), r - m, r - m);

    QLinearGradient gradient(0, y, 0, h);
        gradient.setColorAt(0, QColor(255, 255, 255, 255));
        gradient.setColorAt(1, QColor(255, 255, 255, 0));

    QPen pen(QBrush(gradient), s);
    p->setPen(pen);
    p->drawPath(path);

}

void paintSeparationLine(QPainter* p, int y, int w, int h) {
    float s = 0.5;

    p->setCompositionMode(QPainter::CompositionMode_Multiply);

    QLinearGradient gradient(0, y, 0, h);
        gradient.setColorAt(0, QColor(0, 0, 0, 0));
        gradient.setColorAt(0.4, QColor(0, 0, 0, 255));
        gradient.setColorAt(0.6, QColor(0, 0, 0, 255));
        gradient.setColorAt(1, QColor(0, 0, 0, 0));

    QPen pen(QBrush(gradient), s);
    p->setPen(pen);
    p->drawLine(w - 50, y, w - 50, h);

    p->setCompositionMode(QPainter::CompositionMode_Clear);

}

void Frame::paintEvent(QPaintEvent *) {

    // size
    QRect geo = this->geometry();
    int x = geo.x();
    int y = geo.y();
    int w = geo.width();
    int h = geo.height();
    int r = 5;


    // init
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

    paintFill(&p, x, y, w, h, r);
    paintLine(&p, x, y, w, h, r);
    paintSeparationLine(&p, y, w, h);

}

