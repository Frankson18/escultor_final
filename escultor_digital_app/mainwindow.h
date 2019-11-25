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
    void put_Box();
    void put_Sphere();
    void put_Ellipsoid();


private:
    Ui::MainWindow *ui;
    TamanhoSculptor d;
    tamanhoBox dialog_pb;
    tamanhoSphere dialog_ps;
    tamanhoEllipsoid dialog_pe;
};

#endif // MAINWINDOW_H
