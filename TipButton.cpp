#include "TipButton.h"

TipButton::TipButton(QWidget *parent) : QWidget(parent)
{
    setStyleSheet("background:transparent;"); // sur tous les widgets à rendre transparents
    setAttribute(Qt::WA_TranslucentBackground); // en théorie uniquement sur le widget en haut de l'arborescence à rendre transparent (le widget qui contient tous les autres)
    setWindowFlags(Qt::FramelessWindowHint); // de même
}

void TipButton::paintEvent(QPaintEvent *) {

    // size
    QRect geo = this->geometry();
    int x = geo.x();
    int y = geo.y();
    int w = geo.width();
    int h = geo.height();

    // init
    QPainter p(this);
    p.setRenderHint(QPainter::Antialiasing);

}
