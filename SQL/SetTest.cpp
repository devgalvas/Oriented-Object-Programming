#include <iostream>
#include <set>

using namespace std;

int menu();
void print();

multiset<int> conj;

int main ()
{   
    int opt;
    opt = menu();
    
    cout << "======================================\n";
    cout << " Implementação de Árvore (set) no STL \n";
    cout << "======================================\n";
    
    int op = -1, val = -1;
    
    while (op != 7) {
        op = menu();

        switch (op) {
            case 1:
                cout << "Elemento a ser inserido: ";
                cin >> val;
                conj.insert(val);
            break;
            
            case 2:
                cout << "Elemento a ser removido: ";
                cin >> val;
                conj.erase(val);
            break;

            case 3:
                print();
            break;

            case 4:
                cout << "Quantidade de Elementos: " << conj.size() << "\n";
            break;
            case 5:
                cout << "Removendo todos elementos: \n";
                conj.clear();
            break;
            case 6:
                cout << "Elemento a ser consultado: ";
                cin >> val;
                cout << val << " aparece: "<< conj.count(val) << " vezes.\n";
            break;
        }
        cout << "\n";
    }

    cout << "Finalizando...";
    
    return 0;
}

int menu() {
    cout << "1. Inserir elemento \n";
    cout << "2. Remover elementos com determinado valor \n";
    cout << "3. Exibir elementos em ordem\n";
    cout << "4. Exibir quantidade de elementos\n";
    cout << "5. Remover todos os elementos\n";
    cout << "6. Consultar quantidade de elementos com determinado valor\n";
    cout << "7. Sair\n";

    int op = -1;

    while(!(op >= 1 && op <= 7))
    {
        cout << "Insira a opção desejada: ";
        cin >> op;
    }

    return op;

}

void print(){
    for(auto i : conj)
        cout << i << " ";
    cout << "\n";
}