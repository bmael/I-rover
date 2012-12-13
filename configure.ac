#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.68])
AC_INIT([I_Rover], [1.0], [BUG-REPORT-ADDRESS])
AC_CONFIG_AUX_DIR([build-aux])
AC_CONFIG_SRCDIR([src/ihm/mainwindow.h])
AC_CONFIG_HEADERS([config.h])

AM_PROG_LIBTOOL
AM_INIT_AUTOMAKE

# Checks for programs.
AC_PROG_CXX
# If you need to create a library, USE libtool:
AC_PROG_LIBTOOL

# Checks for libraries.
AC_CHECK_LIB([pugixml], [next_attribute], [], [echo "pugixml library is required" exit -1])

# If you happen to have some C code:
#AC_LANG([C])
#AC_PROG_CC

# Qt with AutoTroll.
AT_WITH_QT


 if $QMAKE -project; then :; else
    AC_MSG_ERROR([Calling $QMAKE -project failed.])
  fi 
  

echo "$as_me:$LINENO: Invoking $QMAKE on $pro_file" >&AS_MESSAGE_LOG_FD
sed 's/^/| /' "$pro_file" >&AS_MESSAGE_LOG_FD

if $QMAKE; then :; else
  AC_MSG_ERROR([Calling $QMAKE failed.])
fi

echo "OBJECTS_DIR = .cmp/ojb" >> I-rover.pro
echo "MOC_DIR = .cmp/moc" >> I-rover.pro
echo "RCC_DIR = .cmp/rcc" >> I-rover.pro
echo "UI_DIR = .cmp/ui" >> I-rover.pro 

AC_CONFIG_FILES(Makefile
		  lib/Makefile
		  src/Makefile
		  src/ihm/Makefile
		  src/map/Makefile
		  src/mission/Makefile
		  src/robot/Makefile)
		  
AC_CONFIG_FILES([build-aux/test.sh], [chmod a=rx build-aux/test.sh])

AC_OUTPUT
