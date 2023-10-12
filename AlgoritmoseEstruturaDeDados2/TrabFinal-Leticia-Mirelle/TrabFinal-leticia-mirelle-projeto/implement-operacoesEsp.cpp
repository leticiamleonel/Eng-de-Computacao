#include <iostream>
#include "FilaP.h"
#include "ListaA.h"
#include "ArvoreB.h"
#include "OperacoesEsp.h"

using namespace std;

//transferindo dados  da lista para fila
void transfParaFilaP(TListaA &l, TFilaP &f)
{
    for (int i = l.ultimo; i > l.primeiro; i--){
        int posicao;
        posicao = PegaMenorNotaLA(l);
        if(estaVaziaLA(l)){
            cout << "Não há nada para transferir. " << endl;
        }
        else{
            inserirAlunosFP(f, l.vetAlunos[posicao]);
            retirarAlunoLA(l, posicao);
        }
    }
}

//procedimento para definição da raiz
void ValorDaRaiz(TArvoreBin &a, TFilaP &f)
{
    int raiz;

    raiz = CalcularMediaFP(f);

    TCelula *celAux;
    celAux = f.frente->proximo;

    while(celAux != NULL){
        if(celAux->aluno.NotaF == raiz){
            inserirArvoreB(a, a.raiz, celAux->aluno);
        }
        celAux = celAux->proximo;
    }
}

//copiando dados da fila para a arvore
void copiarParaArvoreB(TFilaP &f, TArvoreBin &a)
{
    TCelula *celAux;
    celAux = f.frente->proximo;

    double raiz = CalcularMediaFP(f);

    while(celAux != NULL){
        if(celAux->aluno.NotaF != raiz){
            inserirArvoreB(a, a.raiz, celAux->aluno);
        }
        celAux = celAux->proximo;
    }
}

//criação do menu principal
void menu(TListaA l, TFilaP f, TArvoreBin a)
{
    double MediaDasNotas;
    int opcao, no, direita;
    char resp = 'S';

    while (resp != 'N'){
        cout << "[1] Mostrar os alunos em ordem crescente referente as notas." << endl;
        cout << "[2] Mostrar a media das notas finais. " << endl;
        cout << "[3] Mostrar os alunos aprovados. " << endl;
        cout << "Digite a opcao desejada: ";
        cin >> opcao;

        if(opcao == 1){
            percorrerINOrdem(a.raiz);
        }
        else{
            if (opcao == 2){
                MediaDasNotas = SomaDasNotas(a.raiz)/MaxTam;
                cout << "A média das notas finais foi de: " << MediaDasNotas;
            }
            else{
                if(opcao == 3)
                {
                    cout >> MostrarAlunosAprovados(no->direita);

                }
            }
        }
        cout << endl;
        cout << "Deseja continuar? Digite S para sim e N para nao: " << endl;
        cin >> resp;
    }
}
