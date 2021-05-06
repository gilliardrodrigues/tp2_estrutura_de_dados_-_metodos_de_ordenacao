#include "bubbleSortModificado.h"

void troca(Civilizacao *x, Civilizacao *y){ //Troca 2 elementos de posição num vetor;
    Civilizacao *aux = new Civilizacao;
    *aux = *x;
    *x = *y;
    *y = *aux;
    delete aux;
}

void bubble_sort(Civilizacao *c, int n){
    int i, j;
    for(i = 0; i < n - 1; i++)
        for(j = 1; j < n - i; j++){
            if(c[j].GetDistancia() < c[j-1].GetDistancia()) //Compara as distâncias dos elementos adjacentes e ordena colocando a civilização menos distante primeiro;
                troca(&c[j-1], &c[j]);
            else if(c[j].GetDistancia() == c[j-1].GetDistancia())
                if(c[j].GetPopulacao() > c[j-1].GetPopulacao()) //Se a distância for igual, compara os elementos adjacentes de acordo com o tamanho da população e coloca a mais populosa primeiro;
                    troca(&c[j-1], &c[j]);
        }
}
