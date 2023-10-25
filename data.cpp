#include "classes.hpp";

Data::Data(int _dia, int _mes, int _ano)
{
}
int Data::compara(Data d1, Data d2)
{

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
    return to_string(dia) + "/" + to_string(mes) + "/" + to_string(ano);
}
