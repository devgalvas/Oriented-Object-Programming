#include <iostream>
#include <stack>

using namespace std;

int menu();

int main()
{
    stack<int> pilha;

    int op = 0;

    while (op != 6)
    {
        op = menu();

        switch (op)
        {
        case 1:
            int value;

            cout << "Insira o valor que deseja acrescentar: ";
            cin >> value;

            pilha.push(value);
            break;

        case 2:
            if (!pilha.empty())
            {
                cout << "Removendo ... " << endl;
                pilha.pop();
                break;
            }
            else
            {
                cout << "Pilha vazia, não há o que remover. " << endl;
            }

        case 3:
            if (!pilha.empty())
            {
                cout << "Sua pilha atual contem: " << pilha.size() << " elementos." << endl;
                break;
            }
            else
            {
                cout << "Pilha vazia." << endl;
                break;
            }

        case 4:
            if (!pilha.empty())
            {
                cout << "Primeiro elemento da pilha: " << pilha.top() << " " << endl;
            }
            else
            {
                cout << "Não há nenhum elemento na pilha. " << endl;
            }
            break;

        case 5:
            if (pilha.empty())
            {
                cout << "Sim, a sua pilha esta vazia." << endl;
            }
            else
            {
                cout << "Não, sua pilha não está vazia" << endl;
            }

            break;

        default:
            break;
        }
    }

    return 0;
}

int menu()
{

    int op_menu = 0;

    cout << "Bem - Vindo! O que você gostaria de fazer? " << endl;
    cout << " ----------------------------------------- " << endl;

    cout << "[1] Inserir um elemento na pilha; " << endl;
    cout << "[2] Remover um elemento da pilha; " << endl;
    cout << "[3] Consulta sobre o tamanho da pilha; " << endl;
    cout << "[4] Primeiro elemento da pilha; " << endl;
    cout << "[5] Verificar se a pilha esta vazia; " << endl;
    cout << "[6] Sair; " << endl;
    cout << " ----------------------------------------\n";
    cout << "Escolha = " << endl;
    cin >> op_menu;

    return op_menu;
}