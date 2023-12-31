#include "classes.hpp";
#include <sstream>

Data::Data(int dia, int mes, int ano)
{
    this->dia = dia;
    this->mes = mes;
    this->ano = ano;
}
Data Data::fromData(string data)
{

    istringstream ss(data);
    string dia, mes, ano;

    getline(ss, dia, '/');
    getline(ss, mes, '/');
    getline(ss, ano);

    int diaInt = stoi(dia);
    int mesInt = stoi(mes);
    int anoInt = stoi(ano);

    Data d(diaInt, mesInt, anoInt);

    return d;
}

int Data::compara(string d1_s, string d2_s)
{

    Data d1 = Data::fromData(d1_s);
    Data d2 = Data::fromData(d2_s);

    if (d1.ano < d2.ano)
    {
        return 1; // d1 é mais antiga
    }
    else if (d1.ano > d2.ano)
    {
        return 2; // d2 é mais antiga
    }
    else
    {
        if (d1.mes < d2.mes)
        {
            return 1; // d1 é mais antiga
        }
        else if (d1.mes > d2.mes)
        {
            return 2; // d2 é mais antiga
        }
        else
        {
            if (d1.dia < d2.dia)
            {
                return 1; // d1 é mais antiga
            }
            else if (d1.dia > d2.dia)
            {
                return 2; // d2 é mais antiga
            }
            else
            {
                return 0; // As datas são iguais
            }
        }
    }
}

string Data::toString()
{
    return to_string(this->dia) + "/" + to_string(this->mes) + "/" + to_string(this->ano);
}
