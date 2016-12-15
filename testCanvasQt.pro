#-------------------------------------------------
#
# Project created by QtCreator 2016-12-13T19:19:15
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = testCanvasQt
TEMPLATE = app

INCLUDEPATH += $(ROOTSYS)/include

LIBS += -L$(ROOTSYS)/lib -lCore -lHist -lGpad

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h

FORMS    += mainwindow.ui
