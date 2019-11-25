#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include "sculptor.h"

class Plotter : public QWidget
{
    Q_OBJECT

private:
    int nx=10,ny=10,nz=10;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setX(int);
    void setY(int);
    void setZ(int);
    Sculptor *sculptor;

signals:

public slots:
};

#endif // PLOTTER_H
