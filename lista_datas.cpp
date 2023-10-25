#include "classes.hpp";

void ListaDatas::entradaDeDados(Data data)
{
    this->lista.push_back(data);
}
Data ListaDatas::mostraMediana()
{
    // Classifica o vetor de datas em ordem crescente
    std::sort(this->lista.begin(), this->lista.end(), Data::compara);

    // Calcula o tamanho do vetor
    int tamanho = this->lista.size();

    // Retorna a mediana, caso seja par, retorna o extremo da esquerda
    return this->lista[tamanho / 2];
}
Data ListaDatas::mostraMenor()
{

    // Inicializa a data mínima com a primeira data do vetor
    Data menorData = this->lista[0];

    // Percorre o vetor de datas para encontrar a menor data
    for (const Data &data : this->lista)
    {
        if (Data::compara(data, menorData) < 0)
        {
            menorData = data;
        }
    }

    return menorData;
}
Data ListaDatas::mostraMaior()
{
    Data maiorData = this->lista[0];

    // Percorre o vetor de datas para encontrar a maior data
    for (const Data &data : this->lista)
    {
        if (Data::compara(data, maiorData) > 0)
        {
            maiorData = data;
        }
    }

    return maiorData;
}

void ListaDatas::listarEmOrdem()
{
    std::sort(this->lista.begin(), this->lista.end(), Data::compara);

    for (const Data &data : this->lista)
    {
        cout << data.dia << "/" << data.mes << "/" << data.ano << endl;
    }
}