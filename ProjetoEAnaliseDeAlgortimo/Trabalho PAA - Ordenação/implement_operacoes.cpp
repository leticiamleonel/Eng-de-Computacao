#include <iostream> //biblioteca de entrada e saída
#include "biblio.h" ////biblioteca com as entradas das funções

using namespace std;

// função de operação do metodo de ordenação INSERTIONSORT
void insertionSort(TLista &l)  //função passada por referência pois os dados serão manipulados
{
    //laço de repetição
    for (int i = 1; i < maxTam; i++)
    {
        int aux = l.vetItens[i]; // seleciona o primeiro elemento não ordenado
        int j = i - 1;
        while (aux < l.vetItens[j] && j >= 0) // Este while desloca os elementos para a direita para abrir espaço para o elemento não ordenado
        {
            l.vetItens[j + 1] = l.vetItens[j];
            j--;
        }
        l.vetItens[j + 1] = aux; // o elemento é inserido em sua posição correta
    }
}

// função de operação do metodo de ordenação BUBBLESORT
void bubbleSort(TLista &l)
{
    int i, j, aux;
    i = 0;
    j = 0;
    aux = 0;

    for(i = 0; i < maxTam; i++)
    {
        for(j = i + 1; j < maxTam; j++)
        {
            // compara os elementos adjacentes
            if(l.vetItens[i] > l.vetItens[j])
            {
                // faz a troca de posição entre os elementos
                aux = l.vetItens[i];
                l.vetItens[i] = l.vetItens[j];
                l.vetItens[j] = aux;
            }
        }
    }
}

// função de operação do metodo de ordenação SELECTIONSORT
void selectionSort(TLista &l)
{
    int i, j, aux;
    int x;

    for(i = 0; i < maxTam; i++)
    {
        // Seleciona o primeiro elemento do vetor
        aux = i;
        // percorre o vetor comparando os elemento com aux
        for(j = i + 1; j <= maxTam - 1; j++)
        {
            // verifica se elemento contido na posição j é menor que aux
            if(l.vetItens[j] < l.vetItens[aux])
            {
                // substitui o elemento de aux pelo elemento na posição j
                aux = j;
            }
        }
        // faz a troca de posição entre os elementos
        x = l.vetItens[aux];
        l.vetItens[aux] = l.vetItens[i];
        l.vetItens[i] = x;
    }
}

// função de operação complementar do metodo de ordenação MERGESORT
void merge(TLista &l, int esq, int meio, int dir)
{
    int i = esq;
    int j = meio + 1;
    int k = esq;

    // criação de um vetor temporário
    int aux[maxTam];

    while (i <= meio && j <= dir)
    {
        // compara os elementos do vetor
        if (l.vetItens[i] <= l.vetItens[j])
        {
            // insere no vetor auxiliar os elementos na posição i
            aux[k] = l.vetItens[i];
            i++;
            k++;
        }
        else
        {
            // insere no vetor auxiliar os elementos na posição j
            aux[k] = l.vetItens[j];
            j++;
            k++;
        }
    }

    // copia os elementos restantes da primeira metade
    while (i <= meio)
    {
        aux[k] = l.vetItens[i];
        i++;
        k++;
    }

    // copia os elementos restantes da segunda metade
    while (j <= dir)
    {
        aux[k] = l.vetItens[j];
        j++;
        k++;
    }

    // copia do vetor temporário para o original
    for (i = esq; i < k; i++)
    {
        l.vetItens[i] = aux[i];
    }
}

// função de operação do metodo de ordenação MERRGESORT
void mergeSort(TLista &l, int esq, int dir)
{
    if (esq < dir)
    {
        // encontra o ponto médio do vetor
        int meio = (esq + dir) / 2;

        // ordenação recursiva da primeira e sugunda metade do vetor
        mergeSort(l, esq, meio);
        mergeSort(l, meio + 1, dir);

        merge(l, esq, meio, dir);
    }
}

// função de operação do metodo de ordenação QUICKSORT
void quicksort(TLista &l, int esq, int dir)
{
    int i, j, pivo, aux;
    i = esq;
    j = dir-1;
    pivo = l.vetItens[(esq + dir) / 2]; // defini um pivo
    while(i <= j) // não se cruzarem
    {
        while(l.vetItens[i] < pivo && i < dir)
        {
            i++;
        }
        while(l.vetItens[j] > pivo && j > esq)
        {
            j--;
        }
        if(i <= j)
        {
            // faz a troca de posição entre os elementos
            aux = l.vetItens[i];
            l.vetItens[i] = l.vetItens[j];
            l.vetItens[j] = aux;
            i++;
            j--;
        }
    }

    if(j > esq)
    {
        // ordenação recursiva para esquerda
        quicksort(l, esq, j+1);
    }
    if(i < dir)
    {
        // ordenação recursiva para direita
        quicksort(l, i, dir);
    }
}
