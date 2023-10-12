#include <iostream> //biblioteca de entrada e sa�da
#include "biblio.h" ////biblioteca com as entradas das fun��es

using namespace std;

// fun��o de opera��o do metodo de ordena��o INSERTIONSORT
void insertionSort(TLista &l)  //fun��o passada por refer�ncia pois os dados ser�o manipulados
{
    //la�o de repeti��o
    for (int i = 1; i < maxTam; i++)
    {
        int aux = l.vetItens[i]; // seleciona o primeiro elemento n�o ordenado
        int j = i - 1;
        while (aux < l.vetItens[j] && j >= 0) // Este while desloca os elementos para a direita para abrir espa�o para o elemento n�o ordenado
        {
            l.vetItens[j + 1] = l.vetItens[j];
            j--;
        }
        l.vetItens[j + 1] = aux; // o elemento � inserido em sua posi��o correta
    }
}

// fun��o de opera��o do metodo de ordena��o BUBBLESORT
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
                // faz a troca de posi��o entre os elementos
                aux = l.vetItens[i];
                l.vetItens[i] = l.vetItens[j];
                l.vetItens[j] = aux;
            }
        }
    }
}

// fun��o de opera��o do metodo de ordena��o SELECTIONSORT
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
            // verifica se elemento contido na posi��o j � menor que aux
            if(l.vetItens[j] < l.vetItens[aux])
            {
                // substitui o elemento de aux pelo elemento na posi��o j
                aux = j;
            }
        }
        // faz a troca de posi��o entre os elementos
        x = l.vetItens[aux];
        l.vetItens[aux] = l.vetItens[i];
        l.vetItens[i] = x;
    }
}

// fun��o de opera��o complementar do metodo de ordena��o MERGESORT
void merge(TLista &l, int esq, int meio, int dir)
{
    int i = esq;
    int j = meio + 1;
    int k = esq;

    // cria��o de um vetor tempor�rio
    int aux[maxTam];

    while (i <= meio && j <= dir)
    {
        // compara os elementos do vetor
        if (l.vetItens[i] <= l.vetItens[j])
        {
            // insere no vetor auxiliar os elementos na posi��o i
            aux[k] = l.vetItens[i];
            i++;
            k++;
        }
        else
        {
            // insere no vetor auxiliar os elementos na posi��o j
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

    // copia do vetor tempor�rio para o original
    for (i = esq; i < k; i++)
    {
        l.vetItens[i] = aux[i];
    }
}

// fun��o de opera��o do metodo de ordena��o MERRGESORT
void mergeSort(TLista &l, int esq, int dir)
{
    if (esq < dir)
    {
        // encontra o ponto m�dio do vetor
        int meio = (esq + dir) / 2;

        // ordena��o recursiva da primeira e sugunda metade do vetor
        mergeSort(l, esq, meio);
        mergeSort(l, meio + 1, dir);

        merge(l, esq, meio, dir);
    }
}

// fun��o de opera��o do metodo de ordena��o QUICKSORT
void quicksort(TLista &l, int esq, int dir)
{
    int i, j, pivo, aux;
    i = esq;
    j = dir-1;
    pivo = l.vetItens[(esq + dir) / 2]; // defini um pivo
    while(i <= j) // n�o se cruzarem
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
            // faz a troca de posi��o entre os elementos
            aux = l.vetItens[i];
            l.vetItens[i] = l.vetItens[j];
            l.vetItens[j] = aux;
            i++;
            j--;
        }
    }

    if(j > esq)
    {
        // ordena��o recursiva para esquerda
        quicksort(l, esq, j+1);
    }
    if(i < dir)
    {
        // ordena��o recursiva para direita
        quicksort(l, i, dir);
    }
}
