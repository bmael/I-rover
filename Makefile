#############################################################################
# Makefile for building: I-rover
# Generated by qmake (2.01a) (Qt 4.8.1) on: jeu. d�c. 13 12:07:27 2012
# Project:  I-rover.pro
# Template: app
# Command: /usr/bin/qmake -o Makefile I-rover.pro
#############################################################################

####### Compiler, tools and options

CC            = gcc
CXX           = g++
DEFINES       = -DQT_WEBKIT -DQT_NO_DEBUG -DQT_GUI_LIB -DQT_CORE_LIB -DQT_SHARED
CFLAGS        = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
CXXFLAGS      = -m64 -pipe -O2 -Wall -W -D_REENTRANT $(DEFINES)
INCPATH       = -I/usr/share/qt4/mkspecs/linux-g++-64 -I. -I/usr/include/qt4/QtCore -I/usr/include/qt4/QtGui -I/usr/include/qt4 -I. -Ilib/pugixml_sources -Isrc/ihm -Isrc/ihm/widgets -Isrc/robot -Isrc/robot/actuators -Isrc/robot/actuators/movementactuator -Isrc/robot/sensors -Isrc/map/Map -Isrc/map/tileset/headers -Isrc/map/controleur/headers -I. -I.
LINK          = g++
LFLAGS        = -m64 -Wl,-O1
LIBS          = $(SUBLIBS)  -L/usr/lib/x86_64-linux-gnu -lQtGui -lQtCore -lpthread 
AR            = ar cqs
RANLIB        = 
QMAKE         = /usr/bin/qmake
TAR           = tar -cf
COMPRESS      = gzip -9f
COPY          = cp -f
SED           = sed
COPY_FILE     = $(COPY)
COPY_DIR      = $(COPY) -r
STRIP         = strip
INSTALL_FILE  = install -m 644 -p
INSTALL_DIR   = $(COPY_DIR)
INSTALL_PROGRAM = install -m 755 -p
DEL_FILE      = rm -f
SYMLINK       = ln -f -s
DEL_DIR       = rmdir
MOVE          = mv -f
CHK_DIR_EXISTS= test -d
MKDIR         = mkdir -p

####### Output directory

OBJECTS_DIR   = ./

####### Files

SOURCES       = lib/pugixml_sources/pugixml.cpp \
		src/ihm/main.cpp \
		src/ihm/mainwindow.cpp \
		src/robot/actuator.cpp \
		src/robot/movementactuator.cpp \
		src/robot/robot.cpp \
		src/robot/sensor.cpp \
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
		src/robot/actuators/arms.cpp \
		src/robot/actuators/rocketlauncher.cpp \
		src/robot/sensors/gps.cpp \
		src/robot/sensors/proximity.cpp \
		src/map/controleur/sources/gestionnaireMap.cpp \
		src/map/controleur/sources/mapFactory.cpp \
		src/map/controleur/sources/parseur.cpp \
		src/map/tileset/sources/tile.cpp \
		src/map/tileset/sources/tileSet.cpp \
		src/map/tileset/sources/tileSetImage.cpp \
		src/robot/actuators/movementactuator/chains.cpp \
		src/robot/actuators/movementactuator/wheels.cpp moc_mainwindow.cpp \
		moc_aboutdialog.cpp \
		moc_leftmenu.cpp \
		moc_mapmenu.cpp \
		moc_mission.cpp \
		moc_robotinformation.cpp \
		moc_robotmenu.cpp \
		qrc_resources.cpp
OBJECTS       = pugixml.o \
		main.o \
		mainwindow.o \
		actuator.o \
		movementactuator.o \
		robot.o \
		sensor.o \
		aboutdialog.o \
		leftmenu.o \
		mapmenu.o \
		mission.o \
		robotinformation.o \
		robotmenu.o \
		background.o \
		cell.o \
		field.o \
		layers.o \
		map.o \
		objectLayers.o \
		obstacle.o \
		arms.o \
		rocketlauncher.o \
		gps.o \
		proximity.o \
		gestionnaireMap.o \
		mapFactory.o \
		parseur.o \
		tile.o \
		tileSet.o \
		tileSetImage.o \
		chains.o \
		wheels.o \
		moc_mainwindow.o \
		moc_aboutdialog.o \
		moc_leftmenu.o \
		moc_mapmenu.o \
		moc_mission.o \
		moc_robotinformation.o \
		moc_robotmenu.o \
		qrc_resources.o
