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
    for (int i=1;i<=this->ny;i++) {
        contx=0;
        for (int j=1;j<=this->nx;j++) {
            painter.drawRect(contx,conty,width()/this->nx,height()/this->ny);
            contx+=(float)(width()/this->nx);
        }
        conty+=(float)(height()/this->ny);
    }


}

void Plotter::setX(int _nx)
{
    this->nx = _nx;
}

void Plotter::setY(int _ny)
{
    this->ny = _ny;
}

void Plotter::setZ(int _nz)
{
    this->nz = _nz;
}
