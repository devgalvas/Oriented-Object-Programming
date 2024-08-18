#include <bits/stdc++.h>

using namespace std;

int mdc(int, int);

int main()
{
    int x, y, z;
    cout << "Insira dois valores para descobrir o mdc entre eles: ";
    cin >> x >> y;

    z = mdc(x, y);

    cout << "O mdc entre " << x << " e " << y << " = " << z;

    return 0;
}

int mdc(int x, int y)
{
    if (y == 0)
        return x;
    else
        return mdc(y, x % y);
}