DIST          = /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		I-rover.pro
QMAKE_TARGET  = I-rover
DESTDIR       = 
TARGET        = I-rover

first: all
####### Implicit rules

.SUFFIXES: .o .c .cpp .cc .cxx .C

.cpp.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cc.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.cxx.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.C.o:
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o "$@" "$<"

.c.o:
	$(CC) -c $(CFLAGS) $(INCPATH) -o "$@" "$<"

####### Build rules

all: Makefile $(TARGET)

$(TARGET): ui_mainwindow.h ui_aboutdialog.h ui_leftmenu.h ui_mapmenu.h ui_mission.h ui_robotinformation.h ui_robotmenu.h $(OBJECTS)  
	$(LINK) $(LFLAGS) -o $(TARGET) $(OBJECTS) $(OBJCOMP) $(LIBS)

Makefile: I-rover.pro  /usr/share/qt4/mkspecs/linux-g++-64/qmake.conf /usr/share/qt4/mkspecs/common/unix.conf \
		/usr/share/qt4/mkspecs/common/linux.conf \
		/usr/share/qt4/mkspecs/common/gcc-base.conf \
		/usr/share/qt4/mkspecs/common/gcc-base-unix.conf \
		/usr/share/qt4/mkspecs/common/g++-base.conf \
		/usr/share/qt4/mkspecs/common/g++-unix.conf \
		/usr/share/qt4/mkspecs/qconfig.pri \
		/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri \
		/usr/share/qt4/mkspecs/features/qt_functions.prf \
		/usr/share/qt4/mkspecs/features/qt_config.prf \
		/usr/share/qt4/mkspecs/features/exclusive_builds.prf \
		/usr/share/qt4/mkspecs/features/default_pre.prf \
		/usr/share/qt4/mkspecs/features/release.prf \
		/usr/share/qt4/mkspecs/features/default_post.prf \
		/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf \
		/usr/share/qt4/mkspecs/features/warn_on.prf \
		/usr/share/qt4/mkspecs/features/qt.prf \
		/usr/share/qt4/mkspecs/features/unix/thread.prf \
		/usr/share/qt4/mkspecs/features/moc.prf \
		/usr/share/qt4/mkspecs/features/resources.prf \
		/usr/share/qt4/mkspecs/features/uic.prf \
		/usr/share/qt4/mkspecs/features/yacc.prf \
		/usr/share/qt4/mkspecs/features/lex.prf \
		/usr/share/qt4/mkspecs/features/include_source_dir.prf \
		/usr/lib/x86_64-linux-gnu/libQtGui.prl \
		/usr/lib/x86_64-linux-gnu/libQtCore.prl
	$(QMAKE) -o Makefile I-rover.pro
/usr/share/qt4/mkspecs/common/unix.conf:
/usr/share/qt4/mkspecs/common/linux.conf:
/usr/share/qt4/mkspecs/common/gcc-base.conf:
/usr/share/qt4/mkspecs/common/gcc-base-unix.conf:
/usr/share/qt4/mkspecs/common/g++-base.conf:
/usr/share/qt4/mkspecs/common/g++-unix.conf:
/usr/share/qt4/mkspecs/qconfig.pri:
/usr/share/qt4/mkspecs/modules/qt_webkit_version.pri:
/usr/share/qt4/mkspecs/features/qt_functions.prf:
/usr/share/qt4/mkspecs/features/qt_config.prf:
/usr/share/qt4/mkspecs/features/exclusive_builds.prf:
/usr/share/qt4/mkspecs/features/default_pre.prf:
/usr/share/qt4/mkspecs/features/release.prf:
/usr/share/qt4/mkspecs/features/default_post.prf:
/usr/share/qt4/mkspecs/features/unix/gdb_dwarf_index.prf:
/usr/share/qt4/mkspecs/features/warn_on.prf:
/usr/share/qt4/mkspecs/features/qt.prf:
/usr/share/qt4/mkspecs/features/unix/thread.prf:
/usr/share/qt4/mkspecs/features/moc.prf:
/usr/share/qt4/mkspecs/features/resources.prf:
/usr/share/qt4/mkspecs/features/uic.prf:
/usr/share/qt4/mkspecs/features/yacc.prf:
/usr/share/qt4/mkspecs/features/lex.prf:
/usr/share/qt4/mkspecs/features/include_source_dir.prf:
/usr/lib/x86_64-linux-gnu/libQtGui.prl:
/usr/lib/x86_64-linux-gnu/libQtCore.prl:
qmake:  FORCE
	@$(QMAKE) -o Makefile I-rover.pro

