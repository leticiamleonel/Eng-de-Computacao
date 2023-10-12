//Biblioteca criada para utiliza��o da �rvore bin�ria

#ifndef ARVOREB_H_INCLUDED
#define ARVOREB_H_INCLUDED
#include <iostream>
#include "ListaA.h"

using namespace std;

//estrutura para cria��o do n�
struct TNo
{
    TAluno aluno;
    TNo *esquerda;
    TNo *direita;
};

//estrutura para cria��o da �rvore
struct TArvoreBin
{
    string nomeArvore;
    int contAlunos;
    TNo *raiz;
};

// OPERA��ES
//criando �rvore vazia
void criarArvoreBinVazia(TArvoreBin &a, string n);

//inserindo alunos na arvore
void inserirArvoreB(TArvoreBin &a, TNo *&no, TAluno al);

//�rvore em ordem
void percorrerINOrdem(TNo *&no);

//�rvore pr� ordem
void percorrerPreOrdem(TNo *&no);

//�rvore pos ordem
void percorrerPosOrdem(TNo *&no);

//mostrando alunos aprovados baseando na ordem inserida na arvore
void MostrarAlunosAprovados(TNo *&no);

//soma das notas
double SomaDasNotas(TNo *&no);

#endif // ARVOREB_H_INCLUDED
