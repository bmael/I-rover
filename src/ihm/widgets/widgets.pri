INCLUDEPATH += ./
DEPENDPATH += $$PWD

HEADERS += \
    $$PWD/robotmenu.h \
    $$PWD/mapmenu.h \
    $$PWD/leftmenu.h \
    $$PWD/aboutdialog.h \
    $$PWD/mission.h \
    widgets/robotinformation.h

SOURCES += \
    $$PWD/robotmenu.cpp \
    $$PWD/mapmenu.cpp \
    $$PWD/leftmenu.cpp \
    $$PWD/aboutdialog.cpp \
    $$PWD/mission.cpp \
    widgets/robotinformation.cpp

FORMS += \
    $$PWD/robotmenu.ui \
    $$PWD/mapmenu.ui \
    $$PWD/leftmenu.ui \
    $$PWD/aboutdialog.ui \
    $$PWD/mission.ui \
    widgets/robotinformation.ui
 
