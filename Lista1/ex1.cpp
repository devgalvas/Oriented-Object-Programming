#include <bits/stdc++.h>

using namespace std;

int fati(int);

int main ()
{
    int n;

    cout << "Insira um numero que deseja conhecer o fatorial: ";
    cin >> n;

    cout << "O fatorial de " << n << " = " << fati(n) << "\n";
}

int fati (int n)
{
    if (n == 0 or n == 1)
        return 1;
    else 
        return n * fati(n-1);
}