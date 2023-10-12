//biblioteca em função do TAD LISTA POR ARRANJO

#ifndef LISTAA_H_INCLUDED
#define LISTAA_H_INCLUDED
#include <iostream>
#include "global.h"

using namespace std;

struct TAluno{
    string nome;
    int mat; // Número de matrícula
    double P1; // Nota da prova 1
    double P2; // Nota da prova 2
    double TF; // Nota do Trabalho Final
    double NotaF; // Soma das notas da prova 1, 2 e do Trabalho Final
};

// Criando a entidade Lista por Arranjo
struct TListaA{
    TAluno vetAlunos[MaxTam]; // suporte para os itens
    int primeiro;       // controle do inicio da lista
    int ultimo;         // controle da última posição da lista
};

// Chamada das operações básicas que estão no arquivo implem-ListaA.cpp

void inicializarLA(TListaA &lA); // assinatura do procedimento de inicialização da lista

bool estaVaziaLA(TListaA lA); // assinatura da operação de verificação se a lista está vazia

bool estaCheiaLA(TListaA lA); // assinatura da operação de verificação se a lista está cheia

void inserirAlunosLA(TListaA &lA, TAluno x); // assinatura do procedimento de inserção de alunos na lista

void mostrarAlunosLA(TListaA lA); // assinatura do procedimento de mostrar a lista

void cadastrarAlunosLA(TListaA &lA); // assinatura do procedimento de cadastro de alunos

void retirarAlunoLA(TListaA &lA,int al); // assinatura do procedimento de retirada de alunos

double CalcularNotaFLA(double p1, double p2, double tf); // assinatura da operação de calcular nota final

int PegaMenorNotaLA(TListaA l); // assinatura da operação de menor nota

int PegaMenorMatLA(TListaA l); // assinatura da operação de maior nota

double CalcularMediaFLA(TListaA l); // assinatura da operação para calcular média das notas finais

#endif // LISTAA_H_INCLUDED
