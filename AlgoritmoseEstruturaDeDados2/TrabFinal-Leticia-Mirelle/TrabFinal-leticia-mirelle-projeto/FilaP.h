//biblioteca em fun��o do TAD FILA POR PONTEIRO

#ifndef FILAP_H_INCLUDED
#define FILAP_H_INCLUDED
#include <iostream>
#include "ListaA.h"
#include "global.h"

using namespace std;

// ESTRUTURAS

struct TCelula
{
    TAluno aluno;
    TCelula *proximo;
};

// Criando a entidade Fila por ponteiro
struct TFilaP
{
    TCelula *frente;// controle da frente da fila
    TCelula *tras;// controle de tr�s da fila
};

void inicializarFP(TFilaP &f); // assinatura do procedimento de inicializa��o da fila

bool estaVaziaFilaP(TFilaP f); // assinatura da opera��o de verifica��o se a fila est� vazia

void inserirAlunosFP(TFilaP &f, TAluno x); // assinatura do procedimento de inser��o de alunos na fila

void mostrarAlunosFP(TFilaP f); // assinatura do procedimento de mostrar a fila

void retirarAlunoFP(TFilaP &f); // assinatura do procedimento de retirada de alunos

void cadastrarAlunoFP(TFilaP &f); // assinatura do procedimento de cadastro de alunos

double CalcularMediaFP(TFilaP f); // assinatura da opera��o de calcular media final

#endif // FILAP_H_INCLUDED
