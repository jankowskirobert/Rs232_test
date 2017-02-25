#-------------------------------------------------
#
# Project created by QtCreator 2017-02-25T13:45:25
#
#-------------------------------------------------
CONFIG += console c++11
QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = Rs232_test
TEMPLATE = app

SOURCES += main.cpp \
    rs232.c

HEADERS += \
    rs232.h \
    ArduinoSerialCommunicator.h



LIBS += -L/usr/local/libs -lopencv_core
