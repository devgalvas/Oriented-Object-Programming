#include <iostream>
#include "CRectangle.h"

using namespace std;

int main ()
{
    CRectangle R[5];

    for (auto i = 0; i < 5; i++)
    {
        cout << "Preencha os dados do retangulo: " << i + 1 << "\n";
        R[i].personalChoice();
    }

    for(auto j = 0; j < 5; j++)
    {
        cout << "Info: Retangulo " << j + 1 << ":\n";
        R[j].isValid();
        cout << "\n";
        R[j].isSquare();
        cout << "\n";

        cout << "Area: " << R[j].area() << "\n";
        cout << "Perimetro: " << R[j].perimeter() << "\n";
        R[j].printRect();

        cout << endl;
    }
}
