#include "client_thread.h"

#include "VncClient.h"
#include "VncServer.h"

ClientThread::ClientThread(qintptr socketDescriptor, VncServer* server)
    : QThread( server )
    , m_socketDescriptor( socketDescriptor )
{
}

ClientThread::~ClientThread()
{
}

void ClientThread::markDirty()
{
    if ( m_client )
        m_client->markDirty();
}

VncClient* ClientThread::client() const
{
    return m_client;
}

void ClientThread::run()
{
    VncClient client( m_socketDescriptor, qobject_cast< VncServer* >( parent() ) );
    connect( &client, &VncClient::disconnected, this, &QThread::quit );

    m_client = &client;
    QThread::run();
    m_client = nullptr;
}
