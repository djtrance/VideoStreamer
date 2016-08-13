#ifndef TCP_CLIENT_SOCKET_H
#define TCP_CLIENT_SOCKET_H
#include <stdint.h>

int32_t closeTcpClient(void *handle);
int32_t isTcpClientRunning(void *handle);
int32_t sendDataToTcpServer(void *handle, char *buffer, int32_t bufLen);
int32_t sendSyncDataToTcpServer(void *handle, char *inBuf, int32_t inBufLen, char *outBuf, int32_t *outBufLen );
void *initTcpClientSocket(uint16_t port, char *hostname);

#endif

