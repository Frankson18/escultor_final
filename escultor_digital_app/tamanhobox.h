#ifndef TAMANHOBOX_H
#define TAMANHOBOX_H

#include <QDialog>
#include "plotter.h"

namespace Ui {
class tamanhoBox;
}

class tamanhoBox : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoBox(QWidget *parent = nullptr);
    ~tamanhoBox();
    int getBoxX();
    int getBoxY();
    int getBoxZ();

private:
    Ui::tamanhoBox *ui;
};

#endif // TAMANHOBOX_H
