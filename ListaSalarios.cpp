#include "classes.hpp"

void ListaSalarios::entradaDeDados(float sal){
    this->salario.push_back(sal);
}

void ListaSalarios::mostraMediana() {
    vector<float> copiaSalarios = this->salario;
    sort(copiaSalarios.begin(), copiaSalarios.end());
    size_t tamanho = copiaSalarios.size();
    
    if (tamanho % 2 == 0) {
        (copiaSalarios[tamanho / 2 - 1] + copiaSalarios[tamanho / 2]) / 2.0; 
    } else {
        copiaSalarios[tamanho / 2]; 
    }
}

void ListaSalarios::mostraMenor() {
    *min_element(this->salario.begin(), this->salario.end());
}

void ListaSalarios::mostraMaior() {
    *max_element(this->salario.begin(), this->salario.end());
}

void ListaSalarios::listarEmOrdem() {
    sort(this->salario.begin(), this->salario.end());  
}
