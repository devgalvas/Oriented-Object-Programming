#include "rectangle.h"
#include <iostream>

using namespace std;

int main ()
{
    int op;
    Rectangle r1;
    r1.att();
    //r1.isValid();
    
    cout << "Insira a opcao desejada:\n1) Perimetro\n2) Area\n3) Impressao\n4) Quadrado?\n";
    cin >> op;

    switch (op)
    {
    case 1:
        cout << "O perimetro do retangulo eh: " << r1.per() << endl;
        break;
    case 2:
        cout << "A area do retangulo eh: " << r1.area() << endl;
        break;
    case 3:
        r1.printRect();
        break;
    case 4:
        cout << "Eh um quadrado?\n " << r1.isSquare() << endl;
    default:
        cout << "Opcao invalida. ";
        break;
    }
    

}