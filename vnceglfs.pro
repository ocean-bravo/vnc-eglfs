TEMPLATE = subdirs
CONFIG += ordered

SUBDIRS = \
    src \
    platformproxy \

OTHER_FILES += \
    $$PWD/.qmake.conf \
    $$PWD/qmake_tools.pri \
