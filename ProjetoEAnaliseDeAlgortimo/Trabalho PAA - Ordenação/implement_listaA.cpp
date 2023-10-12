//incluindo as bibliotecas para a implementação
#include <iostream> //biblioteca de entrada e saída
#include "biblio.h" ////biblioteca com as entradas das funções

using namespace std;

// função para criar uma lista vazia
void criarListaVazia(TLista &l) //função passada por referência pois os dados serão modificados no decorrer da execução
{
    l.primeiro = 0; //definindo que l.primeiro tem que começar com 0
    l.ultimo = l.primeiro; //definindo que l.ultimo tem que ser igual a l.primeiro, sendo assim o l.ultimo também começa com 0
    //se os dois estão valendo 0, quer dizer que a lista que foi criada está vazia
}

// função para inserir os elementos na lista vazia
void inserir(TLista &l, int x) //função passada por referência pois os dados serão modificados no decorrer da execução
{
    //definindo uma variável inteira para ser utilizada
    l.vetItens[l.ultimo] = x; // atribuindo ao vetor a variável criada, para inserir os dados sempre no l.ultimo pois ele está vazio
    l.ultimo++;                // incrementando em ordem crescente na lista
}

// operação para cadastrar dados na lista
void cadastrar(TLista &l) //função passada por referência pois os dados serão modificados no decorrer da execução
{
    int x; //variável inteira criada

    cout << "Digite " << maxTam << " números que deseja ordenar: " << endl; //pedindo ao usuário para inserir os dados
    for (int i = 0; i < maxTam; i++) //laço de repetição para cadastrar os dados no vetor começando pelo índece 0
    {
        cout << "Digite o " << i+1 << "º: "; //pedindo ao usuário para inserir os dados
        cin >> x; //armazenando os dados inseridos

        inserir(l, x); //inserindo os dados que foram armazenados na variável x na lista
    }
}

// operação para mostrar os dados ao usuário
void mostrar(TLista l) //função passada apenas por cópia pois ela não terá nenhuma modificação nos dados
{
    for (int i = l.primeiro; i < l.ultimo; i++) //laço de repetição para mostrar os dados até que i for menor que l.ultimo.
    {
        cout << "Posição " << i << ": " << l.vetItens[i] << endl; //mostrando os dados inseridos no vetor e suas posições
    }
}

