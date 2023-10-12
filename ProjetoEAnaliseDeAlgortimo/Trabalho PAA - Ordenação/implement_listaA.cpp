//incluindo as bibliotecas para a implementa��o
#include <iostream> //biblioteca de entrada e sa�da
#include "biblio.h" ////biblioteca com as entradas das fun��es

using namespace std;

// fun��o para criar uma lista vazia
void criarListaVazia(TLista &l) //fun��o passada por refer�ncia pois os dados ser�o modificados no decorrer da execu��o
{
    l.primeiro = 0; //definindo que l.primeiro tem que come�ar com 0
    l.ultimo = l.primeiro; //definindo que l.ultimo tem que ser igual a l.primeiro, sendo assim o l.ultimo tamb�m come�a com 0
    //se os dois est�o valendo 0, quer dizer que a lista que foi criada est� vazia
}

// fun��o para inserir os elementos na lista vazia
void inserir(TLista &l, int x) //fun��o passada por refer�ncia pois os dados ser�o modificados no decorrer da execu��o
{
    //definindo uma vari�vel inteira para ser utilizada
    l.vetItens[l.ultimo] = x; // atribuindo ao vetor a vari�vel criada, para inserir os dados sempre no l.ultimo pois ele est� vazio
    l.ultimo++;                // incrementando em ordem crescente na lista
}

// opera��o para cadastrar dados na lista
void cadastrar(TLista &l) //fun��o passada por refer�ncia pois os dados ser�o modificados no decorrer da execu��o
{
    int x; //vari�vel inteira criada

    cout << "Digite " << maxTam << " n�meros que deseja ordenar: " << endl; //pedindo ao usu�rio para inserir os dados
    for (int i = 0; i < maxTam; i++) //la�o de repeti��o para cadastrar os dados no vetor come�ando pelo �ndece 0
    {
        cout << "Digite o " << i+1 << "�: "; //pedindo ao usu�rio para inserir os dados
        cin >> x; //armazenando os dados inseridos

        inserir(l, x); //inserindo os dados que foram armazenados na vari�vel x na lista
    }
}

// opera��o para mostrar os dados ao usu�rio
void mostrar(TLista l) //fun��o passada apenas por c�pia pois ela n�o ter� nenhuma modifica��o nos dados
{
    for (int i = l.primeiro; i < l.ultimo; i++) //la�o de repeti��o para mostrar os dados at� que i for menor que l.ultimo.
    {
        cout << "Posi��o " << i << ": " << l.vetItens[i] << endl; //mostrando os dados inseridos no vetor e suas posi��es
    }
}

