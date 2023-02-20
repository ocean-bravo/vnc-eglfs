QT += gui gui-private

TEMPLATE = lib

TARGET = $$qtLibraryTarget(vncproxy)

CONFIG += plugin
CONFIG += warn_on

CONFIG += hide_symbols
CONFIG += no_private_qt_headers_warning

DESTDIR = plugins/platforms

#PROJECT_ROOT = $$clean_path( $$PWD/../src )

include($${PROJECT_ROOT}/src/vncgl.pri)

HEADERS += \
    VncProxyPlugin.h \

OTHER_FILES += metadata.json

INSTALL_ROOT=/usr/local/vnceglfs
# INSTALL_ROOT=$$[QT_INSTALL_PREFIX]

target.path = $${INSTALL_ROOT}/plugins/platforms
INSTALLS += target

SOURCES += \
    VncProxyPlugin.cpp