dist: 
	@$(CHK_DIR_EXISTS) .tmp/I-rover1.0.0 || $(MKDIR) .tmp/I-rover1.0.0 
	$(COPY_FILE) --parents $(SOURCES) $(DIST) .tmp/I-rover1.0.0/ && $(COPY_FILE) --parents confdefs.h config.h lib/pugixml_sources/pugiconfig.hpp lib/pugixml_sources/pugixml.hpp src/ihm/mainwindow.h src/robot/actuator.h src/robot/movementactuator.h src/robot/robot.h src/robot/sensor.h src/ihm/widgets/aboutdialog.h src/ihm/widgets/leftmenu.h src/ihm/widgets/mapmenu.h src/ihm/widgets/mission.h src/ihm/widgets/robotinformation.h src/ihm/widgets/robotmenu.h src/map/Map/background.h src/map/Map/cell.h src/map/Map/field.h src/map/Map/layers.h src/map/Map/map.h src/map/Map/objectLayers.h src/map/Map/obstacle.h src/robot/actuators/arms.h src/robot/actuators/rocketlauncher.h src/robot/sensors/gps.h src/robot/sensors/proximity.h src/map/controleur/headers/gestionnaireMap.h src/map/controleur/headers/mapFactory.h src/map/controleur/headers/parseur.h src/map/tileset/headers/tile.h src/map/tileset/headers/tileSet.h src/map/tileset/headers/tileSetImage.h src/robot/actuators/movementactuator/chains.h src/robot/actuators/movementactuator/wheels.h .tmp/I-rover1.0.0/ && $(COPY_FILE) --parents src/ihm/resources.qrc .tmp/I-rover1.0.0/ && $(COPY_FILE) --parents lib/pugixml_sources/pugixml.cpp src/ihm/main.cpp src/ihm/mainwindow.cpp src/robot/actuator.cpp src/robot/movementactuator.cpp src/robot/robot.cpp src/robot/sensor.cpp src/ihm/widgets/aboutdialog.cpp src/ihm/widgets/leftmenu.cpp src/ihm/widgets/mapmenu.cpp src/ihm/widgets/mission.cpp src/ihm/widgets/robotinformation.cpp src/ihm/widgets/robotmenu.cpp src/map/Map/background.cpp src/map/Map/cell.cpp src/map/Map/field.cpp src/map/Map/layers.cpp src/map/Map/map.cpp src/map/Map/objectLayers.cpp src/map/Map/obstacle.cpp src/robot/actuators/arms.cpp src/robot/actuators/rocketlauncher.cpp src/robot/sensors/gps.cpp src/robot/sensors/proximity.cpp src/map/controleur/sources/gestionnaireMap.cpp src/map/controleur/sources/mapFactory.cpp src/map/controleur/sources/parseur.cpp src/map/tileset/sources/tile.cpp src/map/tileset/sources/tileSet.cpp src/map/tileset/sources/tileSetImage.cpp src/robot/actuators/movementactuator/chains.cpp src/robot/actuators/movementactuator/wheels.cpp .tmp/I-rover1.0.0/ && $(COPY_FILE) --parents src/ihm/mainwindow.ui src/ihm/widgets/aboutdialog.ui src/ihm/widgets/leftmenu.ui src/ihm/widgets/mapmenu.ui src/ihm/widgets/mission.ui src/ihm/widgets/robotinformation.ui src/ihm/widgets/robotmenu.ui .tmp/I-rover1.0.0/ && (cd `dirname .tmp/I-rover1.0.0` && $(TAR) I-rover1.0.0.tar I-rover1.0.0 && $(COMPRESS) I-rover1.0.0.tar) && $(MOVE) `dirname .tmp/I-rover1.0.0`/I-rover1.0.0.tar.gz . && $(DEL_FILE) -r .tmp/I-rover1.0.0


clean:compiler_clean 
	-$(DEL_FILE) $(OBJECTS)
	-$(DEL_FILE) *~ core *.core


####### Sub-libraries

distclean: clean
	-$(DEL_FILE) $(TARGET) 
	-$(DEL_FILE) Makefile


check: first

