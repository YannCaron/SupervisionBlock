#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "Frame.h"

class Block : public QWidget
{
    Q_OBJECT

public:
    Block(QWidget *parent = 0, Qt::WindowFlags f = 0);
    ~Block();
};

#endif // MAINWINDOW_H
