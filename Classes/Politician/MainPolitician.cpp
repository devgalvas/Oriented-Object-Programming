#include "Politician.h"

using namespace std;

int main ()
{
    int op;
    Politician* p[5]; // ponteiro para o array de politicos

    for(auto i = 0; i < 5; i++)
    {
        cout << "Insira o tipo de politico que deseja criar:\n" 
             << "1 - Presidente\n2 - Governador\n3 - Prefeito\n";
        
        cin >> op;

        switch (op)
        {
        case 1:
            p[i] = new President();
            p[i]->read();
            break;

        case 2:
            p[i] = new Governor();
            p[i]->read();
            break;

        case 3:
            p[i] = new Mayor();
            p[i]->read();
            break;

        default:
            cout << "Opcao invalida." << endl;
            i--; // retry
            break;
        } 
    }
    

    for(auto j = 0; j < 5; j++)
    {
        p[j]->print();
    }

    for (auto i = 0; i < 5; i++)
    {
        delete p[i];
    }

    return 0;
}