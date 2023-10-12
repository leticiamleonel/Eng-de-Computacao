// Projeto e An�lise de Algoritmo
// Exerc�cio - Grafos (matriz e lista)
// Let�cia Leonel
#include <iostream> //biblioteca para uso do COUT e do CIN
#include <clocale> //biblioteca para caracteres especiais
using namespace std;

//programa principal
int main()
{
    setlocale(LC_ALL, "Portuguese");//comando para utilizar os caracteres especiais

    int coluna, linha, v, a; //identificadores para as vari�veis
                             // coluna = coluna da matriz, linha = linha da matriz, v = v�rtice, a = aresta

    //perguntando ao usu�rio
    cout << "Digite a quantidade de v�ttices que tem seu grafo: " << endl;
    //armazenando o valor na vari�vel v�rtice
    cin >> v;

    cout << "Digite a quantidade de arestas: " << endl;
    //armazenando o valor na vari�vel aresta
    cin >> a;

    //criando uma vari�vel para a matriz e armazenando os valores inseridos do v�rtice. Um grafo sempre ter� o mesmo valor de
    //linhas e colunas
    int grafo[v][v];

    //inicialmente, vamos atribuir o valor 0 para a matriz toda utilizando o la�o de repeti��o
    for (int i=0; i < v; i++) //linha
    {
        for (int j = 0; j < v; j++) //coluna
        {
            grafo[i][j] = 0; //atribuindo o valor 0 para a matriz
        }
    }


    //inserindo as arestas na matriz utilizando um la�o de repeti��o
    for (int i = 0; i < a; i++)
    {
        //perguntando ao usu�rio
        cout << "1� v�rtice: "; //primeiro v�rtice da liga��o
        cin >> linha; //armazenando o valor na vari�vel coluna

        cout << "2� v�rtice? "; //segundo v�rtice da liga��o
        cin >> coluna; //armazenando o valor na vari�vel linha

        //se o resultado dos v�rtices inseridos forem 0, o valor continua em 0
        if (grafo[linha][coluna] == 0)
        {
            grafo[linha][coluna] = 1; // se n�o, o valor muda para 1
        }
    }

        cout << endl; //quebra de linha

    //--------------------------------------------------------------------------------
    //mostrando a matriz resultante
    cout << endl; //quebra de linha
    cout << "---------- Matriz de adjac�ncias ----------" << endl;;
    //la�o de repeti��o para motrar a matriz resultante
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
    cout << "---------- Lista de adjac�ncias ----------" << endl;
    //la�o de repeti��o para mostrar a lista
    for(int i = 0; i < v; i++)
    {
        cout << "Para: " << i <<  ":"; // motrando a lista de acordo com o �ndice
        for (int j = 0; j < v; j++)
        {
            if(grafo[i][j] == 1) //se o valor do armazenado for igual a 1
            {
                cout << "->" << j; //aparecer� o n�mero do v�rtice
            }
        }
        cout << endl; //quebra de linha
    }

    return 0;
}

