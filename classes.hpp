#ifndef CLASSES_HPP
#define CLASSES_HPP
#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <map>

using namespace std;

class Data
{
private:
	int dia, mes, ano;

public:
	Data();
	Data(Data &&) = default;
	Data(int dia, int mes, int ano);
	Data(const Data &) = default;
	Data &operator=(Data &&) = default;
	Data &operator=(const Data &) = default;
	~Data() = default;

	static int compara(string d1_s, string d2_s);
	string toString();
	static Data fromData(string data);
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

	virtual void entradaDeDados(const string &dado) = 0;
	virtual void mostraMediana() = 0;
	virtual void mostraMenor() = 0;
	virtual void mostraMaior() = 0;
	virtual void listarEmOrdem() = 0;
	virtual void listaNElementos(unsigned int n) = 0;
};

class ListaNomes : public Lista
{
	vector<string> lista;

public:
	// ListaNomes();
	void entradaDeDados(const string &dado) override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
	void listarEmOrdem() override;
	void listaNElementos(unsigned int n) override;
	void adicionaViaTeclado(ListaNomes& value);
};

class ListaDatas : public Lista
{
	vector<string> lista;

public:
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/
	void entradaDeDados(const string &dado) override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
	void listarEmOrdem() override;
	void listaNElementos(unsigned int n);
	void adicionaViaTeclado(ListaDatas& value);
};

class ListaSalarios : public Lista
{
	vector<float> salario;

public:
	/*
	O m�todo abaixo pergunta ao usu�rios quantos
	elementos v�o existir na lista e depois
	solicita a digita��o de cada um deles
	*/
	void entradaDeDados(const string &dado) override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
	void listarEmOrdem() override;
	void listaNElementos(unsigned int n)override;
	void adicionaViaTeclado(ListaSalarios& value);
};

class ListaIdades : public Lista
{
	vector<int> lista;

public:
	/*
O m�todo abaixo pergunta ao usu�rios quantos
elementos v�o existir na lista e depois
solicita a digita��o de cada um deles
*/
	void entradaDeDados(const string &dado) override;
	void mostraMediana() override;
	void mostraMenor() override;
	void mostraMaior() override;
	void listarEmOrdem() override;
	void listaNElementos(unsigned int n) override;
	void adicionaViaTeclado(ListaIdades& value);
};

void menu();

#endif
