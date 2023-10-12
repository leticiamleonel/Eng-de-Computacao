// implementaçao das operações da FilaP
#include <iostream>
#include "FilaP.h"
#include "ListaA.h"

using namespace std;

// OPERAÇÕES BÁSICAS

//inicializando a fila
void inicializarFP(TFilaP &f)
{
   f.frente = new TCelula;
   f.tras = f.frente;
   f.frente->proximo = NULL;
}

//operação para verificar se a fila está vazia
bool estaVaziaFilaP(TFilaP f)
{
    return f.frente == f.tras;
}

//operação para inserir alunos na fila
void inserirAlunosFP(TFilaP &f, TAluno x)
{
    f.tras->proximo = new TCelula;
    f.tras = f.tras->proximo;
    f.tras->aluno = x;
    f.tras->proximo = NULL;
}

//mostrando alunos que foram inseridos na fila
void mostrarAlunosFP(TFilaP f)
{
    TCelula *celAux;
    celAux = f.frente->proximo;

    if (estaVaziaFilaP(f)){
        cout << "Fila vazia! Nenhum aluno para mostrar!" << endl;
    }
    else{
        while (celAux != NULL){
            cout << "Matrícula:   " << celAux->aluno.mat << endl;
            cout << "Nome:   " << celAux->aluno.nome << endl;
            cout << "Nota da prova 1: " << celAux->aluno.P1 << endl;
            cout << "Nota da prova 2: " << celAux->aluno.P2 << endl;
            cout << "Nota do trabalho final: " << celAux->aluno.TF << endl;
            cout << "Nota final: " << celAux ->aluno.NotaF << endl;
            celAux = celAux->proximo;
        }
    }
}

//operação caso precise retirar algum aluno da fila
void retirarAlunoFP(TFilaP &f)
{
    if (estaVaziaFilaP(f)){
        cout << "Fila Vazia! Nenhum aluno para remover." << endl;
    }
    else{
        TCelula *aux = f.frente;
        cout << "Aluno de matrícula: " << aux->proximo->aluno.mat << " foi removido." << endl;
        f.frente = f.frente->proximo;
        delete(aux);
    }
}

// cadastrando alunos com um laço de repetição
// condição de parada: responder N

void cadastrarAlunoFP(TFilaP &f)
{
    TAluno alunoAux;
    char resp = 'S';

    while (resp != 'N'){
        cout << "Entrando dados pelo teclado: " << endl;
        cout << "Digite a matrícula: ";
        cin >> alunoAux.mat;
        cout << "Digite o nome: ";
        cin >> alunoAux.nome;
        cout << "Digite a nota da prova 1: ";
        cin >> alunoAux.P1;
        cout << "Digite a nota da prova 2: ";
        cin >> alunoAux.P2;
        cout << "Digite a nota do trabalho final: ";
        cin >> alunoAux.TF;
        // chamando o procedimento enfileirar
        inserirAlunosFP(f,alunoAux);
        cout << "Deseja cadastrar outro aluno? (S/N): ";
        cin >> resp;
    }
}

//calculando media das notas finais
double CalcularMediaFP(TFilaP f)
{
    double SomaDasNotas = 0, Media = 0;

    TCelula *celAux;

    celAux = f.frente->proximo;

    while(celAux != NULL){
        SomaDasNotas = SomaDasNotas + f.frente->proximo->aluno.NotaF;
        celAux = celAux->proximo;
    }
    Media = SomaDasNotas/10;

    return Media;
}
