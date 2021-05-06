#include "heapSortModificado.h"
#include "civilizacao.h"

void troca(Civilizacao *x, Civilizacao *y){ //Troca 2 elementos de posição num vetor;
    Civilizacao *aux = new Civilizacao;
    *aux = *x;
    *x = *y;
    *y = *aux;
    delete aux;
}

void heap(Civilizacao *c, int n, int i) { //Constrói e refaz o heap;
    int maior = i; //Maior elemento; 
    int esq = 2 * i + 1; //Nó filho da esquerda;
    int dir = 2 * i + 2; //Nó filho da direita;

    if(esq < n && c[esq].GetDistancia() > c[maior].GetDistancia()) { 
        maior = esq; 
    } else if(esq < n && c[esq].GetDistancia() == c[maior].GetDistancia()) { //Condição de desempate segundo às especificações;
        if(c[esq].GetPopulacao() < c[maior].GetPopulacao()) {
            maior = esq;
        }
    }

    if(dir < n && c[dir].GetDistancia() > c[maior].GetDistancia())
        maior = dir;
    else if(dir < n && c[dir].GetDistancia() == c[maior].GetDistancia()) //Condição de desempate segundo às especificações;
        if(c[dir].GetPopulacao() < c[maior].GetPopulacao())
            maior = dir;
    
    if( maior != i){
        troca(&c[i], &c[maior]); //Troca 2 civilizações de lugar;
        heap(c, n, maior); //Reconstrói o heap;
    }
}

void heap_sort(Civilizacao *c, int n){ 
    // Construindo o heap:
    for(int i = n/2 - 1; i>=0; i--)
        heap(c, n, i);
    
    for(int i = n -1; i >= 0; i--){
        troca(&c[0], &c[i]); //Troca as 2 civilizações;
        heap(c, i, 0); //Troca 2 civilizações de lugar;
    }
}