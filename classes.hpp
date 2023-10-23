#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <algorithm>

using namespace std;



class Data
{
private:
    int dia, mes, ano;
public:
    Data() = default;
    Data(Data &&) = default;
    Data(const Data &) = default;
    Data &operator=(Data &&) = default;
    Data &operator=(const Data &) = default;
    ~Data() = default;

    static int compara(Data d1, Data d2);
	Data (int _dia, int _mes, int _ano);
	string toString();
};

class Lista
{
private:

public:
    Lista() = default;
    Lista(Lista &&) = default;
    Lista(const Lista &) = default;
    Lista &operator=(Lista &&) = default;
    Lista &operator=(const Lista &) = default;
    ~Lista() = default;

    virtual void entradaDeDados() =0;
	virtual void mostraMediana() =0;
	virtual void mostraMenor() =0;
	virtual void mostraMaior() =0;
    
};

class ListaNomes : public Lista {
	vector<string> lista;
	
	public:
        void entradaDeDados() override;
        void mostraMediana() override;
        void mostraMenor() override;
        void mostraMaior() override;
};

class ListaDatas : public Lista, public Data {
	vector<Data> lista;
	
	public:
		
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
};

class ListaSalarios : public Lista {
	vector<float> lista;
	
	public:
	
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
};

class ListaIdades : public Lista {
	vector<int> lista;
	
	public:
		
		/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/	
	void entradaDeDados() override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
};


#endif