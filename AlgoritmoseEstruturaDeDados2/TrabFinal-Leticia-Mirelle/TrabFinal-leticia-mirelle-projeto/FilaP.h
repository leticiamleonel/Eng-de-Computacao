//biblioteca em função do TAD FILA POR PONTEIRO

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
    TCelula *tras;// controle de trás da fila
};

void inicializarFP(TFilaP &f); // assinatura do procedimento de inicialização da fila

bool estaVaziaFilaP(TFilaP f); // assinatura da operação de verificação se a fila está vazia

void inserirAlunosFP(TFilaP &f, TAluno x); // assinatura do procedimento de inserção de alunos na fila

void mostrarAlunosFP(TFilaP f); // assinatura do procedimento de mostrar a fila

void retirarAlunoFP(TFilaP &f); // assinatura do procedimento de retirada de alunos

void cadastrarAlunoFP(TFilaP &f); // assinatura do procedimento de cadastro de alunos

double CalcularMediaFP(TFilaP f); // assinatura da operação de calcular media final

#endif // FILAP_H_INCLUDED
