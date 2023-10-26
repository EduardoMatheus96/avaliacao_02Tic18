#include "classes.hpp";

void ListaDatas::entradaDeDados(const string &dado)
{
    this->lista.push_back(dado);
}

void ListaDatas::mostraMediana()
{
    // Classifica o vetor de datas em ordem crescente
    sort(this->lista.begin(), this->lista.end());

    // Calcula o tamanho do vetor
    int tamanho = this->lista.size();

    // Retorna a mediana, caso seja par, retorna o extremo da esquerda

    cout << "Mediana: " << this->lista[(tamanho / 2) - 1] << endl;
}
void ListaDatas::mostraMenor()
{

    // Inicializa a data mínima com a primeira data do vetor
    string menorData = this->lista[0];

    // Percorre o vetor de datas para encontrar a menor data
    for (const string &data : this->lista)
    {
        if (Data::compara(data, menorData) < 0)
        {
            menorData = data;
        }
    }
    cout << "Menor data da lista: " << menorData << endl;
}
void ListaDatas::mostraMaior()
{
    string maiorData = this->lista[0];

    // Percorre o vetor de datas para encontrar a maior data
    for (const string &data : this->lista)
    {
        if (Data::compara(data, maiorData) > 0)
        {
            maiorData = data;
        }
    }

    cout << "Maior data da lista: " << maiorData << endl;
}

void ListaDatas::listarEmOrdem()
{
    sort(this->lista.begin(), this->lista.end());

    for (const string &data : this->lista)
    {
        cout << data << endl;
    }
}

void ListaDatas::listaNElementos(unsigned int n)
{
    int limite = 0;

    for (const string &data : this->lista)
    {
        cout << data << endl;
        limite++;
        if (limite == n)
        {
            break;
        }
    }
}

void ListaDatas::adicionaViaTeclado(ListaDatas& value){
    int dia, mes, ano;
	ListaDatas listaDeDatas;
    cout << "Informe o dia: ";
    cin >> dia;
    cout << "\nInforme o mes: ";
    cin >> mes;
    cout << "\nInforme o ano (aaaa): ";
    cin >> ano;
    cout << endl;
    
    Data data(dia, mes, ano);

    value.entradaDeDados(data.toString());
}