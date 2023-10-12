/*
================================================
Trabalho - Implementação de métodos de ordenação
Disciplina - Projeto e análise de algoritmos
Alunos - André Dias e Letícia Leonel
IFMG - campus Bambuí
2022.01
================================================
*/

//Inclusão das bibliotecas que serão utilizadas no programa principal
#include <iostream>  //biblioteca de entrada e saída
#include "biblio.h" //biblioteca com as entradas das funções
#include <clocale> //biblioteca para utilização de caracteres especiais

using namespace std;

//programa principal
int main()
{

    int op; //variável inteira utilizada para armazenar dados que o usuário inserir

    setlocale(LC_ALL, "Portuguese"); //assinatura para utilizar caracteres especiais

    TLista lista; //instanciando uma variável para utilizar a lista

    criarListaVazia(lista); // chamada da função de criação da lista vazia para começar a inserir os dados

    cout << "\n*********************************************************" << endl;
    cout << "                        BEM VINDO                        " << endl;
    cout << "*********************************************************\n" << endl;

    cadastrar(lista); // chamada da função para cadastrar os dados inseridos na lista
    cout << "\nNúmeros inseridos para serem oredenados:" << endl;
    mostrar(lista); // chamada da função para mostrar os dados inseridos na lista para o usuário

    // menu para interação com o usuário
    cout << "\n=================== MENU DE OPERAÇÕES ===================" << endl;
    cout << "============ ESCOLHA UM MÉTODO PARA ORDENAR: ============" << endl;
    cout << "    1 - InsertionSort." << endl;
    cout << "    2 - BubbleSort." << endl;
    cout << "    3 - SelectionSort." << endl;
    cout << "    4 - MergeSort." << endl;
    cout << "    5 - QuickSort." << endl;
    cout << "    6 - Encerrar o programa." << endl;
    cout << "=========================================================\n" << endl;


    cout << "\n Escolha uma Opção: ";
    cin >> op;

    if(op == 1)
    {
        insertionSort(lista); //chamada da operação de InsertionSort
        cout << "Números ordenados utilizando o InsertionSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usuário
    }
    else if (op == 2)
    {
        bubbleSort(lista);//chamada da operação de BubbleSort
        cout << "Números ordenados utilizando o BubbleSort." << endl;
        mostrar(lista); //mostrando os dados ordenados ao usuário
    }
    else if (op == 3)
    {
        selectionSort(lista); //chamada da operação de SelectionSort
        cout << "Números ordenados utilizando o SelectionSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usuário
    }
    else if (op == 4)
    {
        mergeSort(lista, 0, (maxTam - 1)); //chamada da operação de MergeSort
        cout << "Números ordenados utilizando o MergeSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usuário
    }
    else if (op == 5)
    {
        quicksort(lista, 0, maxTam); //chamada da operação de QuickSort
        cout << "Números ordenados utilizando o QuickSort." << endl;
        mostrar(lista); //mostrando as os dados ordenados ao usuário
    }
    else if (op == 6)
    {
        cout << "\n Programa encerrado! Volte Sempre!" <<endl; // encerra o programa
    }
    else
    {
        cout << "\n Opção inválida!" << endl; // caso default
    }

    return 0; //retorno que a função do programa principal deve ter
}
