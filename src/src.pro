QT += gui gui-private network

TEMPLATE = lib

TARGET = $$qtLibraryTarget(vncgl)

DEFINES += VNC_MAKEDLL

CONFIG += shared debug

#CONFIG += hide_symbols
#CONFIG += silent
CONFIG += no_private_qt_headers_warning

CONFIG += warn_on
CONFIG += pedantic

pedantic {
    linux-g++ | linux-g++-64 {

        QMAKE_CXXFLAGS *= -pedantic-errors
        QMAKE_CXXFLAGS *= -Wpedantic

        QMAKE_CXXFLAGS *= -Wsuggest-override
        QMAKE_CXXFLAGS *= -Wsuggest-final-types
        QMAKE_CXXFLAGS *= -Wsuggest-final-methods

        #QMAKE_CXXFLAGS *= -fanalyzer

           QMAKE_CXXFLAGS += \
                -isystem $$[QT_INSTALL_HEADERS]/QtCore \
                -isystem $$[QT_INSTALL_HEADERS]/QtCore/$$[QT_VERSION]/QtCore \
                -isystem $$[QT_INSTALL_HEADERS]/QtGui \
                -isystem $$[QT_INSTALL_HEADERS]/QtGui/$$[QT_VERSION]/QtGui \
                -isystem $$[QT_INSTALL_HEADERS]/QtNetwork \
    }
}

$$type(PROJECT_ROOT)
include ($${PROJECT_ROOT}/qmake_template.pri)


HEADERS += \
    RfbSocket.h \
    RfbPixelStreamer.h \
    RfbEncoder.h \
    RfbInputEventHandler.h \
    VncServer.h \
    VncClient.h \
    VncNamespace.h \
    client_thread.h \
    tcp_server.h \
    vnc_manager.h

SOURCES += \
    RfbSocket.cpp \
    RfbPixelStreamer.cpp \
    RfbEncoder.cpp \
    RfbInputEventHandler.cpp \
    VncServer.cpp \
    VncClient.cpp \
    VncNamespace.cpp \
    client_thread.cpp \
    tcp_server.cpp \
    vnc_manager.cpp

OTHER_FILES +=
    vncgl.pri \

INSTALL_ROOT=/usr/local/vnceglfs
# INSTALL_ROOT=$$[QT_INSTALL_PREFIX]

target.path = $${INSTALL_ROOT}/lib

#header_files.files = VncNamespace.h
header_files.path = $${INSTALL_ROOT}/include

INSTALLS += target header_files


message(some var 2_pro: $$SOME_VAR)
SOME_VAR += 5
message(some var 2_pro: $$SOME_VAR)
