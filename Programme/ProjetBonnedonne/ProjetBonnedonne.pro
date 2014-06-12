#-------------------------------------------------
#
# Project created by QtCreator 2014-01-29T16:00:33
#
#-------------------------------------------------

QT       += core gui
QT	 += sql
greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ProjetBonnedonne
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    dialog.cpp

HEADERS  += mainwindow.h \
    dialog.h

FORMS    += mainwindow.ui \
    dialog.ui

RESOURCES += \
    Image.qrc
