#include "plotter.h"
#include <QPainter>
#include <QBrush>
#include <QPen>


Plotter::Plotter(QWidget *parent) : QWidget(parent)
{
    sculptor= new Sculptor(10,10,10);
}

void Plotter::paintEvent(QPaintEvent *event)
{

    QPainter painter(this);
    QBrush brush;
    QPen pen;

    brush.setColor(QColor(255,255,255));
    brush.setStyle(Qt::SolidPattern);
    pen.setColor(QColor(0,0,0));
    pen.setWidth(1);
    pen.setStyle(Qt::SolidLine);
    painter.setPen(pen);
    painter.setBrush(brush);

    int contx=0,conty=0;
    for (int i=1;i<=ny;i++) {
        contx=0;
        for (int j=1;j<=nx;j++) {
            painter.drawRect(contx,conty,width()/nx,height()/ny);
            contx+=(float)(width()/nx);
        }
        conty+=(float)(height()/ny);
    }


}

void Plotter::setX(int _nx)
{
    nx = _nx;
}

void Plotter::setY(int _ny)
{
    ny = _ny;
}

void Plotter::setZ(int _nz)
{
    nz = _nz;
}

void Plotter::setBoxX(int _x1)
{
    x1 = _x1;
}

void Plotter::setBoxY(int _y1)
{
    y1 = _y1;
}

void Plotter::setBoxZ(int _z1)
{
    z1 = _z1;
}

void Plotter::setRaioX(int _xcenter)
{
    xcenter = _xcenter;
}

void Plotter::setRaioY(int _ycenter)
{
    ycenter = _ycenter;
}

void Plotter::setRaioZ(int _zcenter)
{
    zcenter = _zcenter;
}

void Plotter::setRaioE(int _raioE)
{
    raioE = _raioE;
}

void Plotter::setRaio(int _RaioS)
{
    RaioS = _RaioS;
}




