#include "Triangulo.h"
#include "Triangulo.cpp"
#include <iostream>


int main ()
{   
    Triangulo z1 (10, 3, 4);
    Triangulo z2 (20, 30, 50);
    Triangulo z3 (22, 31, 21);

    // Professor, cuidado que eu pedi pra imprimir todos mesmo, entao o loop aparenta ser infinito
    z1.SumT();

    return 0;
}