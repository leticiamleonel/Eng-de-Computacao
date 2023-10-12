//biblioteca criada para utilizar as transferências e menu
#ifndef OPERACOESESP_H_INCLUDED
#define OPERACOESESP_H_INCLUDED
#include "ListaA.h"
#include "FilaP.h"
#include "ArvoreB.h"
#include "global.h"

using namespace std;

//transferindo dados  da lista para fila
void transfParaFilaP(TListaA &l, TFilaP &f);

//procedimento para definição da raiz
void ValorDaRaiz(TArvoreBin &a, TFilaP &f);

//copiando dados da fila para a arvore
void copiarParaArvoreB(TFilaP &f, TArvoreBin &a);

//criação do menu principal
void menu(TListaA l, TFilaP f, TArvoreBin a);


#endif // OPERACOESESP_H_INCLUDED
