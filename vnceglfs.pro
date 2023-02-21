TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS = \
    src \
    platformproxy \

OTHER_FILES += \
    $$PWD/.qmake.conf \
    $$PWD/qmake_tools.pri \

$$type(SUBDIRS)

#message(some var main_pro: $$SOME_VAR)
#SOME_VAR += 3
#message(some var main_pro: $$SOME_VAR)
