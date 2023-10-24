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

void ListaNomes::mostraMenor() {
    int tamanho = 0;
    tamanho = this->lista.size();
    cout << "O ultimo nome encontrado na lista eh: " << this->lista[tamanho-1] << endl;
    //return *min_element(this->lista.begin(), this->lista.end());
}

void ListaNomes::mostraMaior() {
    cout << "O primeiro nome encontrado na lista eh: " << this->lista[0] << endl;
    //return *max_element(this->lista.begin(), this->lista.end());
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