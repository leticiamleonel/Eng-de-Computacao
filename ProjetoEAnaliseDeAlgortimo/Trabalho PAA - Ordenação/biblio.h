#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include <iostream>

using namespace std;

//Biblioteca .h com a entrada das fun��es

const int maxTam = 5; //constante criada

// estrutura usada para armazenar o vetor que ser� utilizado para os dados que ser�o inseridos pelo usu�rio
struct TLista
{
    int vetItens[maxTam]; // suporte para os itens
    int primeiro;            // vari�vel de controle
    int ultimo;              // vari�vel de controle
};

//Declarando as Fun��es
void criarListaVazia(TLista &l); //assinatura da fun��o para criar uma lista vazia
void inserir(TLista &l, int x); //assinatura da fun��o para inserir os dados na lista
void cadastrar(TLista &l); //assinatura da fun��o para cadastrar os dados na lista
void mostrar(TLista l); //assinatura da fun��o para mostrar os dados cadastrados na lista vazia
void insertionSort(TLista &l); //assinatura da opera��o de insertionSort
void selectionSort(TLista &l); //assinatura da opera��o de selectionSort
void bubbleSort(TLista &l); //assinatura da opera��o de bubbleSort
void mergeSort(TLista &l, int esq, int dir); //assinatura da opera��o de mergeSort
void quicksort(TLista &l, int esq, int dir); //assinatura da opera��o de quickSort

#endif // BIBLIO_H_INCLUDED
