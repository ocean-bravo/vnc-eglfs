#include <qpa/qplatformintegrationplugin.h>
#include <qpa/qplatformintegrationfactory_p.h>

class Plugin final : public QPlatformIntegrationPlugin
{
    Q_OBJECT
    Q_PLUGIN_METADATA( IID QPlatformIntegrationFactoryInterface_iid FILE "metadata.json" )

public:

    QPlatformIntegration* create( const QString& system,
                                 const QStringList& args, int& argc, char** argv ) override;
};
