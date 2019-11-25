#include "tamanhobox.h"
#include "ui_tamanhobox.h"

tamanhoBox::tamanhoBox(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::tamanhoBox)
{
    ui->setupUi(this);
}

tamanhoBox::~tamanhoBox()
{
    delete ui;
}

int tamanhoBox::getBoxX()
{
    ui->spinBoxBoxX->value();
}

int tamanhoBox::getBoxY()
{
    ui->spinBoxBoxY->value();
}

int tamanhoBox::getBoxZ()
{
    ui->spinBoxBoxZ->value();
}
