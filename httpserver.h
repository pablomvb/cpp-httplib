#ifndef HTTPSERVER_H
#define HTTPSERVER_H

class QTcpServer;

class HttpServer
{
    QTcpServer* m_tcpServer;

public:
    HttpServer();
};

#endif // HTTPSERVER_H
