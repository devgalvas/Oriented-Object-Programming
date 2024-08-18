#include <bits/stdc++.h>

using namespace std;

int main()
{
    string num;
    bool palindrome = true;

    cout << "Insira um numero qualquer: ";
    cin >> num;

    int len = num.length();

    for (int i = 0; i < len / 2; i++)
    {
        if (num[i] != num[len - 1 - i]) // havia pensado em usar .begin() e .rbegin() mas teria que jogar em um vector 
        {
            palindrome = false;
            break;
        }
    }

    if (palindrome)
        cout << "O numero " << num << " e um palindromo. " << endl;
    else
        cout << "O numero " << num << " nao e um palindromo. " << endl;

    return 0;
}
