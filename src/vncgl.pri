INCLUDEPATH += $${PROJECT_ROOT}/src

DEFINES += QCUSTOMPLOT_USE_LIBRARY

DEPENDPATH *= $${PROJECT_ROOT}/src

LIBS *= -L$${BUILD_ROOT}/lib -lvncgl
