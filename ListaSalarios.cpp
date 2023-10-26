#include "classes.hpp"

void ListaSalarios::entradaDeDados(const string &dado)
{
    float valor = stof(dado);
    this->salario.push_back(valor);
    cout << "O salario foi cadastrado com sucesso!" << endl;

}

void ListaSalarios::mostraMediana()
{
    vector<float> copiaSalarios = this->salario;
    sort(copiaSalarios.begin(), copiaSalarios.end());
    size_t tamanho = copiaSalarios.size();

    if (tamanho % 2 == 0)
    {
        cout << "A Mediana dos salarios eh: " 
            << ((copiaSalarios[tamanho / 2 - 1] + copiaSalarios[tamanho / 2]) / 2.0)
            << endl;
    }
    else
    {
        cout << "A Mediana dos salarios eh: " 
            << copiaSalarios[tamanho / 2]
            << endl;
    }
}

void ListaSalarios::mostraMenor()
{
    cout << "O menor salario eh: " 
        << *min_element(this->salario.begin(), this->salario.end())
        << endl;
}

void ListaSalarios::mostraMaior()
{
    cout << "O maior salario eh: " 
        << *max_element(this->salario.begin(), this->salario.end())
        << endl;
}

void ListaSalarios::listarEmOrdem()
{
    sort(this->salario.begin(), this->salario.end());
    for (auto &&i : this->salario)
    {

        cout << i << endl;
    }
}

void ListaSalarios::listaNElementos(unsigned int n)
{
    // listarEmOrdem();
    unsigned int limite = 0;
    for (auto &&i : this->salario)
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

void ListaSalarios::adicionaViaTeclado(ListaSalarios& value){
    string context;
    cout << "Insira o salario para adicionar a lista: ";
    // getline(cin, context);
    cin >> context;
    cout << endl;
    value.entradaDeDados(context);
}