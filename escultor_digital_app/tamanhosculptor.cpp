#include "tamanhosculptor.h"
#include "ui_tamanhosculptor.h"
TamanhoSculptor::TamanhoSculptor(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::TamanhoSculptor)
{
    ui->setupUi(this);
}

TamanhoSculptor::~TamanhoSculptor()
{
    delete ui;
}

int TamanhoSculptor::getX()
{
    return ui->spinBoxX->value();
}

int TamanhoSculptor::getY()
{
    return ui->spinBoxY->value();
}

int TamanhoSculptor::getZ()
{
    return ui->spinBoxZ->value();
}
