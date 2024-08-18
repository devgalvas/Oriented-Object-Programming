#include <bits/stdc++.h>

using namespace std;

int nSum(int);

int main ()
{   
    int qtd = 1, sum = 0;

    cout << "Insira a quantidade de numeros inteiros que deseja somar: " << "\n";
    cin >> qtd;

    sum = nSum(qtd);

    cout << "A soma dos " << qtd << " inteiros = " << sum << endl;

    return 0;
}

int nSum(int n)
{
    if (n == 1)
        return 1;
    else
        return nSum(n-1) + n;
    
}