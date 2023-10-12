//-----------------------------------------------------
// Instituto Federrral de Minas Gerais - Campus Bambuí
// Trabalho Final - Algoritmo e Estrutura de Dados 2
// Alunas: Mirelle e Letícia
// Professor: Gabriela Silva
//-----------------------------------------------------


//Inclusão das bibliotecas que serão utilizadas no programa principal
#include <iostream>
#include "ListaA.h"
#include "FilaP.h"
#include "OperacoesEsp.h"
#include "ArvoreB.h"
#include <clocale>

using namespace std;

//Programa principal
int main()
{
    setlocale(LC_ALL, "Portuguese");

    TAluno aluno;
    TListaA lista;

    inicializarLA(lista); //Chamada de inicialização da lista

    aluno.mat = 1;
    aluno.nome = "João";
    aluno.P1 = 20;
    aluno.P2 = 20;
    aluno.TF = 20;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno); //inserindo alunos na lista

    aluno.mat = 2;
    aluno.nome = "Larissa";
    aluno.P1 = 40;
    aluno.P2 = 15;
    aluno.TF = 15;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    aluno.mat = 3;
    aluno.nome = "Maria";
    aluno.P1 = 40;
    aluno.P2 = 30;
    aluno.TF = 10;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    aluno.mat = 4;
    aluno.nome = "Gabriel";
    aluno.P1 = 20;
    aluno.P2 = 40;
    aluno.TF = 5;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    aluno.mat = 5;
    aluno.nome = "Matheus";
    aluno.P1 = 30;
    aluno.P2 = 27;
    aluno.TF = 9;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    aluno.mat = 6;
    aluno.nome = "Pedro";
    aluno.P1 = 15;
    aluno.P2 = 21;
    aluno.TF = 0;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista, aluno);

    aluno.mat = 7;
    aluno.nome = "Laura";
    aluno.P1 = 40;
    aluno.P2 = 40;
    aluno.TF = 10;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista, aluno);

    aluno.mat = 8;
    aluno.nome = "Luíza";
    aluno.P1 = 25;
    aluno.P2 = 20;
    aluno.TF = 19;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista, aluno);

    aluno.mat = 9;
    aluno.nome = "Ana";
    aluno.P1 = 2;
    aluno.P2 = 20;
    aluno.TF = 7;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    aluno.mat = 10;
    aluno.nome = "Marcos";
    aluno.P1 = 15;
    aluno.P2 = 17;
    aluno.TF = 8;
    aluno.NotaF = CalcularNotaFLA(aluno.P1, aluno.P2, aluno.TF);

    inserirAlunosLA(lista,aluno);

    // mostrarAlunosLA(lista); // verificar se os dados foram preenchidos corretamente

    TFilaP fila;

    inicializarFP(fila); // inicializando o Tad fila por ponteiro

    transfParaFilaP(lista, fila); //chamada de transferência dos dados da Lista por arranjo para Fila por Ponteiro

    // mostrarAlunosFP(fila); verifiar se os dados foram transferidos corretamente

    CalcularMediaFP(fila); //chamada para calcular a média das notas finais

    TArvoreBin arvore1;

    criarArvoreBinVazia(arvore1, "Árvore"); // chamada para criar a árvore binária

    ValorDaRaiz(arvore1, fila); // definindo a raiz

    copiarParaArvoreB(fila, arvore1); //copiando dados da Fila para a Árvore

    menu(lista, fila, arvore1); // Chamada do meu usando Lista, Fila e Árvore


    return 0;
}
