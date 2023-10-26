#include "classes.hpp"

int main()
{
	vector<Lista *> listaDeListas;

	// Testando Classe ListaNomes
	ListaNomes listaDeNomes;

	// Entrada de dados
	listaDeNomes.entradaDeDados("João");
	listaDeNomes.entradaDeDados("Matheus");
	listaDeNomes.entradaDeDados("Eduardo");
	listaDeNomes.entradaDeDados("Welvis");
	listaDeNomes.entradaDeDados("Breno");

	// Lista todos os nomes me ordem alfabetica
	listaDeNomes.listarEmOrdem();

	// Testando Metodo listaNElementos
	listaDeNomes.listaNElementos(2);

	// Adicionando a listaDeNomes a listaDeListas
	listaDeListas.push_back(&listaDeNomes);

	ListaSalarios listaDeSalarios;

	listaDeSalarios.entradaDeDados("1200.00");
	listaDeSalarios.entradaDeDados("3200.00");
	listaDeSalarios.entradaDeDados("850.00");
	listaDeSalarios.entradaDeDados("8800.00");

	listaDeSalarios.listaNElementos(3);

	listaDeListas.push_back(&listaDeSalarios);

	ListaIdades listaDeIdades;

	listaDeIdades.entradaDeDados("19");
	listaDeIdades.entradaDeDados("43");
	listaDeIdades.entradaDeDados("22");
	listaDeIdades.entradaDeDados("57");

	listaDeIdades.listaNElementos(4);

	listaDeListas.push_back(&listaDeIdades);

	Data data1(12, 03, 2023);
	Data data2(13, 03, 2023);
	Data data3(14, 03, 2023);
	Data data4(15, 03, 2023);
	ListaDatas listaDeDatas;

	listaDeDatas.entradaDeDados(data1.toString());
	listaDeDatas.entradaDeDados(data2.toString());
	listaDeDatas.entradaDeDados(data3.toString());
	listaDeDatas.entradaDeDados(data4.toString());
	listaDeDatas.listarEmOrdem();
	listaDeDatas.listaNElementos(3);

	listaDeListas.push_back(&listaDeDatas);

	for (Lista *l : listaDeListas)
	{
		l->mostraMediana();
		l->mostraMenor();
		l->mostraMaior();
	}

	return 0;
}

// int main () {
// 	vector<Lista*> listaDeListas;

// 	ListaNomes listaNomes;
// 	listaNomes.entradaDeDados();
// 	listaDeListas.push_back(&listaNomes);

// 	ListaDatas listaDatas;
// 	listaDatas.entradaDeDados();
// 	listaDeListas.push_back(&listaDatas);

// 	ListaSalarios listaSalarios;
// 	listaSalarios.entradaDeDados();
// 	listaDeListas.push_back(&listaSalarios);

// 	ListaIdades listaIdades;
// 	listaIdades.entradaDeDados();
// 	listaDeListas.push_back(&listaIdades);

// 	for (Lista* l : listaDeListas) {
// 		l->mostraMediana();
// 		l->mostraMenor();
// 		l->mostraMaior();
// 	}

// }
