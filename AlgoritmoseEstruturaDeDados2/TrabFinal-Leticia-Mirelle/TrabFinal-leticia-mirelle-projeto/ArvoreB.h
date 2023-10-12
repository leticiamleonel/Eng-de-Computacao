//Biblioteca criada para utilização da árvore binária

#ifndef ARVOREB_H_INCLUDED
#define ARVOREB_H_INCLUDED
#include <iostream>
#include "ListaA.h"

using namespace std;

//estrutura para criação do nó
struct TNo
{
    TAluno aluno;
    TNo *esquerda;
    TNo *direita;
};

//estrutura para criação da árvore
struct TArvoreBin
{
    string nomeArvore;
    int contAlunos;
    TNo *raiz;
};

// OPERAÇÕES
//criando árvore vazia
void criarArvoreBinVazia(TArvoreBin &a, string n);

//inserindo alunos na arvore
void inserirArvoreB(TArvoreBin &a, TNo *&no, TAluno al);

//árvore em ordem
void percorrerINOrdem(TNo *&no);

//árvore pré ordem
void percorrerPreOrdem(TNo *&no);

//árvore pos ordem
void percorrerPosOrdem(TNo *&no);

//mostrando alunos aprovados baseando na ordem inserida na arvore
void MostrarAlunosAprovados(TNo *&no);

//soma das notas
double SomaDasNotas(TNo *&no);

#endif // ARVOREB_H_INCLUDED
