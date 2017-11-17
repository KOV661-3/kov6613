#-------------------------------------------------
#
# Project created by QtCreator 2017-10-02T21:37:50
#
#-------------------------------------------------

QT       += core gui
INCLUDEPATH += "F:\yap\pcapProject\lib\winpcap\Lib"
INCLUDEPATH += "F:\yap\pcapProject\lib\winpcap\include"
LIBS +=-L"F:\yap\pcapProject\lib\winpcap\Lib" -lwpcap -lws2_32

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = BigProject
TEMPLATE = app


SOURCES += main.cpp\
        mainwindow.cpp \
    cal.cpp \
    pcapop.cpp

HEADERS  += mainwindow.h \
    cal.h \
    pcapop.h \
    pacet.h

FORMS    += mainwindow.ui \
    cal.ui \
    pcapop.ui
