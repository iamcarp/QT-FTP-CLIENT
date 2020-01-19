------------------------------------------

QT       += core gui

QT       += network

UI_DIR = $$PWD

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FTP
TEMPLATE = app

DEFINES += QT_DEPRECATED_WARNINGS


SOURCES += \
        clear.cpp \
        download.cpp \
        main.cpp \
        mainwindow.cpp \
        openDir.cpp \
        quit.cpp \
        upload.cpp

HEADERS += \
        mainwindow.h

FORMS += \
        mainwindow.ui

RESOURCES += \


