#include "Complexo.h"
#include "Complexo.cpp"
#include <iostream>

using namespace std;

int main ()
{
    Complexo a(4, 6);
    Complexo b(3, 8);
    Complexo aux;

    int ans;
    cout << "====Numeros Digitados====\nA: ";
    a.PrintComplex();
    cout << "Forma retangular de A: " << a.PolarToRect() << endl;
    cout << "B: ";
    b.PrintComplex();
    cout << "Forma retangular de B: " << b.PolarToRect() << endl;

    cout << "\n===== Operacoes =====\n";
    cout << "A + B: ";
    aux = a.Sum(b);
    aux.PrintComplex();

    cout << endl;
    cout << "A - B: ";
    aux = a.Sub(b);
    aux.PrintComplex();

    cout << endl;
    cout << "A * B: ";
    aux = a.Mult(b);
    aux.PrintComplex();

    cout << endl;
    cout << "A / B: ";
    aux = a.Div(b);
    aux.PrintComplex();

    cout << endl;
    cout << "|A|: " << a.Mod() << endl;
    cout << "|B|: " << b.Mod() << endl;

    cout << "Qtd de objetos: " << a.getCount() << endl;

    return 0;
}