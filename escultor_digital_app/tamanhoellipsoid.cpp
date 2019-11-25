#include "tamanhoellipsoid.h"
#include "ui_tamanhoellipsoid.h"

tamanhoEllipsoid::tamanhoEllipsoid(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tamanhoEllipsoid)
{
    ui->setupUi(this);
}

tamanhoEllipsoid::~tamanhoEllipsoid()
{
    delete ui;
}

int tamanhoEllipsoid::getRaioX()
{
    ui->spinBoxElipseX->value();
}

int tamanhoEllipsoid::getRaioY()
{
    ui->spinBoxElipseY->value();
}

int tamanhoEllipsoid::getRaioZ()
{
    ui->spinBoxELipseZ->value();
}

int tamanhoEllipsoid::getRaioE()
{
    ui->spinBoxElipseR->value();
}
