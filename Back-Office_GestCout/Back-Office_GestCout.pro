QT =core gui
QT +=sql
TEMPLATE = app
TARGET = 
DEPENDPATH += .
INCLUDEPATH += .

# Input
HEADERS += mainwindow.h \
    dialog.h
FORMS += \
    mainwindow.ui \
    dialog.ui
SOURCES += main.cpp mainwindow.cpp \
    dialog.cpp
RESOURCES += image.qrc
