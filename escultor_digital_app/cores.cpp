#include "cores.h"
#include "ui_cores.h"

cores::cores(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::cores)
{
    ui->setupUi(this);
}

cores::~cores()
{
    delete ui;
}

int cores::getCorR()
{
    //ui->horizontalSlider_CorR->setMaximum();
}

int cores::getCorG()
{
    //ui->spinBoxCorG->value();
}

int cores::getCorB()
{
    //ui->spinBoxCorB->value();
}
