#include "Triangulo.h"
#include <iostream>
#include "cmath"

using namespace std;

Triangulo::Triangulo()
{
    a = 3;
    b = 4;
    c = 5;
}

Triangulo::Triangulo(int x, int y, int z)
{
    ver(x, y, z);
}

bool Triangulo::ver(int l1, int l2, int l3)
{
    if((l1 + l2 > l3) && (l1 + l3 > l2) && (l2 + l3 > l1))
    {
        if( (pow(l3, 2) == pow(l2, 2) + pow(l1, 2)) || (pow(l1, 2) == pow(l2, 2) + pow(l3, 2)) || (pow(l2, 2) == pow(l1, 2) + pow(l3, 2))) 
        {
            cout << "Habemus triangulo retangulo: ";
            a = l1;
            b = l2;
            c = l3;

            return true;
        }
        else
        {   
            cout << "Esse triangulo nao esta dentro dos parametros definidos. " << endl;
            return false;
        }
    }
}

void Triangulo::SumT()
{   
    cout << "Conjunto de triangulos retangulos por numeros inteiros inferiores a 50: " << endl;
    for (int x = 0; x < 50 ; x++)
    {
        for (int y = 0; y < 50; y++)
        {
            for (int z = 0; z < 50; z++)
            {
                ver(x, y, z);

                if(ver(x, y, z) == 1)
                    cout << x <<" " << y << " " << z << endl;   
            }            
        }
    }
}

Triangulo::~Triangulo() {}

