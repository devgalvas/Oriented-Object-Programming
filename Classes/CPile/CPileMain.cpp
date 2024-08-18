#include "CPile.h"
#include "CPile.cpp"
#include <iostream>
#include <cstdlib>

using namespace std;

int main()
{   

    //CPile<char> p{50};
    //CPile<float> p{50};
    
    CPile<int> p{50};
    
    // char v = '0';
    // OBS: Alterar o while para o char também
    // float v = 0;
    int v = 0;

    cout << "Inserindo itens na pilha: \n";

    while (v != -1)
    {
        cin >> v;
        p.push(v);

        if (v == -1)
            p.pop(v);
    }

    cout << "Removendo itens ... \n";
    while (!(p.isEmpty()))
    {
        p.pop(v);
        cout << v << " ";
    }

    return 0;
}