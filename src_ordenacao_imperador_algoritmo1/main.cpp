#include <iostream>
#include <string>
#include "civilizacao.h"
#include "bubbleSortModificado.h"

using namespace std;

int main(){
    //Variáveis:
    Civilizacao *conjunto_de_civilizacoes;
    string nome;
    int distancia, tamanho, i, n = -1;

    while(n <= 0 || n > 2000000) //Garante que o usuário informe um valor inválido;
        cin >> n;

    conjunto_de_civilizacoes = (Civilizacao *) malloc(n * sizeof(Civilizacao)); //Aloca memória dinamicamente para o vetor de civilizações;
    
    for(i = 0; i < n; i++){ //Recebe as 3 informações de cada uma das N entradas e atribui aos seus devidos lugares no array;
        cin >> nome;
        conjunto_de_civilizacoes[i].SetNome(nome);
        cin >> distancia;
        conjunto_de_civilizacoes[i].SetDistancia(distancia);
        cin >> tamanho;
        conjunto_de_civilizacoes[i].SetPopulacao(tamanho);
    }

    bubble_sort(conjunto_de_civilizacoes, n); //Ordena as civilizações segundo os critérios especificados;
    
    for(i = 0; i < n; i++){ //Imprime na tela as civilizações ordenadas;
        conjunto_de_civilizacoes[i].Imprime();
        cout << endl;
    }

    free(conjunto_de_civilizacoes); //Libera a memória alocada dinamicamente;
    
    return 0;
}