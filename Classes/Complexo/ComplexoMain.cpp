#include "Complexo.cpp"
#include "Complexo.h"
#include <iostream>

using namespace std;

int main ()
{
    Complexo a(4, 6);
    Complexo b(3, 8);
    Complexo aux;
    cout << "Qtd de objetos: " << a.getCount() + b.getCount() << endl;

    int ans;
    cout << "====Numeros Digitados====\nA: ";
    a.PrintComplex();
    cout << "Forma retangular de A: " << a.PolarToRect() << endl;
    cout << "B: ";
    b.PrintComplex();
    cout << "Forma retangular de B: " << b.PolarToRect() << endl;

    cout << "\n===== Operacoes =====\n";
    cout << "A + B: ";
    aux = a + b;
    aux.PrintComplex();

    cout << endl;
    cout << "A - B: ";
    aux = a - b;
    aux.PrintComplex();

    cout << endl;
    cout << "A * B: ";
    aux = a * b;
    aux.PrintComplex();

    cout << endl;
    cout << "A / B: ";
    aux = a / b;
    aux.PrintComplex();

    cout << endl;
    cout << "|A|: " << a.Mod() << endl;
    cout << "|B|: " << b.Mod() << endl;

    return 0;
}