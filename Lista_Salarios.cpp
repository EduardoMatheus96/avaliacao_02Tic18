#include "classes.hpp"

void entradaDeDados(float sal){
    this->salario.push_back(sal);
    cout << "O valor do salário foi cadastrado com sucesso!" << sal << endl;
}

/*void ListaSalarios::mostraMedia() {
    float soma = 0;
    for (float salario : this->salario) {
        soma += salario;
    }
   cout << "A média dos salários da lista eh: " << soma / this->salario.size() << endl;
}*/

void ListaSalarios::mostraMediana() {
    vector<float> copiaSalarios = this->salario;
    sort(copiaSalarios.begin(), copiaSalarios.end());
    size_t tamanho = copiaSalarios.size();
    
    if (tamanho % 2 == 0) {
        // Se o tamanho da lista é par, médiana é a média dos dois valores do meio.
        cout << "A mediana dos salarios da lista eh: " << (copiaSalarios[tamanho / 2 - 1] + copiaSalarios[tamanho / 2]) / 2.0 << endl;
        //return (copiaSalarios[tamanho / 2 - 1] + copiaSalarios[tamanho / 2]) / 2.0;
    } else {
        // Se o tamanho da lista é ímpar, a mediana é o valor do meio.
        cout << "A mediana dos salarios da lista eh: " << copiaSalarios[tamanho / 2] << endl;
        //return copiaSalarios[tamanho / 2];
    }
}

void ListaSalarios::mostraMenor() {
    cout << "O menor salário encontrado na lista eh: " << *min_element(this->salario.begin(), this->salario.end()) << endl;
    //return *min_element(this->salario.begin(), this->salario.end());
}

void ListaSalarios::mostraMaior() {
    cout << "O maior salário encontrado na lista eh: " << *max_element(this->salario.begin(), this->salario.end()) << endl;
    //return *max_element(this->salario.begin(), this->salario.end());
}
