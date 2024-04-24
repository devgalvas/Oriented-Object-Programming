#include <stdio.h>
#include "Cfracao.h"
#include <iostream> 

using namespace std;

int main ()
{
    CFracao f1(9, 4);
    CFracao f2(5,3);
    CFracao f3(7, 8);
    CFracao f4(10, 2);
    CFracao f5 (15, 10);


    // prints
    cout << "\n===== Introducao =====\n";
    cout << "f1: ";
    f1.Print();
    
    cout << "f2: ";
    f2.Print();
    
    cout << "f3: ";
    f3.Print();
    
    cout << "f4: ";
    f4.Print();

    cout << "f5: ";
    f5.Print();

    // Comparações
    cout << "\n===== Comparacoes =====\n";
    cout << "F1 eh maior que F2? " << (f1 > f2) << "\n";
    cout << "F2 eh menor que F3? " << (f2 < f3) << "\n";
    cout << "F4 eh menor ou igual a F2? " << (f4 <= f2) << "\n";
    cout << "F1 eh igual a F5? " << (f1 == f5) << "\n";
    cout << "F3 eh maior ou igual a F5? " << (f3 >= f5) << "\n";
    cout << "F4 eh diferente de F1? " << (f4 != f1) << "\n";
    
    // Operacoes
    cout << "\n===== Operacoes =====\n";
    cout << "F1 = " << f1.ComoFloat() << "\n";
    
    CFracao sum25(f2 + f5);
    cout << "F2 + F5 = " << sum25 << "\n";

    CFracao sub34(f3 - f4);
    cout << "F3 - F4 = " << sub34 << "\n";

    CFracao mult15(f1 * f5);
    cout << "F1 * F5 = " << mult15 << "\n";

    CFracao div32(f3 / f2);
    cout << "F3 / F2 = " << div32 << "\n";

    // Conversoes
    cout << "\n===== Conversoes =====\n";
    cout << "Transformando f1 em float: " << float(f1) << "\n";
    cout << "Transformando f2 em int: " << int(f2) << "\n";
    //cout << "Transformando f5 em complexo: " << f5.Complexo() << "\n";

    return 0;
}