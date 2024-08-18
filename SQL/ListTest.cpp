#include <iostream>
#include <list>

using namespace std;

int menu();
void print(const list<int>&);

int main ()
{
    list<int> lista;
    int op = 0;

    while (op != 13)
    {
        op = menu();
        int v, tam;

        switch (op)
        {
        case 1:
            cout << "Insira o elemento que deseja adicionar na frente: ";
            cin >> v;
            lista.push_front(v);
            cout << endl;
            break;

        case 2:
            cout << "Insira o elemento que deseja adicionar no final: ";
            cin >> v;
            lista.push_back(v);
            cout << endl;
            break;

        case 3:
            cout << "Removendo elemento à frente...";
            lista.pop_front();
            cout << endl;
            break;

        case 4:
            cout << "Removendo ultimo elemento...";
            lista.pop_back();
            cout << endl;
            break;

        case 5:
            cout << "1º Elemento = " << lista.front();
            cout << endl;
            break;

        case 6:
            cout << lista.size() << "º Elemento = " << lista.back();
            cout << endl;
            break;

        case 7:
            cout << "A lista contem " << lista.size() << "elementos. "<< endl;
            break;

        case 8:
            cout << "Insira o novo tamanho da lista: ";
            cin >> tam;
            cout << "Redimensionando a lista ... " << endl;
            lista.resize(tam);
            break;

        case 9:
            int v;
            cout << "Insira o valor específico que deseja remover: ";
            cin >> v;
            lista.remove(v);
            break;

        case 10:
            cout << "Removendo valores duplicados ... " << endl;
            lista.unique();
            break;

        case 11:
            cout << "Revertendo a ordem dos elementos ... " << endl;
            lista.reverse();
            break;

        case 12:
            cout << "Ordenando a lista ... " << endl;
            lista.sort();
            break;

        case 14:
            print(lista);
            break;

        default:
            break;
        }

        v = 0;
        tam = 0;
    }

    return 0;
}

void print(const list<int>& my_list)
{
    for(const int elemento : my_list){
        cout << elemento << " ";
    }
    cout << "\n";
}

int menu() {

    int op = 0;

    cout << "   ===============================" << endl;
    cout << "   Implementação de Lista no STL" << endl;
    cout << "   ===============================" << endl;
    cout << "   1.Inserir elemento na frente" << endl;
    cout << "   2.Inserir elemento no final" << endl;
    cout << "   3.Excluir elemento na frente" << endl;
    cout << "   4.Excluir elemento no final" << endl;
    cout << "   5.Exibir primeiro elemento da lista" << endl;
    cout << "   6.Exibir último elemento da lista" << endl;
    cout << "   7.Tamanho da lista" << endl;
    cout << "   8.Redimensionar lista" << endl;
    cout << "   9.Remover elementos com valores específicos" << endl; 
    cout << "   10.Remover valores duplicados" << endl;
    cout << "   11.Reverter a ordem dos elementos" << endl;
    cout << "   12.Ordenar a lista" << endl;
    cout << "   13.Sair" << endl;
    cout << "   14.Imprimir Lista" << endl;
    
    cout << "   Escolha uma opção: ";
    cin >> op;

    return op;

}