#include "classes.hpp"

void ListaNomes::entradaDeDados(const string &dado)
{

    this->lista.push_back(dado);
    cout << "O nome foi cadastrado com sucesso!" << dado << endl;
}

void ListaNomes::mostraMediana()
{
    int tamanho = 0;
    tamanho = this->lista.size();
    tamanho /= 2;

    cout << "O nome no meio da lista eh: " << this->lista[tamanho] << endl;
}

void ListaNomes::mostraMenor()
{
    int tamanho = 0;
    tamanho = this->lista.size();
    cout << "O ultimo nome encontrado na lista eh: " << this->lista[tamanho - 1] << endl;
    // return *min_element(this->lista.begin(), this->lista.end());
}

void ListaNomes::mostraMaior()
{
    cout << "O primeiro nome encontrado na lista eh: " << this->lista[0] << endl;
    // return *max_element(this->lista.begin(), this->lista.end());
}

void ListaNomes::listarEmOrdem()
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
    for (auto &&i : this->lista)
    {
        cout << i << endl;
    }
}

void ListaNomes::listaNElementos(unsigned int n)
{
    // listarEmOrdem();
    unsigned int limite = 0;
    for (auto &&i : this->lista)
    {
        if (limite < n)
        {
            cout << i << endl;
            limite++;
        }
        else
            break;
    }
}
