#include "CRectangle.h"
#include <iostream>

using namespace std;

CRectangle::CRectangle()
{
    length = height = 1;
    edge = 'x';
    fill = ' ';
    cout << "Gerando objeto..." << endl;
}

CRectangle::CRectangle(int l, int h)
{
    height = h;
    length = l;
}

CRectangle::~CRectangle()
{  
    cout << "Destruindo objeto..." << endl;
}

int CRectangle::perimeter()
{
    int perimeter = (2 * height) + (2 * length);
    return perimeter;
}

int CRectangle::area()
{
    int area = length * height;
    return area;
}

void CRectangle::personalChoice()
{
    int a, c; // altura e comprimento
    char b, p; // borda e preenchimento

    cout << " ==== Seja bem-vindo ao personalizador! ==== \n\n";
 
    cout << "Insira a altura e o comprimento do retangulo, respectivamente (de 1 a 20):\n";
    cin >> a >> c;
    
    cout << "Insira o a borda e o preenchimento:\n";
    cin >> b >> p;

    height = a;
    length = c;

    edge = b;
    fill = p;   
}

void CRectangle::printRect()
{
    cout << "Desenhando Objeto:\n";
    for (auto i = 0; i < length; i++)
    {
        for (auto j = 0; j < height; j++)
        {
            if((i == 0) || (i == length - 1) || (j == 0) || (j == height - 1))
            {
                cout << edge;
            }
            else
            {
                cout << fill;
            }
        }
        cout << "\n";
    }
}

void CRectangle::isValid()
{
    if(area() < 400)
        cout << "Retangulo aprovado!" << endl;
    else
    {
        cerr << "Esse retangulo esta fora dos parametros definidos." << endl;
    }
}

void CRectangle::isSquare()
{
    if(height == length)
        cout << "Esse eh um quadrado." << endl;
    else
        cout << "Esse eh um retangulo mesmo." << endl;
}