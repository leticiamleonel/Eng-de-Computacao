#include "ServerSocket.h"
using namespace std;

ServerSocket::ServerSocket() {
    serverSocket = socket(AF_INET, SOCK_STREAM, 0);
    if (serverSocket == -1) {
        cout << "Não foi possível criar o socket" << endl;
        exit(1);
    }

    serverAddress.sin_family = AF_INET;
    serverAddress.sin_addr.s_addr = INADDR_ANY;
    serverAddress.sin_port = htons(5000);

    if (bind(serverSocket, (struct sockaddr *)&serverAddress, sizeof(serverAddress)) == -1) {
        cout << "Não foi possível realizar o bind" << endl;
        exit(1);
    }

    if (listen(serverSocket, 1) == -1) {
        cout << "Não foi possível ouvir por conexões" << endl;
        exit(1);
    }
}

void ServerSocket::acceptClient() {
    clientAddressLength = sizeof(clientAddress);
    clientSocket = accept(serverSocket, (struct sockaddr *)&clientAddress, &clientAddressLength);
    if (clientSocket == -1) {
        cout << "Não foi possível aceitar a conexão com o cliente" << endl;
        exit(1);
    }

    cout << "Conexão estabelecida com o cliente!" << endl;
}

void ServerSocket::handleClient() {
    char message[1024];

    for(;;) {
        memset(message, 0, sizeof(message));

        if (recv(clientSocket, message, sizeof(message), 0) == -1) {
            cout << "Não foi possível receber a mensagem do cliente" << endl;
            exit(1);
        }

        if (strlen(message) == 0 || message[strlen(message) - 1] == '\n') {
            message[strlen(message) - 1] = '\0'; // limpa quebra de linha
        }

        if (strlen(message) > 0) {
            reverseString(message);
            char nl[] = "\n";
            strcat(message, nl); //adicionando quebra de linha na resposta

            if (send(clientSocket, message, strlen(message), 0) == -1) {
                cout << "Não foi possível enviar a mensagem para o cliente" << endl;
                exit(1);
            }
        }
    }
}

void ServerSocket::closeSocket() {
    close(clientSocket);
    close(serverSocket);
}

void ServerSocket::reverseString(char *str) {
    int start = 0;
    int finish = strlen(str)-1;

    while (start < finish) {
        char temp = str[start];
        str[start] = str[finish];
        str[finish] = temp;

        start++;
        finish--;
    }
}
