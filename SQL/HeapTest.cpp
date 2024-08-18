#include <iostream>
#include <queue>

using namespace std;

int menu();
void print(const priority_queue<int>& q);

int main ()
{
    int op = 0;
    priority_queue<int> fila_prioridade;

    while (op != 5)
    {
        op = menu();
        int elem = 0;

        switch (op)
        {
            
            case 1:
                cout << "Insira o elemento que deseja inserir: ";
                cin >> elem;
                fila_prioridade.push(elem);
                break;

            case 2:
                if(!fila_prioridade.empty())
                    fila_prioridade.pop();
                else
                    cout << "Fila de prioridade vazia." << endl;

                break;
            
            case 3:
                if(!fila_prioridade.empty())
                    cout << "O tamanho atual da fila é de: " << fila_prioridade.size() << endl;
                else
                    cout << "Fila de prioridade vazia." << endl;
                
                break;

            case 4:
                cout << "1º Elemento: " << fila_prioridade.top() << endl;
                break;

            case 5:
                cout << "Finalizando programa.";
                break;

            case 6:
                print(fila_prioridade);
                break;

            default:
                cout << "Opção inválida." << endl;
                break;
        }
    }
    
    return 0;
}

int menu()
{
    int op;

    cout << "1.Insira um elemento na heap" << endl;
    cout << "2.Remova o primeiro elemento da heap" << endl;
    cout << "3.Tamanho da heap" << endl;
    cout << "4.Primeiro elemento da heap" << endl;
    cout << "5.Sair" << endl;
    cout << "6.Print" << endl;
    cin >> op;

    return op;

}

void print(const priority_queue<int>& q)
{   
    priority_queue<int> temp = q;
    while(!temp.empty())
    {
        cout << temp.top() << " ";
        temp.pop();    
    }
    cout << "\n";
}