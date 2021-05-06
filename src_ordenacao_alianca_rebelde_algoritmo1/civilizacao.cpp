#include <string>
#include <iostream>
#include "civilizacao.h"

using namespace std;

Civilizacao::Civilizacao(){ 
    nome_civilizacao = "";
    distancia_civilizacao = -1;
    tamanho_populacao = -1;
}
void Civilizacao::SetNome(string nome){
    nome_civilizacao = nome;
}
string Civilizacao::GetNome(){
    return nome_civilizacao;
}
void Civilizacao::SetDistancia(int distancia){
    distancia_civilizacao = distancia;
}
int Civilizacao::GetDistancia(){
    return distancia_civilizacao;
}
void Civilizacao::SetPopulacao(int tamanho){
    tamanho_populacao = tamanho;
}
int Civilizacao::GetPopulacao(){
    return tamanho_populacao;
}
void Civilizacao::Imprime(){
    cout << nome_civilizacao << " " << distancia_civilizacao << " " << tamanho_populacao; //Imprime as 3 informações sobre a civilização;
}
