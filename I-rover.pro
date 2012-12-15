######################################################################
# Automatically generated by qmake (2.01a) Sat Dec 15 11:50:58 2012
######################################################################

TEMPLATE = app
TARGET = 
DEPENDPATH += . \
              lib/pugixml_sources \
              src/ihm \
              src/robot \
              src/tools \
              src/ihm/widgets \
              src/map/Map \
              src/map/viewer \
              src/robot/actuators \
              src/robot/sensors \
              src/map/controleur/headers \
              src/map/controleur/sources \
              src/map/tileset/headers \
              src/map/tileset/sources \
              src/robot/actuators/movementactuator
INCLUDEPATH += . \
               lib/pugixml_sources \
               src/ihm \
               src/ihm/widgets \
               src/robot \
               src/tools \
               src/robot/actuators \
               src/robot/actuators/movementactuator \
               src/robot/sensors \
               src/map/controleur/headers \
               src/map/tileset/headers \
               src/map/Map \
               src/map/viewer

# Input
HEADERS += confdefs.h \
           config.h \
           lib/pugixml_sources/pugiconfig.hpp \
           lib/pugixml_sources/pugixml.hpp \
           src/ihm/mainwindow.h \
           src/robot/actuator.h \
           src/robot/movementactuator.h \
           src/robot/robot.h \
           src/robot/sensor.h \
           src/tools/mission_parser.h \
           src/ihm/widgets/aboutdialog.h \
           src/ihm/widgets/leftmenu.h \
           src/ihm/widgets/mapmenu.h \
           src/ihm/widgets/mission.h \
           src/ihm/widgets/robotinformation.h \
           src/ihm/widgets/robotmenu.h \
           src/map/Map/background.h \
           src/map/Map/cell.h \
           src/map/Map/field.h \
           src/map/Map/layers.h \
           src/map/Map/map.h \
           src/map/Map/objectLayers.h \
           src/map/Map/obstacle.h \
           src/map/viewer/mapRenderer.h \
           src/robot/actuators/arms.h \
           src/robot/actuators/rocketlauncher.h \
           src/robot/sensors/camera.h \
           src/robot/sensors/gps.h \
           src/robot/sensors/proximity.h \
           src/map/controleur/headers/gestionnaireMap.h \
           src/map/controleur/headers/mapFactory.h \
           src/map/controleur/headers/parseur.h \
           src/map/tileset/headers/tile.h \
           src/map/tileset/headers/tileSet.h \
           src/map/tileset/headers/tileSetImage.h \
           src/robot/actuators/movementactuator/chains.h \
           src/robot/actuators/movementactuator/wheels.h
FORMS += src/ihm/mainwindow.ui \
         src/ihm/widgets/aboutdialog.ui \
         src/ihm/widgets/leftmenu.ui \
         src/ihm/widgets/mapmenu.ui \
         src/ihm/widgets/mission.ui \
         src/ihm/widgets/robotinformation.ui \
         src/ihm/widgets/robotmenu.ui
SOURCES += lib/pugixml_sources/pugixml.cpp \
           src/ihm/main.cpp \
           src/ihm/mainwindow.cpp \
           src/robot/actuator.cpp \
           src/robot/movementactuator.cpp \
           src/robot/robot.cpp \
           src/robot/sensor.cpp \
           src/tools/mission_parser.cpp \
           src/ihm/widgets/aboutdialog.cpp \
           src/ihm/widgets/leftmenu.cpp \
           src/ihm/widgets/mapmenu.cpp \
           src/ihm/widgets/mission.cpp \
           src/ihm/widgets/robotinformation.cpp \
           src/ihm/widgets/robotmenu.cpp \
           src/map/Map/background.cpp \
           src/map/Map/cell.cpp \
           src/map/Map/field.cpp \
           src/map/Map/layers.cpp \
           src/map/Map/map.cpp \
           src/map/Map/objectLayers.cpp \
           src/map/Map/obstacle.cpp \
           src/map/viewer/mapRenderer.cpp \
           src/robot/actuators/arms.cpp \
           src/robot/actuators/rocketlauncher.cpp \
           src/robot/sensors/camera.cpp \
           src/robot/sensors/gps.cpp \
           src/robot/sensors/proximity.cpp \
           src/map/controleur/sources/gestionnaireMap.cpp \
           src/map/controleur/sources/mapFactory.cpp \
           src/map/controleur/sources/parseur.cpp \
           src/map/tileset/sources/tile.cpp \
           src/map/tileset/sources/tileSet.cpp \
           src/map/tileset/sources/tileSetImage.cpp \
           src/robot/actuators/movementactuator/chains.cpp \
           src/robot/actuators/movementactuator/wheels.cpp
RESOURCES += src/ihm/resources.qrc
OBJECTS_DIR = .cmp/ojb
MOC_DIR = .cmp/moc
RCC_DIR = .cmp/rcc
UI_DIR = .cmp/ui
