#include "pontocart.h"
#include <iostream>

using namespace std;

int main ()
{
    PontoCart* p[5];
    int op = 0;

    for (int i = 0; i < 5; i++)
    {
        cout << "Insira a opção de objeto que deseja criar:\n"
             << "1 - Ponto Cartesiano\n2 - Circulo\n3 - Cilindro\n";

        cin >> op;

        switch (op)
        {
        case 1:
            p[i] = new PontoCart();
            p[i]->read();
            break;
        
        case 2:
            p[i] = new Circle();
            p[i]->read();
            break;
        
        case 3:
            p[i] = new Cylinder();
            p[i]->read();
            break; 
        
        default:
            cout << "Opção inválida.\n";
            i--; // retry
            break;
        }
    }

    for (int j = 0; j < 5; j++)
    {
        p[j]->print();
    }
    
    
    for (int j = 0; j < 5; j++)
    {
        delete p[j];
    }

    return 0;
}