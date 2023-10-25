#include "classes.hpp";

void ListaDatas::entradaDeDados(Data data)
{
    this->lista.push_back(data);
}
Data ListaDatas::mostraMediana(vector<Data> datas)
{
    // Classifica o vetor de datas em ordem crescente
    std::sort(datas.begin(), datas.end(), Data::compara);

    // Calcula o tamanho do vetor
    int tamanho = datas.size();

    // Retorna a mediana, caso seja par, retorna o extremo da esquerda
    return datas[tamanho / 2];
}
Data ListaDatas::mostraMenor(vector<Data> datas)
{

    // Inicializa a data mínima com a primeira data do vetor
    Data menorData = datas[0];

    // Percorre o vetor de datas para encontrar a menor data
    for (const Data &data : datas)
    {
        if (Data::compara(data, menorData) < 0)
        {
            menorData = data;
        }
    }

    return menorData;
}
Data ListaDatas::mostraMaior(vector<Data> datas)
{
    Data maiorData = datas[0];

    // Percorre o vetor de datas para encontrar a maior data
    for (const Data &data : datas)
    {
        if (Data::compara(data, maiorData) > 0)
        {
            maiorData = data;
        }
    }

    return maiorData;
}