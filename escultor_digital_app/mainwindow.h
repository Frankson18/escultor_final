#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <cstdlib>
#include "plotter.h"
#include "tamanhosculptor.h"
#include "tamanhobox.h"
#include "tamanhosphere.h"
#include "tamanhoellipsoid.h"
#include "QMessageBox"

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


private:
    Ui::MainWindow *ui;
    TamanhoSculptor d;
    tamanhoBox dialog_pb;
    tamanhoSphere dialog_ps;
    tamanhoEllipsoid dialog_pe;

};

#endif // MAINWINDOW_H
