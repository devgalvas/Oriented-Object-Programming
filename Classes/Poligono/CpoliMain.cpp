#include "Cpoli.h"
#include <iostream>

using namespace std;

int main ()
{   
    
    Cpoli poligon(10, 3);

    poligon.printNameOfPoli();
    cout << "\nArea:\t" << poligon.area() << endl;
    cout << "\nPerimetro:\t" << poligon.perimeter() << endl;

    return 0;
}
