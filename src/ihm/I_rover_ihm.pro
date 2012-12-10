#-------------------------------------------------
#
# Project created by QtCreator 2012-11-12T16:50:37
#
#-------------------------------------------------

QT       += core gui

TARGET = I_rover_ihm
TEMPLATE = app


include(widgets/widgets.pri)

SOURCES += main.cpp\
        mainwindow.cpp \


HEADERS  += mainwindow.h \

FORMS    += mainwindow.ui \

RESOURCES += \
    resources.qrc

OBJECTS_DIR = .cmp/ojb
MOC_DIR = .cmp/moc
RCC_DIR = .cmp/rcc
UI_DIR = .cmp/ui


