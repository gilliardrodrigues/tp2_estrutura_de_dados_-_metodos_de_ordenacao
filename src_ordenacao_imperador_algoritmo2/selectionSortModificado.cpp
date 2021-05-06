#include "selectionSortModificado.h"

void troca(Civilizacao *x, Civilizacao *y){ //Troca 2 elementos de posição num vetor;
    Civilizacao *aux = new Civilizacao;
    *aux = *x;
    *x = *y;
    *y = *aux;
    delete aux;
}

void selection_sort(Civilizacao *c, int n){
    int i, j, menor;
    for(i = 0; i < n - 1; i++){
        menor = i; //define a posição do menor elemento como a primeira;
        for(j = i + 1; j < n; j++){
            if(c[j].GetDistancia() < c[menor].GetDistancia())
                menor = j; //se uma posição j contiver uma distância menor que a distância da civilização da posição "menor", então a posição "menor" passa a ser igual a essa posição j;
            else if(c[j].GetDistancia() == c[menor].GetDistancia()) //Caso a posição j não contiver um distância menor que a posição "menor", analisa se é igual;
                if(c[j].GetPopulacao() > c[menor].GetPopulacao()) //Se for igual, analisa se a população de c[j] é maior que a de c[menor];
                    menor = j; //se sim, então a posição "menor" passa a ser igual à posição j;
        }
        troca(&c[i], &c[menor]); //faz a troca, mandando o n-ésimo menor elemento (cuja posição está armazenada na posição "menor") para a n-ésima menor posição;
    }
}