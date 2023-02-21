/******************************************************************************
 * VncEGLFS - Copyright (C) 2022 Uwe Rathmann
 * This file may be used under the terms of the 3-clause BSD License
 *****************************************************************************/

#include "VncNamespace.h"

#include "vnc_manager.h"

#include <qwindow.h>
#include <qdebug.h>


Q_GLOBAL_STATIC( VncManager, vncManager )

namespace Vnc
{
    void setTimerInterval( int ms ) { vncManager->setTimerInterval( ms ); }
    int timerInterval() { return vncManager->timerInterval(); }

    void setInitialPort( int port ) { vncManager->setInitialPort( port ); }
    int initialPort() { return vncManager->initialPort(); }

    void setAutoStartEnabled( bool on )
    {
        vncManager->setAutoStartEnabled( on );
    }
    bool isAutoStartEnabled() { return vncManager->isAutoStartEnabled(); }

    bool startServer( QWindow* w, int port ) { return vncManager->startServer( w, port ); }
    void stopServer( QWindow* w ) { return vncManager->stopServer( w ); }

    QList< QWindow* > windows() { return vncManager->windows(); }
    int serverPort( const QWindow* w ) { return vncManager->serverPort( w ); }
}
