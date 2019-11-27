#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include "plotter.h"
#include "tamanhosculptor.h"
#include "tamanhobox.h"
#include "tamanhosphere.h"
#include "tamanhoellipsoid.h"
#include "definecolors.h"

#include "QMessageBox"

/**
 * @brief The MainWindow class
 * a classe responsável pela tela principal
 * do projeto. Nela há as conexões devido as
 * ações que podem acontecer com a interação
 * do usuário. Possui as funções responsáveis
 * pela interação e mudança dos parâmetros 
 * fornecidos pelo usuário para o desenho das
 * figuras geométricas.
 * @details
 * d - declaração da caixa de diálogo responsável pelo tamanho do scultor.
 * dialog_pb - declaração da caixa de diálogo responsável pelo tamanho do box.
 * dialog_ps - declaração da caixa de diálogo responsável pelo tamanho da esfera.
 * dialog_pe - declaração da caixa de diálogo responsável pelo tamanho do elipsóide.
 * dialog_pc - declaração da caixa de diálogo responsável pela definição da cor.
 */

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();


public slots:
    void fecharTudo();
    void salvar();
    void mudaDimensao();
    void mudaPlanoZ(int);
    void put_Voxel();
    void cut_Voxel();
    void put_Box();
    void cut_Box();
    void put_Sphere();
    void cut_Sphere();
    void put_Ellipsoid();
    void cut_Ellipsoid();
    void coloca_cor();
private:
    Ui::MainWindow *ui;
    TamanhoSculptor d;
    tamanhoBox dialog_pb;
    tamanhoSphere dialog_ps;
    tamanhoEllipsoid dialog_pe;
    definecolors dialog_pc;
};

#endif // MAINWINDOW_H
