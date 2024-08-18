#include <bits/stdc++.h>

using namespace std;

bool isPrime(int);   

int main ()
{
    int n;
    cout << "Insira a quantidade de numeros primos que deseja conhecer: ";
    cin >> n;

    vector<int> prime_list;
    int num = 2;

    while (prime_list.size() < n)
    {
        if(isPrime(num))
        {
            prime_list.push_back(num);
        }
        num++;
    }
    
    cout << "Primeiros " << n << " numeros primos: " << endl;

    for(int prime : prime_list)
    {
        cout << prime << " ";
    }
    cout << endl;

    return 0;
}

bool isPrime(int n)
{
    if(n <= 1) 
        return false;
    
    for(auto i = 2; i * i <= n; i++)
    {
        if(n % i == 0) 
            return false;
    }

    return true;
}

