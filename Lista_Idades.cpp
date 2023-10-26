#include "classes.hpp"

void ListaIdades::entradaDeDados(const string& dado)
{
    int idade = stoi(dado);
    this->lista.push_back(idade);
    cout << "Aqui vai mostrar a entrada de dados" << idade << endl;
}

void ListaIdades::mostraMediana()
/*criar uma função para mostrar a mediana*/
{
    vector<int> _lista = this->lista;
    sort(_lista.begin(), _lista.end());
    size_t tamanho = _lista.size();

    if (tamanho
        % 2 == 0)
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

void ListaIdades::listarEmOrdem() {
    sort(this->lista.begin(), this->lista.end());  
    for (auto &&i : this->lista)
    {

        cout << i << endl;
    }
}

void ListaIdades::listaNElementos(unsigned int n)
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

void ListaIdades::adicionaViaTeclado(ListaIdades& value){
    string context;
    cout << "Insira a idade para adicionar a lista: ";
    // getline(cin, context);
    cin >> context;
    cout << endl;
    value.entradaDeDados(context);
}