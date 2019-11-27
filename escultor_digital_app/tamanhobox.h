#ifndef TAMANHOBOX_H
#define TAMANHOBOX_H

#include <QDialog>
#include "plotter.h"

/**
 * @brief The tamanhoBox class
 * a classe responsável pela caixa de diálogo
 * que é aberta quando o usuário clica no método
 * putBox onde o usuário pode definir o tamanho
 * da caixa nos eixos x,y,z.
 * @details 
 * getBoxX() - retorna o valor inteiro do tamanho no eixo x.
 * getBoxY() - retorna o valor inteiro do tamanho no eixo y.
 * getBoxZ() - retorna o valor inteiro do tamanho no eixo z.
 */

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
