// implementa�ao das opera��es da listaA
#include <iostream>
#include "ListaA.h"

using namespace std;

void inicializarLA(TListaA &lA)
{ // Passagem da lista POR REFER�NCIA
    lA.primeiro = 0;
    lA.ultimo = lA.primeiro;
}

// Opera��o: verificar se est� vazia
bool estaVaziaLA(TListaA lA)
{
    return lA.primeiro == lA.ultimo;
}

// Opera��o: verificar se est� cheia
bool estaCheiaLA(TListaA lA)
{
    return lA.ultimo == MaxTam;
}

// Opera��o: inserir item
void inserirAlunosLA(TListaA &lA, TAluno x)
{
    if (estaCheiaLA(lA)){
        cout << "Lista cheia! N�o � poss�vel inserir mais alunos." << endl;
    }
    else{
        lA.vetAlunos[lA.ultimo] = x;
        lA.ultimo++;
    }
}

// Opera��o: mostrar itens da lista
void mostrarAlunosLA(TListaA lA)
{
    if (estaVaziaLA(lA)){
        cout << "Lista vazia! Nenhum aluno foi inserido." << endl;
    }
    else{
        for(int i = lA.primeiro; i < lA.ultimo; i++){
            cout << "Aluno " << i+1 << ": " << endl;
            cout << "Nome: " << lA.vetAlunos[i].nome << endl;
            cout << "Matr�cula: " << lA.vetAlunos[i].mat << endl;
            cout << "Nota da prova 1: " << lA.vetAlunos[i].P1 << endl;
            cout << "Nota da prova 2: " << lA.vetAlunos[i].P2 << endl;
            cout << "Nota do trabalho final: " << lA.vetAlunos[i].TF << endl;
            cout << "Nota final: " << lA.vetAlunos[i].NotaF << endl;
            cout << "-----------------------------------------" << endl;
            cout << endl;
        }
    }
    cout << "-----------------------------------" << endl;
}

//cadastrando os alunos na TlistaA
void cadastrarAlunosLA(TListaA &lA)
{
    TAluno alunoAux;
    cout << "Cadastrando aluno..." << endl;


    for (int i = 0;i < MaxTam; i++){
        cout << "Digite os dados do aluno: " << endl;
        cout << "Matr�cula: ";
        cin >> alunoAux.mat;
        cout << "Nome: ";
        cin >> alunoAux.nome;
        cout << "Nota da prova 1: ";
        cin >> alunoAux.P1;
        cout << "Nota da prova 2: ";
        cin >> alunoAux.P2;
        cout << "Nota do trabalho final: ";
        cin >> alunoAux.TF;

        inserirAlunosLA(lA,alunoAux);
    }
}

//opera��o retirar, caso precise retirar um aluno da lista
void retirarAlunoLA(TListaA &lA,int al)
{
    if (estaVaziaLA(lA) || al < 0 || al >= lA.ultimo){
        cout << "Lista vazia ou posi��o fora do intervalo." << endl;
    }
    else{
        lA.ultimo--;
        for(int aux=al; aux<lA.ultimo; aux++){
            lA.vetAlunos[aux] = lA.vetAlunos[aux+1];
        }
    }
}

//calculando nota final
double CalcularNotaFLA(double p1, double p2, double tf)
{
    double NF;
    NF = p1 + p2 + tf;
    return NF;
}

//menor nota
int PegaMenorNotaLA(TListaA l)
{
    int posMenor = 0;
    int menorNF = l.vetAlunos[0].NotaF; //inicializa com valor absurdo pequeno
    if(estaVaziaLA(l)){
        return 0;
    }
    else{
        for (int i=l.primeiro;i<l.ultimo;i++){
            if (l.vetAlunos[i].NotaF < menorNF){
                menorNF = l.vetAlunos[i].NotaF;
                posMenor = i;
            }
        }
    }
    return posMenor;
}

//maior nota
int PegaMenorMatLA(TListaA l)
{
    int posMenor = 0;
    int menorMat = l.vetAlunos[0].mat;

    if(estaVaziaLA(l)){
        return 0;
    }
    else{
        for(int i=l.primeiro; i<l.ultimo; i++){
            if(l.vetAlunos[i].mat < menorMat){
                menorMat = l.vetAlunos[i].mat;
                posMenor = i;
            }
        }
        return posMenor;
    }
}
