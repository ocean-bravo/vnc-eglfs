INCLUDEPATH += $${PROJECT_ROOT}/src

DEFINES += VNC_USEDLL

#DEPENDPATH += $${PROJECT_ROOT}/src

#$$type(DEPENDPATH)

LIBS *= -L$${OUT_PWD}/../src/out -lvncgl

$$type(LIBS)
