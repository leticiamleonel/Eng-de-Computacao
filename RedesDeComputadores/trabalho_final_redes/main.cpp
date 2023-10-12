/****************************************************************

Projeto Final - Redes de Computadores 2023

Membros do grupo:
 ___________________________________________
|            Nome                 |   RA    |
|---------------------------------|---------|
| Julia Gabriella Corrêa Silva    |         |
| Leticial Moreira Leonel         |         |
| Lázaro José Rodrigues Júnior    | 0027627 |
---------------------------------------------

*****************************************************************/

#include <iostream>
#include "ServerSocket.h"
using namespace std;

int main() {
    ServerSocket server; // instanciando a classe socket

    cout << "Olá, seja bem vindo ao Servidor Echo Reverso!\n"
         << "Aguardando conexão na porta 5000." << endl;

    server.acceptClient(); // aceitando a conexão do cliente

    // thread para lidar com requisições do cliente em paralelo
    thread clientThread(&ServerSocket::handleClient, &server);

    cout << "Conexão estabelecida com sucesso!\n"
         << "Aguardando pedidos do cliente..." << endl;

    // aguardando o encerramento do servidor
    string input;
    getline(cin, input);

    server.closeSocket();
    clientThread.join();

    return 0;
}

