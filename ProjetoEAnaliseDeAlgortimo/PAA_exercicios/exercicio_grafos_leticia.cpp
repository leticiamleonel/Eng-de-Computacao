// Projeto e Análise de Algoritmo
// Exercício - Grafos (matriz e lista)
// Letícia Leonel
#include <iostream> //biblioteca para uso do COUT e do CIN
#include <clocale> //biblioteca para caracteres especiais
using namespace std;

//programa principal
int main()
{
    setlocale(LC_ALL, "Portuguese");//comando para utilizar os caracteres especiais

    int coluna, linha, v, a; //identificadores para as variáveis
                             // coluna = coluna da matriz, linha = linha da matriz, v = vértice, a = aresta

    //perguntando ao usuário
    cout << "Digite a quantidade de véttices que tem seu grafo: " << endl;
    //armazenando o valor na variável vértice
    cin >> v;

    cout << "Digite a quantidade de arestas: " << endl;
    //armazenando o valor na variável aresta
    cin >> a;

    //criando uma variável para a matriz e armazenando os valores inseridos do vértice. Um grafo sempre terá o mesmo valor de
    //linhas e colunas
    int grafo[v][v];

    //inicialmente, vamos atribuir o valor 0 para a matriz toda utilizando o laço de repetição
    for (int i=0; i < v; i++) //linha
    {
        for (int j = 0; j < v; j++) //coluna
        {
            grafo[i][j] = 0; //atribuindo o valor 0 para a matriz
        }
    }


    //inserindo as arestas na matriz utilizando um laço de repetição
    for (int i = 0; i < a; i++)
    {
        //perguntando ao usuário
        cout << "1° vértice: "; //primeiro vértice da ligação
        cin >> linha; //armazenando o valor na variável coluna

        cout << "2° vértice? "; //segundo vértice da ligação
        cin >> coluna; //armazenando o valor na variável linha

        //se o resultado dos vértices inseridos forem 0, o valor continua em 0
        if (grafo[linha][coluna] == 0)
        {
            grafo[linha][coluna] = 1; // se não, o valor muda para 1
        }
    }

        cout << endl; //quebra de linha

    //--------------------------------------------------------------------------------
    //mostrando a matriz resultante
    cout << endl; //quebra de linha
    cout << "---------- Matriz de adjacências ----------" << endl;;
    //laço de repetição para motrar a matriz resultante
    for (int i=0; i < v; i++)
    {
        for (int j = 0; j < v; j++)
        {
            cout << grafo[i][j] << " "; //matriz
        }
        cout << endl; //quebra de linha
    }

    //--------------------------------------------------------------------------------
    //mostrando a lista resultante
    cout << endl; //quebra de linha
    cout << "---------- Lista de adjacências ----------" << endl;
    //laço de repetição para mostrar a lista
    for(int i = 0; i < v; i++)
    {
        cout << "Para: " << i <<  ":"; // motrando a lista de acordo com o índice
        for (int j = 0; j < v; j++)
        {
            if(grafo[i][j] == 1) //se o valor do armazenado for igual a 1
            {
                cout << "->" << j; //aparecerá o número do vértice
            }
        }
        cout << endl; //quebra de linha
    }

    return 0;
}

