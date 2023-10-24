#include "classes.hpp"

void ListaNomes::entradaDeDados(){
    string nome;
    cout << "Digite o nome que deseja adicionar: " << endl;
    cin.ignore();
    getline(cin, nome);
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
