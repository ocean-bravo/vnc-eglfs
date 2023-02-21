#include "tcp_server.h"

TcpServer::TcpServer(QObject* parent)
    : QTcpServer( parent )
{
}

void TcpServer::incomingConnection(qintptr socketDescriptor)
{
    /*
                We do not want to use QTcpServer::nextPendingConnection to avoid
                QTcpSocket being created in the wrong thread
             */
    Q_EMIT connectionRequested( socketDescriptor );
}
