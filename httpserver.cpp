#include "httpserver.h"
#include <QTcpServer>

HttpServer::HttpServer() : m_tcpServer(new QTcpServer)
{

}
