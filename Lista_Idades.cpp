#include "classes.hpp"

void ListaIdades::entradaDeDados(int idade)
{
    this->lista.push_back(idade);
    cout << "Aqui vai mostrar a entrada de dados" << idade << endl;
}

void ListaIdades::mostraMediana()
/*criar uma função para mostrar a mediana*/
{
    vector<int> _lista = this->lista;
    sort(_lista.begin(), _lista.end());
    size_t tamanho = _lista.size();

    if tamanho
        % 2 == 0
        {
            cout << "Aqui vai mostrar a mediana da lista de idades" << (_lista[tamanho / 2 - 1] + _lista[tamanho / 2]) / 2.0 << endl;
        }
    else
        {
            cout << "Aqui vai mostrar a mediana da lista de idades" << _lista[tamanho / 2] << endl;
        }
}

void ListaIdades::mostraMenor()
{
    cout << "A menor idade eh" << *min_element(this->lista.begin(), this->lista.end()) << endl;
}

void ListaIdades::mostraMaior()
{
    cout << "A maior idade eh " << *max_element(this->lista.begin(), this->lista.end()) << endl;
}
