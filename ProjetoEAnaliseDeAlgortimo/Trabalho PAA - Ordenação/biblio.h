#ifndef BIBLIO_H_INCLUDED
#define BIBLIO_H_INCLUDED
#include <iostream>

using namespace std;

//Biblioteca .h com a entrada das funções

const int maxTam = 5; //constante criada

// estrutura usada para armazenar o vetor que será utilizado para os dados que serão inseridos pelo usuário
struct TLista
{
    int vetItens[maxTam]; // suporte para os itens
    int primeiro;            // variável de controle
    int ultimo;              // variável de controle
};

//Declarando as Funções
void criarListaVazia(TLista &l); //assinatura da função para criar uma lista vazia
void inserir(TLista &l, int x); //assinatura da função para inserir os dados na lista
void cadastrar(TLista &l); //assinatura da função para cadastrar os dados na lista
void mostrar(TLista l); //assinatura da função para mostrar os dados cadastrados na lista vazia
void insertionSort(TLista &l); //assinatura da operação de insertionSort
void selectionSort(TLista &l); //assinatura da operação de selectionSort
void bubbleSort(TLista &l); //assinatura da operação de bubbleSort
void mergeSort(TLista &l, int esq, int dir); //assinatura da operação de mergeSort
void quicksort(TLista &l, int esq, int dir); //assinatura da operação de quickSort

#endif // BIBLIO_H_INCLUDED
