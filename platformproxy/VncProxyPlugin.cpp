#include "VncProxyPlugin.h"

#include "../src/VncNamespace.h"

#include <qdebug.h>
#include <qloggingcategory.h>


Q_LOGGING_CATEGORY( logConnection, "vnceglfs.connection" )

QPlatformIntegration* Plugin::create(const QString& system, const QStringList& args, int& argc, char** argv)
{
    qCDebug(logConnection) << "somte text;";
    qDebug()<< "texgt sfasfas";

    QPlatformIntegration* integration = nullptr;

    if ( system.startsWith( "vnc", Qt::CaseInsensitive ) )
    {
        const auto path = QString::fromLocal8Bit(
            qgetenv( "QT_QPA_PLATFORM_PLUGIN_PATH" ) );

        integration = QPlatformIntegrationFactory::create(
            system.mid( 3 ), args, argc, argv, path );
    }

    if ( integration )
        Vnc::setAutoStartEnabled( true );

    return integration;
}
