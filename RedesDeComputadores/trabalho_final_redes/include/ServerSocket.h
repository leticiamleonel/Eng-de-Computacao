#ifndef SERVERSOCKET_H
#define SERVERSOCKET_H

#include <iostream>
#include <thread>
#include <cstring>
#include <arpa/inet.h>
#include <sys/socket.h>
#include <unistd.h>

class ServerSocket {
private:
    int serverSocket;
    int clientSocket;
    struct sockaddr_in serverAddress;
    struct sockaddr_in clientAddress;
    socklen_t clientAddressLength;

public:
    ServerSocket();
    void acceptClient();
    void handleClient();
    void closeSocket();

private:
    void reverseString(char *str);
};

#endif // SERVERSOCKET_H
