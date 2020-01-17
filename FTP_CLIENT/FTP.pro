------------------------------------------

QT       += core gui

QT       += network

UI_DIR = $$PWD

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FTP
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        clear.h \
        download.h \
        mainwindow.h \
        upload.h

FORMS += \
        mainwindow.ui

RESOURCES +=
