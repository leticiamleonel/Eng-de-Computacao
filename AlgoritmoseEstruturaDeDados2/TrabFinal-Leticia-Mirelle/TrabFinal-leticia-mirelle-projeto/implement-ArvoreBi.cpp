#include <iostream>
#include "FilaP.h"
#include "ListaA.h"
#include "ArvoreB.h"

using namespace std;

// OPERA��ES
//criando �rvore vazia
void criarArvoreBinVazia(TArvoreBin &a, string n)
{
    a.nomeArvore = n;
    a.contAlunos = 0;
    a.raiz = NULL;
}

// soma das notas
double SomaDasNotas(TNo *&no)
{
    double Soma = 0;
    if(no!=NULL){
        Soma = SomaDasNotas(no->esquerda) + no->aluno.NotaF + SomaDasNotas(no->direita);
    }
    return Soma;
}

//inserindo alunos na arvore
void inserirArvoreB(TArvoreBin &a, TNo *&no, TAluno al)
{
    if (no == NULL){ // CASO BASE/PARADA
        no = new TNo;
        no->aluno = al;
        no->esquerda = NULL;
        no->direita = NULL;
        a.contAlunos++;
        if (a.raiz == NULL){
            a.raiz = no;
        }
    }
    else{
        if (al.NotaF < no->aluno.NotaF){ // chamada recursiva ESQ
            inserirArvoreB(a,no->esquerda,al);
        }
        else{
            if (al.NotaF > no->aluno.NotaF){ // chamada recursiva DIR
                inserirArvoreB(a,no->direita,al);
            }
            else{
                if (al.NotaF == no->aluno.NotaF){
                    cout << "N�o posso inserir. Nota j� existe!" << endl;
                 }
            }
        }

    }
}

//�rvore em ordem
void percorrerINOrdem(TNo *&no)
{
    if(no!=NULL){
        percorrerINOrdem(no->esquerda);
        cout << "N�mero de matr�cula: " << no->aluno.mat << endl;
        cout << "Nome do aluno: " << no->aluno.nome << endl;
        cout << "Nota final: " << no->aluno.NotaF << endl;
        cout << "------------------" << endl;
        percorrerINOrdem(no->direita);
    }
}

//�rvore pr� ordem
void percorrerPreOrdem(TNo *&no)
{
    if(no!=NULL){
        cout << no->aluno.NotaF << ", ";
        percorrerPreOrdem(no->esquerda);
        percorrerPreOrdem(no->direita);
    }
}

//�rvore pos ordem
void percorrerPosOrdem(TNo *&no)
{
    if(no!=NULL){
        percorrerPosOrdem(no->esquerda);
        percorrerPosOrdem(no->direita);
        cout << no->aluno.NotaF << ", ";
    }
}

//mostrando alunos aprovados baseando na ordem inserida na arvore
void MostrarAlunosAprovados(TNo *&no)
{
    if((no!=NULL) && (no->aluno.NotaF>=60)){
        MostrarAlunosAprovados(no->direita);
        cout << "N�mero de matr�cula: " << no->aluno.mat << endl;
        cout << "Nome do aluno: " << no->aluno.nome << endl;
        cout << "Nota final: " << no->aluno.NotaF << endl;
        cout << "------------------" << endl;
    }
}
