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

    int larg = width() - width()%nx;
    int alt = height() - height()%ny;

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

    for(int i=0;i<nx;i++)
    {
        for(int j=0;j<ny;j++)
        {
            if(sculptor->getisOn(i,j,Dz))
            {
                brush.setColor(QColor(sculptor->getR(i,j,Dz)*255,sculptor->getG(i,j,Dz)*255,sculptor->getB(i,j,Dz)*255));
                painter.setBrush(brush);
                painter.drawRect(i*(larg/nx),j*(alt/ny),larg/nx,alt/ny);
            }
        }
    }
}

void Plotter::changeSculptor(int sx, int sy, int sz)
{
    delete sculptor;
    nx=sx;
    ny=sy;
    nz=sz;
    sculptor = new Sculptor(nx,ny,nz);
}

void Plotter::changePutBox(int dx, int dy, int dz)
{
    x1=dx;
    y1=dy;
    z1=dz;
}

void Plotter::changePutSphere(int r)
{
    RaioS=r;
}

void Plotter::changePutEllipsoid(int raioX, int raioY, int raioZ)
{
    xraios=raioX;
    yraios=raioY;
    zraios=raioZ;
}

void Plotter::changePlano(int _Dz)
{
    Dz=_Dz;
    repaint();
}

void Plotter::changeColors(int cr, int cg, int cb)
{
    r=cr;
    g=cg;
    b=cb;
}

void Plotter::goPutVoxel()
{
    putvoxel = true;
    cutvoxel = false;
    putbox = false;
    cutbox =  false;
    putsphere = false;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goCutVoxel()
{
    putvoxel = false;
    cutvoxel = true;
    putbox = false;
    cutbox =  false;
    putsphere = false;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goPutBox()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = true;
    cutbox =  false;
    putsphere = false;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goCutBox()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = false;
    cutbox =  true;
    putsphere = false;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goPutSphere()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = false;
    cutbox =  false;
    putsphere = true;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goCutSphere()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = false;
    cutbox =  false;
    putsphere = false;
    cutsphere = true;
    putellipsoid = false;
    cutellipsoid = false;
}

void Plotter::goPutEllipsoid()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = false;
    cutbox =  false;
    putsphere = false;
    cutsphere = false;
    putellipsoid = true;
    cutellipsoid = false;
}

void Plotter::goCutEllipsoid()
{
    putvoxel = false;
    cutvoxel = false;
    putbox = false;
    cutbox =  false;
    putsphere = false;
    cutsphere = false;
    putellipsoid = false;
    cutellipsoid = true;
}

void Plotter::mouseMoveEvent(QMouseEvent *event)
{
    dx=event->x();
    dy=event->y();
    int linha=width()/nx;
    int coluna=height()/ny;
    dx=(dx/linha);
    dy=(dy/coluna);

    if(putvoxel){
        sculptor->setColor(r,g,b,1);
        sculptor->putVoxel(dx,dy,Dz);
    }
    if(cutvoxel){
        sculptor->cutVoxel(dx,dy,Dz);
    }
    if(putbox){
        sculptor->setColor(r,g,b,1);
        sculptor->putBox(dx,dx+x1-1,dy,dy+y1-1,Dz,Dz+z1-1);
    }
    if(cutbox){
        sculptor->cutBox(dx,dx+x1,dy,dy+y1,Dz,Dz+z1);
    }
    if(putsphere){
        sculptor->setColor(r,g,b,1);
        sculptor->putSphere(dx,dy,Dz,RaioS);
    }
    if(cutsphere){
        sculptor->cutSphere(dx,dy,Dz,RaioS);
    }
    if(putellipsoid){
        sculptor->setColor(r,g,b,1);
        sculptor->putEllipsoid(dx,dy,Dz,xraios,yraios,zraios);
    }
    if(cutellipsoid){
        sculptor->cutEllipsoid(dx,dy,Dz,xraios,yraios,zraios);
    }
    repaint();
}

void Plotter::mousePressEvent(QMouseEvent *event)
{

    dx=event->x();
    dy=event->y();
    int linha=width()/nx;
    int coluna=height()/ny;
    dx=(dx/linha);
    dy=(dy/coluna);

    if(putvoxel){
        sculptor->setColor(r,g,b,1);
        sculptor->putVoxel(dx,dy,Dz);
    }
    if(cutvoxel){
        sculptor->cutVoxel(dx,dy,Dz);
    }
    if(putbox){
        sculptor->setColor(r,g,b,1);
        sculptor->putBox(dx,dx+x1-1,dy,dy+y1-1,Dz,Dz+z1-1);
    }
    if(cutbox){
        sculptor->cutBox(dx,dx+x1,dy,dy+y1,Dz,Dz+z1);
    }
    if(putsphere){
        sculptor->setColor(r,g,b,1);
        sculptor->putSphere(dx,dy,Dz,RaioS);
    }
    if(cutsphere){
        sculptor->cutSphere(dx,dy,Dz,RaioS);
    }
    if(putellipsoid){
        sculptor->setColor(r,g,b,1);
        sculptor->putEllipsoid(dx,dy,Dz,xraios,yraios,zraios);
    }
    if(cutellipsoid){
        sculptor->cutEllipsoid(dx,dy,Dz,xraios,yraios,zraios);
    }
    repaint();
}









