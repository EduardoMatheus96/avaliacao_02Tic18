#include "classes.hpp"


void ListaNomes::entradaDeDados(string nome){

    this->lista.push_back(nome);
    cout << "O nome foi cadastrado com sucesso!" << nome << endl;

}

void ListaNomes::mostraMediana() {
    int tamanho = 0;
    tamanho = this->lista.size();
    tamanho /= 2;
    
        cout << "O nome no meio da lista eh: " << this->lista[tamanho] << endl;
}

void ListaNomes::mostraMenor()
{
int n = this->lista.size() - 1;
bool trocou;
do
{
    trocou = false;
    for (int j = 0; j < n; j++)
    {
        if (this->lista.at(j) < this->lista.at(j + 1)) // Modificação aqui para verificar se o elemento atual é menor que o próximo
        {
            swap(this->lista[j], this->lista[j + 1]);
            trocou = true;
        }
    }
    n--;
} while (trocou);
for (auto &&i : this->lista)
{
    cout << i << endl;
}
}

void ListaNomes::mostraMaior() {
    int n = this->lista.size() - 1;
    bool trocou;
    do
    {
        trocou = false;
        for (int j = 0; j < n; j++)
        {
            if (this->lista.at(j) > this->lista.at(j + 1))
            {
                swap(this->lista[j], this->lista[j + 1]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);
}

void ListaNomes::ordemAlfa()
{
    int n = this->lista.size() - 1;
    bool trocou;
    do
    {
        trocou = false;
        for (int j = 0; j < n; j++)
        {
            if (this->lista.at(j) > this->lista.at(j + 1))
            {
                swap(this->lista[j], this->lista[j + 1]);
                trocou = true;
            }
        }
        n--;
    } while (trocou);
}

int main(void){

    
}
