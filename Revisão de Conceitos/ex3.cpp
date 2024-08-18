#include <bits/stdc++.h>

using namespace std;

bool accept();
int fati(int);
bool isPrime(int);   

int main ()
{   
    while (accept())
    {
        cout << "Continuando!" << endl;

        if (!accept())
            cout << "Fim do programa." << endl;
            break;

    }
    
    return 0;
}


bool accept()
{
    int tries = 0;
    vector<int> prime_list;

    while (tries < 4)
    {
        cout << "Bem vindo!\nSelecione a opcao desejada: \n";
        cout << "A) Descobrir fatorial\nB) Descobrir primos\nC) Sair\n\n";

        char resp = ' ';

        cin >> resp;
        int n1 = 0;
        int n = 0;
        int num = 2;

        switch(resp)
        {
        case 'A':
            cout << "Insira um numero para calcular seu fatorial: ";
            cin >> n1;
            cout << "O fatorial de " << n1 << " = " << fati(n1) << "\n";
            
            return true;
        
        case 'B':
            cout << "Insira a quantidade de numeros primos que deseja conhecer: ";
            cin >> n;


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

            return true;
        
        case 'C':
            cout << "Finalizando...";
            return false;

            break;

        default:
            cout << "Opcao invalida, tente novamente. " << endl;
            tries++;
            
        }
    }

    cout << "Numero de erros excedidos, encerraando...\n";
    return false;
}

int fati (int n)
{
    if (n == 0 or n == 1)
        return 1;
    else 
        return n * fati(n-1);
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