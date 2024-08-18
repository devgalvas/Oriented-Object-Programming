#include <iostream>
#include "CPilha.h"
#include "CPilha.cpp"

using namespace std;

int main ()
{
    CPilha pInt;
    int aux;

    try
    {
        cin >> pInt;
        cout << "Valor no topo da pilha: " << pInt.pop(aux) << endl;
        cout << pInt;
    }
    catch(runtime_error &rt)
    {
        cout << rt.what() << endl;
    }
    return 0;
}