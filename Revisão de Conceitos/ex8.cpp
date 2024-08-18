#include <bits/stdc++.h>

using namespace std;

int binToDec(string bin);

int main()
{
    string bin;

    cout << "Insira um numero binario: ";
    cin >> bin;

    // validação
    for (char digit : bin)
    {
        if (digit != '0' && digit != '1')
        {
            cerr << "Isso nao e binario!" << endl;
            break;
        }
    }

    int dec = binToDec(bin);
    cout << "Equivalente decimal: " << dec << endl;

    return 0;
}

int binToDec(string bin)
{
    int dec = 0, pwr = 1;

    /* Comecando pelo digito mais a direita*/
    for (int i = bin.length() - 1; i >= 0; --i)
    {
        if (bin[i] == '1')
        {
            dec += pwr;
        }
        pwr *= 2;
    }

    return dec;
}
