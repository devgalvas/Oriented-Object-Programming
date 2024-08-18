#include "LongInt.h"
#include "LongInt.cpp"

using namespace std;

int main ()
{
    LongInt a, b;

    LongInt sum, sub;

    cout << "Digite o valor do longo inteiro A: ";
    cin >> a;

    cout << "Digite o valor do longo inteiro B: ";
    cin >> b;

    sum = a + b;
    sub = a.Sub(b);

    cout << "Soma: " << sum << endl;
    cout << "Subtracao: " << sub << endl;
    a.Sub(b);

    cout << "===== Comparacoes =====\n";
    cout << " A > B? " << (a > b) << endl;
    cout << " A >= B? " << (a >= b) << endl;
    cout << " A < B? " << (a < b) << endl;
    cout << " A <= B? " << (a <= b) << endl;
    cout << " A == B? " << (a == b) << endl;
    cout << " A != B? " << (a != b) << endl;

    return 0;
}