mocclean: compiler_moc_header_clean compiler_moc_source_clean

mocables: compiler_moc_header_make_all compiler_moc_source_make_all

compiler_moc_header_make_all: moc_mainwindow.cpp moc_aboutdialog.cpp moc_leftmenu.cpp moc_mapmenu.cpp moc_mission.cpp moc_robotinformation.cpp moc_robotmenu.cpp
compiler_moc_header_clean:
	-$(DEL_FILE) moc_mainwindow.cpp moc_aboutdialog.cpp moc_leftmenu.cpp moc_mapmenu.cpp moc_mission.cpp moc_robotinformation.cpp moc_robotmenu.cpp
moc_mainwindow.cpp: src/ihm/mainwindow.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/mainwindow.h -o moc_mainwindow.cpp

moc_aboutdialog.cpp: src/ihm/widgets/aboutdialog.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/aboutdialog.h -o moc_aboutdialog.cpp

moc_leftmenu.cpp: src/ihm/widgets/leftmenu.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/leftmenu.h -o moc_leftmenu.cpp

moc_mapmenu.cpp: src/ihm/widgets/mapmenu.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/mapmenu.h -o moc_mapmenu.cpp

moc_mission.cpp: src/robot/movementactuator.h \
		src/robot/actuator.h \
		src/ihm/widgets/mission.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/mission.h -o moc_mission.cpp

moc_robotinformation.cpp: src/robot/movementactuator.h \
		src/robot/actuator.h \
		src/ihm/widgets/robotinformation.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/robotinformation.h -o moc_robotinformation.cpp

moc_robotmenu.cpp: src/ihm/widgets/robotmenu.h
	/usr/bin/moc-qt4 $(DEFINES) $(INCPATH) src/ihm/widgets/robotmenu.h -o moc_robotmenu.cpp

compiler_rcc_make_all: qrc_resources.cpp
compiler_rcc_clean:
	-$(DEL_FILE) qrc_resources.cpp
qrc_resources.cpp: src/ihm/resources.qrc \
		src/ihm/resources/robot/robot.png \
		src/ihm/resources/backgrounds/bg-leftmenu.png \
		src/ihm/resources/icons/retract2Top.png \
		src/ihm/resources/icons/retractArrow.png \
		src/ihm/resources/icons/about.png \
		src/ihm/resources/icons/deployArrow.png \
		src/ihm/resources/icons/deploy2bottom.png \
		src/ihm/resources/icons/quit.png
	/usr/bin/rcc -name resources src/ihm/resources.qrc -o qrc_resources.cpp

compiler_image_collection_make_all: qmake_image_collection.cpp
compiler_image_collection_clean:
	-$(DEL_FILE) qmake_image_collection.cpp
compiler_moc_source_make_all:
compiler_moc_source_clean:
compiler_uic_make_all: ui_mainwindow.h ui_aboutdialog.h ui_leftmenu.h ui_mapmenu.h ui_mission.h ui_robotinformation.h ui_robotmenu.h
compiler_uic_clean:
	-$(DEL_FILE) ui_mainwindow.h ui_aboutdialog.h ui_leftmenu.h ui_mapmenu.h ui_mission.h ui_robotinformation.h ui_robotmenu.h
ui_mainwindow.h: src/ihm/mainwindow.ui \
		src/ihm/widgets/leftmenu.h
	/usr/bin/uic-qt4 src/ihm/mainwindow.ui -o ui_mainwindow.h

ui_aboutdialog.h: src/ihm/widgets/aboutdialog.ui
	/usr/bin/uic-qt4 src/ihm/widgets/aboutdialog.ui -o ui_aboutdialog.h

ui_leftmenu.h: src/ihm/widgets/leftmenu.ui \
		src/ihm/widgets/mapmenu.h \
		src/ihm/widgets/robotmenu.h
	/usr/bin/uic-qt4 src/ihm/widgets/leftmenu.ui -o ui_leftmenu.h

ui_mapmenu.h: src/ihm/widgets/mapmenu.ui
	/usr/bin/uic-qt4 src/ihm/widgets/mapmenu.ui -o ui_mapmenu.h

ui_mission.h: src/ihm/widgets/mission.ui
	/usr/bin/uic-qt4 src/ihm/widgets/mission.ui -o ui_mission.h

ui_robotinformation.h: src/ihm/widgets/robotinformation.ui
	/usr/bin/uic-qt4 src/ihm/widgets/robotinformation.ui -o ui_robotinformation.h

