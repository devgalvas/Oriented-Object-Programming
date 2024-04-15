#include <bits/stdc++.h>

using namespace std;

void drawRectangle(int, int, char, char);

int main()
{
    int height = 0, length = 0, choice = 0;

    cout << "Seja bem vindo ao preenchimento retangular! Selecione abaixo as caracteristicas do seu retangulo: "
         << "\n";

    cout << "Insira a altura e o comprimento, respectivamente: ";
    cin >> height >> length;

    char edge = 'x', fill = ' ';
    cout << "Selecione o caractere da borda: ";
    cin >> edge;

    cout << "Deseja adicionar preenchimento? (1 - Sim / 0 - Nao) " << '\n';
    cin >> choice;

    if (choice != 0)
    {
        cout << "Insira o preenchimento: ";
        cin >> fill;
    }

    cout << "\n\n";

    drawRectangle(height, length, edge, fill);

    cout << "\n\n";


    return 0;
}

void drawRectangle(int height, int length, char edge, char fill)
{
    for (auto i = 0; i < length; i++)
    {
        for (auto j = 0; j < height; j++)
        {
            if ((i == 0) || (i == length - 1) || (j == 0) || (j == height - 1))
                cout << edge;
            else
                cout << fill;
        }
        cout << "\n";
    }
}
