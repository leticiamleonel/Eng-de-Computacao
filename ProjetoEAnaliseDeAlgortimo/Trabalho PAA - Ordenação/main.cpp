/*
================================================
Trabalho - Implementa��o de m�todos de ordena��o
Disciplina - Projeto e an�lise de algoritmos
Alunos - Andr� Dias e Let�cia Leonel
IFMG - campus Bambu�
2022.01
================================================
*/

//Inclus�o das bibliotecas que ser�o utilizadas no programa principal
#include <iostream>  //biblioteca de entrada e sa�da
#include "biblio.h" //biblioteca com as entradas das fun��es
#include <clocale> //biblioteca para utiliza��o de caracteres especiais

using namespace std;

//programa principal
int main()
{

    int op; //vari�vel inteira utilizada para armazenar dados que o usu�rio inserir

    setlocale(LC_ALL, "Portuguese"); //assinatura para utilizar caracteres especiais

    TLista lista; //instanciando uma vari�vel para utilizar a lista

    criarListaVazia(lista); // chamada da fun��o de cria��o da lista vazia para come�ar a inserir os dados

    cout << "\n*********************************************************" << endl;
    cout << "                        BEM VINDO                        " << endl;
    cout << "*********************************************************\n" << endl;

    cadastrar(lista); // chamada da fun��o para cadastrar os dados inseridos na lista
    cout << "\nN�meros inseridos para serem oredenados:" << endl;
    mostrar(lista); // chamada da fun��o para mostrar os dados inseridos na lista para o usu�rio

    // menu para intera��o com o usu�rio
    cout << "\n=================== MENU DE OPERA��ES ===================" << endl;
    cout << "============ ESCOLHA UM M�TODO PARA ORDENAR: ============" << endl;
    cout << "    1 - InsertionSort." << endl;
    cout << "    2 - BubbleSort." << endl;
    cout << "    3 - SelectionSort." << endl;
    cout << "    4 - MergeSort." << endl;
    cout << "    5 - QuickSort." << endl;
    cout << "    6 - Encerrar o programa." << endl;
    cout << "=========================================================\n" << endl;


    cout << "\n Escolha uma Op��o: ";
    cin >> op;

    if(op == 1)
    {
        insertionSort(lista); //chamada da opera��o de InsertionSort
        cout << "N�meros ordenados utilizando o InsertionSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usu�rio
    }
    else if (op == 2)
    {
        bubbleSort(lista);//chamada da opera��o de BubbleSort
        cout << "N�meros ordenados utilizando o BubbleSort." << endl;
        mostrar(lista); //mostrando os dados ordenados ao usu�rio
    }
    else if (op == 3)
    {
        selectionSort(lista); //chamada da opera��o de SelectionSort
        cout << "N�meros ordenados utilizando o SelectionSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usu�rio
    }
    else if (op == 4)
    {
        mergeSort(lista, 0, (maxTam - 1)); //chamada da opera��o de MergeSort
        cout << "N�meros ordenados utilizando o MergeSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usu�rio
    }
    else if (op == 5)
    {
        quicksort(lista, 0, maxTam); //chamada da opera��o de QuickSort
        cout << "N�meros ordenados utilizando o QuickSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usu�rio
    }
    else if (op == 6)
    {
        cout << "\n Programa encerrado! Volte Sempre!" <<endl; // encerra o programa
    }
    else
    {
        cout << "\n Op��o inv�lida!" << endl; // caso default
    }

    return 0; //retorno que a fun��o do programa principal deve ter
}
