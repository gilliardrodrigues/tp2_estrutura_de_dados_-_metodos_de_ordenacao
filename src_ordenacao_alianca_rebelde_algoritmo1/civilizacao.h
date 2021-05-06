#ifndef CIVILIZACAO_H
#define CIVILIZACAO_H
#include <string>

using namespace std;

class Civilizacao{
    public:
        Civilizacao();
        void SetNome(string nome);
        string GetNome();
        void SetDistancia(int distancia);
        int GetDistancia();
        void SetPopulacao(int tamanho);
        int GetPopulacao();
        void Imprime(); //Imprime as 3 informações sobre a civilização;
    private:
        string nome_civilizacao;
        int distancia_civilizacao;
        int tamanho_populacao;
};
#endif // CIVILIZACAO_H
