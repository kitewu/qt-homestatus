#-------------------------------------------------
#
# Project created by QtCreator 2017-05-10T20:34:20
#
#-------------------------------------------------

QT       += core gui

TARGET = home_status
TEMPLATE = app


SOURCES += main.cpp\
    temperature.cpp \
    humidity.cpp \
    light.cpp \
    frmmain.cpp \
    posix_qextserialport.cpp \
    qextserialbase.cpp \
    serialservice.cpp

HEADERS  += \
    temperature.h \
    humidity.h \
    light.h \
    frmmain.h \
    qextserialbase.h \
    serialservice.h \
    posix_qextserialport.h

FORMS    += \
    frmmain.ui

RESOURCES += \
    images.qrc
