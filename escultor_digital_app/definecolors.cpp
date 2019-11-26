#include "definecolors.h"
#include "ui_definecolors.h"

definecolors::definecolors(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::definecolors)
{
    ui->setupUi(this);
}

definecolors::~definecolors()
{
    delete ui;
}

int definecolors::getColorR()
{
    ui->horizontalSlider_CorR_4->value();
}

int definecolors::getColorG()
{
    ui->horizontalSlider_CorG_4->value();
}

int definecolors::getColorB()
{
    ui->horizontalSlider_CorB_4->value();
}
