#pragma once

#include <QObject>

class VncServer;
class QWindow;

class VncManager : public QObject
{
public:
    VncManager();
    ~VncManager();

    void setAutoStartEnabled( bool );
    bool isAutoStartEnabled() const;

    void setTimerInterval( int ms );
    int timerInterval() const;

    void setInitialPort( int );
    int initialPort() const;

    bool startServer( QWindow*, int port );
    void stopServer( const QWindow* );

    VncServer* server( const QWindow* ) const;
    int serverPort( const QWindow* ) const;

    QList< QWindow* > windows() const;

private:
    bool eventFilter( QObject*, QEvent* ) override;

    int nextPort() const;
    bool isPortUsed( int port ) const;

    bool m_autoStart = false;
    int m_timerInterval = 30;

    int m_port = -1;
    QVector< VncServer* > m_servers; // usually <= 1
};
