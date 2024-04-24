#include "Complexo.cpp"
#include "Complexo.h"
#include <iostream>

using namespace std;

int main ()
{       
    Complexo a, b;
    cout << "Complexo A: ";
    cin >> a;
    cout << "\nComplexo B: ";
    cin >> b;
    // Complexo a(4, 6);
    // Complexo b(3, 8);
    Complexo aux;
    cout << "Qtd de objetos: " << a.getCount() + b.getCount() << endl;

    int ans;
    cout << "====Numeros Digitados====\nA: ";
    cout << a << endl;
    cout << "Forma retangular de A: " << a.PolarToRect() << endl;
    cout << "B: ";
    cout << b << endl;
    cout << "Forma retangular de B: " << b.PolarToRect() << endl;

    cout << "\n===== Operacoes =====\n";
    cout << "A + B: ";
    aux = a + b;
    cout << aux;

    cout << endl;
    cout << "A - B: ";
    aux = a - b;
    cout << aux;

    cout << endl;
    cout << "A * B: ";
    aux = a * b;
    cout << aux;

    cout << endl;
    cout << "A / B: ";
    aux = a / b;
    cout << aux;

    cout << endl;
    cout << "|A|: " << a.Mod() << endl;
    cout << "|B|: " << b.Mod() << endl;

    cout << "\n===== Comparacoes =====\n";
    cout << "A eh maior que B? " << (a > b) << "\n";
    cout << "A eh menor que B? " << (a < b) << "\n";
    cout << "B eh menor ou igual a A? " << (b <= a) << "\n";
    cout << "B eh igual a A? " << (b == a) << "\n";
    cout << "A eh maior ou igual a B? " << (a >= b) << "\n";
    cout << "A eh diferente de B? " << (a != b) << "\n";
    

    return 0;
}