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
    int x1,y1,z1;
    int raioE, RaioS;
    int xcenter,ycenter,zcenter;

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void setX(int);
    void setY(int);
    void setZ(int);
    void setBoxX(int);
    void setBoxY(int);
    void setBoxZ(int);
    void setRaioX(int);
    void setRaioY(int);
    void setRaioZ(int);
    void setRaioE(int);
    void setRaio(int);
    Sculptor *sculptor;

signals:

public slots:
};

#endif // PLOTTER_H
