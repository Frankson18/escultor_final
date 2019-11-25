#include "tamanhosphere.h"
#include "ui_tamanhosphere.h"

tamanhoSphere::tamanhoSphere(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tamanhoSphere)
{
    ui->setupUi(this);
}

tamanhoSphere::~tamanhoSphere()
{
    delete ui;
}

int tamanhoSphere::getRaio()
{
    ui->spinBoxEsperaR->value();
}
