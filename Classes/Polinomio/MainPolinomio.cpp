#include "Polinomio.h"
#include "Polinomio.cpp"
#include <iostream>

using namespace std;

int main ()
{
    Poli p4;
    Poli p6;
    Poli result;

    int index = 0;

    cout << endl;
    cin >> p4 >> p6;
    cout << p4 << p6 << endl;;

        /*
        Teste relacionado ao tratamento de exceção referente ao operador []
        */
       
    cout << "Digite um índice para ver o coeficiente: " << endl;
    cin >> index;

    try
    {
        cout << p4[index] << endl;
        cout << "Clean." << endl;
    }   
    catch(const out_of_range &ex)
    {
        cout << "Valor fora do range. " << endl;
    }
    

    return 0;
}
