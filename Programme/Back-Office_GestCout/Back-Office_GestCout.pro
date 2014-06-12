#-------------------------------------------------
#
# Project created by QtCreator 2014-01-30T13:21:57
#
#-------------------------------------------------

QT       += core gui
QT	 +=sql

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Back-Office_GestCout
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
