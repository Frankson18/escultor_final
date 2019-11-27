#ifndef TAMANHOSPHERE_H
#define TAMANHOSPHERE_H

#include <QDialog>

/**
 * @brief The tamanhoSphere class
 * a classe responsável pela caixa de diálogo
 * que é aberta quando o usuário clica no método
 * putSphere onde o usuário pode definir o raio
 * da esfera.
 * @details 
 * função getRaio() retorna o valor inteiro do raio.
 */

namespace Ui {
class tamanhoSphere;
}

class tamanhoSphere : public QDialog
{
    Q_OBJECT

public:
    explicit tamanhoSphere(QWidget *parent = nullptr);
    ~tamanhoSphere();
    int getRaio();

private:
    Ui::tamanhoSphere *ui;
};

#endif // TAMANHOSPHERE_H