ui_robotmenu.h: src/ihm/widgets/robotmenu.ui \
		src/ihm/widgets/robotinformation.h \
		src/ihm/widgets/mission.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h
	/usr/bin/uic-qt4 src/ihm/widgets/robotmenu.ui -o ui_robotmenu.h

compiler_yacc_decl_make_all:
compiler_yacc_decl_clean:
compiler_yacc_impl_make_all:
compiler_yacc_impl_clean:
compiler_lex_make_all:
compiler_lex_clean:
compiler_clean: compiler_moc_header_clean compiler_rcc_clean compiler_uic_clean 

####### Compile

pugixml.o: lib/pugixml_sources/pugixml.cpp lib/pugixml_sources/pugixml.hpp \
		lib/pugixml_sources/pugiconfig.hpp
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o pugixml.o lib/pugixml_sources/pugixml.cpp

main.o: src/ihm/main.cpp src/ihm/mainwindow.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o main.o src/ihm/main.cpp

mainwindow.o: src/ihm/mainwindow.cpp src/ihm/mainwindow.h \
		ui_mainwindow.h \
		src/ihm/widgets/aboutdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mainwindow.o src/ihm/mainwindow.cpp

actuator.o: src/robot/actuator.cpp src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o actuator.o src/robot/actuator.cpp

movementactuator.o: src/robot/movementactuator.cpp src/robot/movementactuator.h \
		src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o movementactuator.o src/robot/movementactuator.cpp

robot.o: src/robot/robot.cpp src/robot/robot.h \
		src/robot/actuator.h \
		src/robot/sensor.h \
		src/robot/movementactuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o robot.o src/robot/robot.cpp

sensor.o: src/robot/sensor.cpp src/robot/sensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o sensor.o src/robot/sensor.cpp

aboutdialog.o: src/ihm/widgets/aboutdialog.cpp src/ihm/widgets/aboutdialog.h \
		ui_aboutdialog.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o aboutdialog.o src/ihm/widgets/aboutdialog.cpp

leftmenu.o: src/ihm/widgets/leftmenu.cpp src/ihm/widgets/leftmenu.h \
		ui_leftmenu.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o leftmenu.o src/ihm/widgets/leftmenu.cpp

mapmenu.o: src/ihm/widgets/mapmenu.cpp src/ihm/widgets/mapmenu.h \
		ui_mapmenu.h \
		src/robot/robot.h \
		src/robot/actuator.h \
		src/robot/sensor.h \
		src/robot/movementactuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mapmenu.o src/ihm/widgets/mapmenu.cpp

mission.o: src/ihm/widgets/mission.cpp src/ihm/widgets/mission.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h \
		ui_mission.h \
		src/robot/robot.h \
		src/robot/sensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mission.o src/ihm/widgets/mission.cpp

robotinformation.o: src/ihm/widgets/robotinformation.cpp src/ihm/widgets/robotinformation.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h \
		ui_robotinformation.h \
		src/robot/actuators/rocketlauncher.h \
		src/robot/robot.h \
		src/robot/sensor.h \
		src/robot/actuators/movementactuator/chains.h \
		src/robot/actuators/movementactuator/wheels.h \
		src/robot/actuators/arms.h \
		src/robot/sensors/gps.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o robotinformation.o src/ihm/widgets/robotinformation.cpp

robotmenu.o: src/ihm/widgets/robotmenu.cpp src/ihm/widgets/robotmenu.h \
		ui_robotmenu.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o robotmenu.o src/ihm/widgets/robotmenu.cpp

background.o: src/map/Map/background.cpp src/map/Map/background.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o background.o src/map/Map/background.cpp

cell.o: src/map/Map/cell.cpp src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o cell.o src/map/Map/cell.cpp

field.o: src/map/Map/field.cpp src/map/Map/field.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o field.o src/map/Map/field.cpp

layers.o: src/map/Map/layers.cpp src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o layers.o src/map/Map/layers.cpp

map.o: src/map/Map/map.cpp src/map/Map/map.h \
		src/map/Map/background.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h \
		src/map/Map/field.h \
		src/map/Map/objectLayers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o map.o src/map/Map/map.cpp

objectLayers.o: src/map/Map/objectLayers.cpp src/map/Map/objectLayers.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o objectLayers.o src/map/Map/objectLayers.cpp

