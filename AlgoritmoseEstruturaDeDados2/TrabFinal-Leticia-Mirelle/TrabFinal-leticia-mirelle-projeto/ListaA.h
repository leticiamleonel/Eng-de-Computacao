//biblioteca em fun��o do TAD LISTA POR ARRANJO

#ifndef LISTAA_H_INCLUDED
#define LISTAA_H_INCLUDED
#include <iostream>
#include "global.h"

using namespace std;

struct TAluno{
    string nome;
    int mat; // N�mero de matr�cula
    double P1; // Nota da prova 1
    double P2; // Nota da prova 2
    double TF; // Nota do Trabalho Final
    double NotaF; // Soma das notas da prova 1, 2 e do Trabalho Final
};

// Criando a entidade Lista por Arranjo
struct TListaA{
    TAluno vetAlunos[MaxTam]; // suporte para os itens
    int primeiro;       // controle do inicio da lista
    int ultimo;         // controle da �ltima posi��o da lista
};

// Chamada das opera��es b�sicas que est�o no arquivo implem-ListaA.cpp

void inicializarLA(TListaA &lA); // assinatura do procedimento de inicializa��o da lista

bool estaVaziaLA(TListaA lA); // assinatura da opera��o de verifica��o se a lista est� vazia

bool estaCheiaLA(TListaA lA); // assinatura da opera��o de verifica��o se a lista est� cheia

void inserirAlunosLA(TListaA &lA, TAluno x); // assinatura do procedimento de inser��o de alunos na lista

void mostrarAlunosLA(TListaA lA); // assinatura do procedimento de mostrar a lista

void cadastrarAlunosLA(TListaA &lA); // assinatura do procedimento de cadastro de alunos

void retirarAlunoLA(TListaA &lA,int al); // assinatura do procedimento de retirada de alunos

double CalcularNotaFLA(double p1, double p2, double tf); // assinatura da opera��o de calcular nota final

int PegaMenorNotaLA(TListaA l); // assinatura da opera��o de menor nota

int PegaMenorMatLA(TListaA l); // assinatura da opera��o de maior nota

double CalcularMediaFLA(TListaA l); // assinatura da opera��o para calcular m�dia das notas finais

#endif // LISTAA_H_INCLUDED
