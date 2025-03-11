QT += core multimedia
QT -= gui

CONFIG += c++11

TARGET = AudioPlayer
CONFIG += console
CONFIG -= app_bundle

TEMPLATE = app

SOURCES += main.cpp \
    inputuserthread.cpp \
    playsongthread.cpp \
    utils.cpp \
    winap.cpp

HEADERS += \
    inputuserthread.h \
    playsongthread.h \
    utils.h \
    winap.h
