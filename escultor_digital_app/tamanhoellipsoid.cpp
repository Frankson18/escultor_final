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
