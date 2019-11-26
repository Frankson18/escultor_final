#-------------------------------------------------
#
# Project created by QtCreator 2019-11-06T07:59:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = escultor_digital_app
TEMPLATE = app

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

CONFIG += c++11

SOURCES += \
        definecolors.cpp \
        main.cpp \
        mainwindow.cpp \
        plotter.cpp \
        sculptor.cpp \
        tamanhobox.cpp \
        tamanhoellipsoid.cpp \
        tamanhosculptor.cpp \
        tamanhosphere.cpp

HEADERS += \
        definecolors.h \
        mainwindow.h \
        plotter.h \
        sculptor.h \
        tamanhobox.h \
        tamanhoellipsoid.h \
        tamanhosculptor.h \
        tamanhosphere.h \
        voxel.h

FORMS += \
        definecolors.ui \
        mainwindow.ui \
        tamanhobox.ui \
        tamanhoellipsoid.ui \
        tamanhosculptor.ui \
        tamanhosphere.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target
