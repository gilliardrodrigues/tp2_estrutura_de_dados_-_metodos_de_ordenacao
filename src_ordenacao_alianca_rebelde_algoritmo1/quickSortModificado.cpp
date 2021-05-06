#include "quickSortModificado.h"

void troca(Civilizacao *x, Civilizacao *y){ //Troca 2 elementos de posição num vetor;
    Civilizacao *aux = new Civilizacao;
    *aux = *x;
    *x = *y;
    *y = *aux;
    delete aux;
}

void particao(int esq, int dir, int *i, int *j, Civilizacao *c){ 
    Civilizacao x, aux;
    *i = esq; //Iterador;
    *j = dir; //Iterador;
    x = c[(*i + *j)/2]; //Elemento central como pivô;
    do{
        while(c[*i].GetDistancia() < x.GetDistancia() || (c[*i].GetDistancia() == x.GetDistancia() && c[*i].GetPopulacao() > x.GetPopulacao())) //Dessa forma ele também para se a distância for igual à do pivô mas a população for menor
            (*i)++;
        while(c[*j].GetDistancia() > x.GetDistancia() || (c[*j].GetDistancia() == x.GetDistancia() && c[*j].GetPopulacao() < x.GetPopulacao())) //Dessa forma ele também para se a distância for igual à do pivô mas a população for maior
            (*j)--;
        if(*i <= *j){ //Se os iteradores ainda não se cruzaram, troca os elementos;
            troca(&c[*i], &c[*j]);
            (*i)++; //Continua caminhando;
            (*j)--; //Continua caminhando;
        }
    } while(*i <= *j); //Enquanto não se cruzarem;
}

void ordena(int esq, int dir, Civilizacao *c){
    int i, j;
    particao(esq, dir, &i, &j, c);
    if(esq < j)
        ordena(esq, j, c); //Repete o processo para a partição de esq a j;
    if(i < dir)
        ordena(i, dir, c); //Repete o processo para a partição de i a dir;
}

void quick_sort(Civilizacao *c, int n){
    ordena(0, n - 1, c); //Ordena o vetor;
}