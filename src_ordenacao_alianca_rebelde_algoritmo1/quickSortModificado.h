#ifndef QUICKSORTMODIFICADO_H
#define QUICKSORTMODIFICADO_H
#include "civilizacao.h"

void troca(Civilizacao *x, Civilizacao *y);
void particao(int esq, int dir, int *i, int *j, Civilizacao *c);
void ordena(int esq, int dir, Civilizacao *c);
void quick_sort(Civilizacao *c, int n);

#endif // QUICKSORTMODIFICADO_H