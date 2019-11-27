#ifndef PLOTTER_H
#define PLOTTER_H

#include <QWidget>
#include <QAction>
#include "sculptor.h"
#include <QMouseEvent>
#include <QString>
#include <QFileDialog>

/**
 * @brief The Plotter class
 * a classe responsável por todas as funções 
 * de plotagem dos parâmetros e ações do usuário
 * ao desenhar. 
 */

class Plotter : public QWidget
{
    Q_OBJECT

private:

public:
    explicit Plotter(QWidget *parent = nullptr);
    void paintEvent(QPaintEvent *event);
    void changeSculptor(int sx,int sy, int sz);
    void changePutBox(int dx, int dy, int dz);
    void changePutSphere(int r);
    void changePutEllipsoid(int raioX, int raioY, int raioZ);
    void changePlano(int _Dz);
    void changeColors(int cr, int cg, int cb);
    void goPutVoxel();
    void goCutVoxel();
    void goPutBox();
    void goCutBox();
    void goPutSphere();
    void goCutSphere();
    void goPutEllipsoid();
    void goCutEllipsoid();
    void mouseMoveEvent(QMouseEvent *event);
    void mousePressEvent(QMouseEvent *event);

    Sculptor *sculptor;
    int dx=0, dy=0, Dz=0;
    float r=0,g=0,b=0;
    int nx=10,ny=10,nz=10;
    int x1=0,y1=0,z1=0;
    int RaioS=0;
    int xraios=0,yraios=0,zraios=0;
    bool putvoxel=false;
    bool cutvoxel=false;
    bool putbox=false;
    bool cutbox=false;
    bool putsphere=false;
    bool cutsphere=false;
    bool putellipsoid=false;
    bool cutellipsoid= false;
signals:

public slots:
};

#endif // PLOTTER_H
