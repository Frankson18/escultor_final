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
