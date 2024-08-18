#include <bits/stdc++.h>
#include "rectangle.h"

using namespace std;

Rectangle::Rectangle()
{
    length = height = 10;
    edge = 'x';
    fill = ' ';
    cout << "Gerando objeto" << endl;
}

Rectangle::Rectangle(int a = 10, int b = 10, char e = 'x', char f = ' ')
{
    height = a;
    length = b;
    edge = e;
    fill = f;
}

Rectangle::~Rectangle()
{
    cout << "Destruindo objeto... " << endl;
}

int Rectangle::per()
{
    int per = (2*height) + (2*length);
    return per;    
}

int Rectangle::area()
{
    int area = (height*length);
    return area;
}

void Rectangle::att()
{
    int x, y;
    char a, b;

    cout << "Insira a altura e comprimento do retangulo, respectivamente:\n";
    cin >> x >> y;

    cout << "Insira o contorno e o preenchimento, respectivamente:\n";
    cin >> a >> b;

    height = x;
    length = y;
    edge = a;
    fill = b;
}

void Rectangle::printRect()
{
    cout << "\n";
    for (auto i = 0; i < length; i++)
    {
        for (auto j = 0; j < height; j++)
        {
            if((i == 0) || (i == length - 1) || (j == 0) || (j == height - 1))
                cout << edge;
            else
                cout << fill;
        }
        cout << "\n";
    }
}

void Rectangle::isValid(int a, int b, char e, char f)
{
    if((a < 0) || (b < 0))
        a = b = 10;
    else
    {
        height = a;
        length = b;
    }
    if(edge == fill)
    {
        edge = 'x';
        fill = ' ';
    }
    else
    {
        edge = e;
        fill = f;        
    }

}

bool Rectangle::isSquare()
{
    if(height == length)
        return true;
    else
        return false;
}

