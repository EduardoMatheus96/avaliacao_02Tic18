#include "classes.hpp"


map<int, string> menuColors;

void setupMenuColors() {
    menuColors[1] = "\033[1;31m";  // Vermelho
    menuColors[2] = "\033[1;32m";  // Verde
    menuColors[3] = "\033[1;34m";  // Azul
    menuColors[4] = "\033[1;33m";  // Amarelo
    menuColors[5] = "\033[1;35m";  // Magenta
    menuColors[6] = "\033[1;36m";  // Ciano
    menuColors[7] = "\033[1;37m";  // Branco
    menuColors[8] = "\033[1;91m";  // Vermelho claro
    menuColors[9] = "\033[1;92m";  // Verde claro
    menuColors[10] = "\033[1;94m";  // Azul claro
    menuColors[11] = "\033[1;93m";  // Amarelo claro
    menuColors[12] = "\033[1;95m";  // Magenta claro
    menuColors[13] = "\033[1;96m";  // Ciano claro
    menuColors[14] = "\033[1;97m";  // Branco claro
    menuColors[15] = "\033[1;30m";  // Preto
    menuColors[16] = "\033[1;50m";  
    menuColors[17] = "\033[1;55m";  
    menuColors[0] = "\033[0m";      // Restaura a cor padrão
}

void menu()
{
    setupMenuColors();
    vector<Lista *> listaDeListas;
    ListaNomes listaDeNomes;
    ListaSalarios listaDeSalarios;
    ListaIdades listaDeIdades;
    ListaDatas listaDeDatas;
    int escolha;

    do
    {
        cout << "Menu:" << endl;
        cout << menuColors[1] << "1. Adicionar nome" << menuColors[0] << endl;
        cout << menuColors[2] << "2. Adicionar Salario" << menuColors[0] << endl;
        cout << menuColors[3] << "3. Adicionar Data" << menuColors[0] << endl;
        cout << menuColors[4] << "4. Adicionar Idade" << menuColors[0] << endl;
        cout << menuColors[5] << "5. Ordenar nomes" << menuColors[0] << endl;
        cout << menuColors[6] << "6. Ordenar salarios" << menuColors[0] << endl;
        cout << menuColors[7] << "7. Ordenar Datas" << menuColors[0] << endl;
        cout << menuColors[8] << "8. Ordenar idades" << menuColors[0] << endl;
        cout << menuColors[9] << "9. Listar N nomes" << menuColors[0] << endl;
        cout << menuColors[10] << "10. Listar N salarios" << menuColors[0] << endl;
        cout << menuColors[11] << "11. Listar N Datas" << menuColors[0] << endl;
        cout << menuColors[12] << "12. Listar N idades" << menuColors[0] << endl;
        cout << menuColors[13] << "13. Listar Mediana, maior e menor da lista de nomes" << menuColors[0] << endl;
        cout << menuColors[14] << "14. Listar Mediana, maior e menor da lista de  salarios" << menuColors[0] << endl;
        cout << menuColors[15] << "15. Listar Mediana, maior e menor da lista de  Datas" << menuColors[0] << endl;
        cout << menuColors[16] << "16. Listar Mediana, maior e menor da lista de  idades" << menuColors[0] << endl;
        cout << menuColors[17] << "17. Listar todas as Medianas, maior e menor de todas as listas" << menuColors[0] << endl;
        cout << menuColors[0] << "0. Sair" << endl;

        cout << "Escolha uma opção: ";
        cin >> escolha;

        switch (escolha)
        {
        case 1:
            listaDeNomes.adicionaViaTeclado(listaDeNomes);
            break;
        case 2:
            // adicionarSalario();
            listaDeSalarios.adicionaViaTeclado(listaDeSalarios);
            break;
        case 3:
            // Implemente a função para adicionar Data
            listaDeDatas.adicionaViaTeclado(listaDeDatas);
            break;
        case 4:
            // Implemente a função para adicionar Idade
            listaDeIdades.adicionaViaTeclado(listaDeIdades);
            break;
        case 5:
            // ordenarNomes();
            listaDeNomes.listarEmOrdem();
            break;
        case 6:
            // ordenarNomes();
            listaDeSalarios.listarEmOrdem();
            break;
        case 7:
            // ordenarNomes();
            listaDeDatas.listarEmOrdem();
            break;
        case 8:
            // ordenarNomes();
            listaDeIdades.listarEmOrdem();
            break;
        case 9:
            // ordenarNomes();
            unsigned int tm;
            cout << "Informe quantos elementos da lista de nomes deseja ver: ";
            cin >> tm;
            listaDeNomes.listaNElementos(tm);
            cout << endl;
            break;
        case 10:
            // ordenarNomes();
            unsigned int tm02;
            cout << "Informe quantos elementos da lista de salarios deseja ver: ";
            cin >> tm02;
            listaDeSalarios.listaNElementos(tm02);
            cout << endl;
            break;
        case 11:
            // ordenarNomes();
            unsigned int tm03;
            cout << "Informe quantos elementos da lista de Datas deseja ver: ";
            cin >> tm03;
            listaDeDatas.listaNElementos(tm03);
            cout << endl;
            break;
        case 12:
            // ordenarNomes();
            unsigned int tm04;
            cout << "Informe quantos elementos da lista de idades deseja ver: ";
            cin >> tm04;
            listaDeIdades.listaNElementos(tm04);
            cout << endl;
            break;
        case 13:
            listaDeNomes.mostraMediana();
            listaDeNomes.mostraMaior();
            listaDeNomes.mostraMenor();
            break;
        case 14:
            listaDeSalarios.mostraMediana();
            listaDeSalarios.mostraMaior();
            listaDeSalarios.mostraMenor();
            break;
        case 15:
            listaDeDatas.mostraMediana();
            listaDeDatas.mostraMaior();
            listaDeDatas.mostraMenor();
            break;
        case 16:
            listaDeIdades.mostraMediana();
            listaDeIdades.mostraMaior();
            listaDeIdades.mostraMenor();
            break;
        case 17:
            listaDeListas.push_back(&listaDeNomes);
            listaDeListas.push_back(&listaDeSalarios);
            listaDeListas.push_back(&listaDeDatas);
            listaDeListas.push_back(&listaDeIdades);
            for (Lista *l : listaDeListas)
            {
                l->mostraMediana();
                l->mostraMaior();
                l->mostraMenor();
            }
            break;
        // Implemente os casos restantes
        case 0:
            cout << "Saindo do programa." << endl;
            break;
        default:
            cout << "Opção inválida. Tente novamente." << endl;
        }

    } while (escolha != 0);
}