obstacle.o: src/map/Map/obstacle.cpp src/map/Map/obstacle.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o obstacle.o src/map/Map/obstacle.cpp

arms.o: src/robot/actuators/arms.cpp src/robot/actuators/arms.h \
		src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o arms.o src/robot/actuators/arms.cpp

rocketlauncher.o: src/robot/actuators/rocketlauncher.cpp src/robot/actuators/rocketlauncher.h \
		src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o rocketlauncher.o src/robot/actuators/rocketlauncher.cpp

gps.o: src/robot/sensors/gps.cpp src/robot/sensors/gps.h \
		src/robot/sensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gps.o src/robot/sensors/gps.cpp

proximity.o: src/robot/sensors/proximity.cpp src/robot/sensors/proximity.h \
		src/robot/sensor.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o proximity.o src/robot/sensors/proximity.cpp

gestionnaireMap.o: src/map/controleur/sources/gestionnaireMap.cpp src/map/controleur/headers/gestionnaireMap.h \
		src/map/controleur/headers/parseur.h \
		lib/pugixml_sources/pugixml.hpp \
		lib/pugixml_sources/pugiconfig.hpp \
		src/map/controleur/headers/mapFactory.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h \
		src/map/Map/map.h \
		src/map/Map/background.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/Map/field.h \
		src/map/Map/objectLayers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o gestionnaireMap.o src/map/controleur/sources/gestionnaireMap.cpp

mapFactory.o: src/map/controleur/sources/mapFactory.cpp src/map/controleur/headers/mapFactory.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h \
		src/map/Map/map.h \
		src/map/Map/background.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/Map/field.h \
		src/map/Map/objectLayers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o mapFactory.o src/map/controleur/sources/mapFactory.cpp

parseur.o: src/map/controleur/sources/parseur.cpp src/map/controleur/headers/parseur.h \
		lib/pugixml_sources/pugixml.hpp \
		lib/pugixml_sources/pugiconfig.hpp \
		src/map/controleur/headers/mapFactory.h \
		src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h \
		src/map/Map/map.h \
		src/map/Map/background.h \
		src/map/Map/layers.h \
		src/map/Map/cell.h \
		src/map/Map/obstacle.h \
		src/map/Map/field.h \
		src/map/Map/objectLayers.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o parseur.o src/map/controleur/sources/parseur.cpp

tile.o: src/map/tileset/sources/tile.cpp src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tile.o src/map/tileset/sources/tile.cpp

tileSet.o: src/map/tileset/sources/tileSet.cpp src/map/tileset/headers/tileSet.h \
		src/map/tileset/headers/tileSetImage.h \
		src/map/tileset/headers/tile.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tileSet.o src/map/tileset/sources/tileSet.cpp

tileSetImage.o: src/map/tileset/sources/tileSetImage.cpp src/map/tileset/headers/tileSetImage.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o tileSetImage.o src/map/tileset/sources/tileSetImage.cpp

chains.o: src/robot/actuators/movementactuator/chains.cpp src/robot/actuators/movementactuator/chains.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o chains.o src/robot/actuators/movementactuator/chains.cpp

wheels.o: src/robot/actuators/movementactuator/wheels.cpp src/robot/actuators/movementactuator/wheels.h \
		src/robot/movementactuator.h \
		src/robot/actuator.h
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o wheels.o src/robot/actuators/movementactuator/wheels.cpp

moc_mainwindow.o: moc_mainwindow.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mainwindow.o moc_mainwindow.cpp

moc_aboutdialog.o: moc_aboutdialog.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_aboutdialog.o moc_aboutdialog.cpp

moc_leftmenu.o: moc_leftmenu.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_leftmenu.o moc_leftmenu.cpp

moc_mapmenu.o: moc_mapmenu.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mapmenu.o moc_mapmenu.cpp

moc_mission.o: moc_mission.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_mission.o moc_mission.cpp

moc_robotinformation.o: moc_robotinformation.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_robotinformation.o moc_robotinformation.cpp

moc_robotmenu.o: moc_robotmenu.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o moc_robotmenu.o moc_robotmenu.cpp

qrc_resources.o: qrc_resources.cpp 
	$(CXX) -c $(CXXFLAGS) $(INCPATH) -o qrc_resources.o qrc_resources.cpp

####### Install

install:   FORCE

uninstall:   FORCE

FORCE:

