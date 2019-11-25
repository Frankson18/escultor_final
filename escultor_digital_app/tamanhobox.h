#ifndef TAMANHOBOX_H
#define TAMANHOBOX_H

#include <QDialog>

namespace Ui {
class tamanhoBox;
}

class tamanhoBox : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoBox(QWidget *parent = nullptr);
    ~tamanhoBox();

private:
    Ui::tamanhoBox *ui;
};

#endif // TAMANHOBOX_H
