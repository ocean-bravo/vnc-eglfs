#pragma once

#include <QThread>

class VncClient;
class VncServer;

class ClientThread : public QThread
{
public:
    ClientThread( qintptr socketDescriptor, VncServer* server );

    ~ClientThread();

    void markDirty();

    VncClient* client() const;

protected:
    void run() override;

private:
    VncClient* m_client = nullptr;
    const qintptr m_socketDescriptor;
};
