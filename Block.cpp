#include <QLayout>
#include <QStackedLayout>
#include <QPushButton>

#include "Block.h"
#include "TipButton.h"

Block::Block(QWidget *parent, Qt::WindowFlags f)
    : QWidget(parent, f)
{
    QLayout *layout = new QStackedLayout(this);

    // frame
    QWidget *frame = new Frame(this);
    QWidget *help = new TipButton(this);

    //layout->addWidget(new QPushButton("qq2", this));
    layout->addWidget(frame);

    //setCentralWidget(layout);
    setLayout(layout);

}

Block::~Block()
{

}
