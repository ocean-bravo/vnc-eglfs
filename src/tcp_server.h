#pragma once

#include <QTcpServer>

class TcpServer final : public QTcpServer
{
    Q_OBJECT

public:
    TcpServer( QObject* parent );

Q_SIGNALS:
    void connectionRequested( qintptr );

protected:
    void incomingConnection( qintptr socketDescriptor ) override;
};
