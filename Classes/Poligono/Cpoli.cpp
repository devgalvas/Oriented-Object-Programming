#include "Cpoli.h"
#include <iostream>
#include "cmath"

using namespace std;

Cpoli::Cpoli()
{
    number_of_sides = length = 10;
}

Cpoli::Cpoli(int n, int b)
{   
    cout << "Construindo objeto...\n";
    number_of_sides = n;
    length = b;
}

Cpoli::~Cpoli()
{
    cout << "\nDestruindo objeto..." << endl;
}

float Cpoli::area()
{
    float area = (number_of_sides * pow(length, 2) * cos(M_PI / number_of_sides) / (4 * sin(M_PI / number_of_sides)));
    return area;
}

int Cpoli::perimeter()
{
    int perimeter = number_of_sides * length;
}

void Cpoli::printNameOfPoli()
{   
    Cpoli(number_of_sides, length);
    cout << "O poligono inserido recebe o nome de:\n";

    switch (number_of_sides)
    {
    case 3:
        cout << "Triangulo" << endl;
        break;
    case 4:
        cout << "Paralelepipedo" << endl;
        break;
    case 5:
        cout << "Pentagono" << endl;
        break;
    case 6:
        cout << "Hexagono" << endl;
        break;
    case 7:
        cout << "Heptagono" << endl;
        break;
    case 8:
        cout << "Octagono" << endl;
        break;
    case 9:
        cout << "Eneagono" << endl;
        break;
    case 10:
        cout << "Decagono" << endl;
        break;
    
    default:
        cout << "Poligono fora do limite estipulado." << endl;
        break;
    }
}