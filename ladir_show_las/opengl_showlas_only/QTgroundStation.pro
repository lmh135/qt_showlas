#-------------------------------------------------
#
# Project created by QtCreator 2018-06-25T19:37:00
#
#-------------------------------------------------

QT       += core gui
QT       += opengl
LIBS += -lGLU
LIBS += -llas
LIBS += -lboost_system
LIBS += /usr/local/lib/libpcl_*.so
LIBS += -larmadillo




greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = QTgroundStation
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


SOURCES += \
        main.cpp \
        mainwindow.cpp \
    widget.cpp

HEADERS += \
        mainwindow.h \
    widget.h \
    data_construct.h

FORMS += \
        mainwindow.ui


INCLUDEPATH += /usr/local/include
INCLUDEPATH += /usr/local/include/pcl-1.8
INCLUDEPATH += /usr/include/eigen3
INCLUDEPATH += /usr/include/boost

RESOURCES += \
    icon.qrc
