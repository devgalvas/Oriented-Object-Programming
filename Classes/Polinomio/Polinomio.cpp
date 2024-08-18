#include "Polinomio.h"
#include <iostream>
#include <exception>
#include <stdexcept>
#include "cmath"

using namespace std;

Poli::Poli()
{   
    // criação padrão.
    int num = 2;
    val = new double [num];
    val[0] = 1;
    val[1]= 1;
}

Poli::Poli(int degree)
{
    // criação à desejo do usuário
    num = degree;
    val = new double [num];
    for (int i = 0; i < num; i++)
    {
        val[i] = 1;
    }
}

Poli::Poli(const Poli& p)
{
    num = p.num;
    val = new double [num];
    for (int i = 0; i < p.num; i++)
    {
        val[i] = p.val[i];
    }
}

Poli Poli::operator+(Poli &p)
{
    Poli result(max(num, p.num));
    int minimum = min(num, p.num);

    int a;

    for(int a = 0; a < minimum; ++a)
    {
        result.val[a] = val[a] + p.val[a];
    }

    if(p.num > this->num)
    {
        for (int i = minimum; i < p.num; i++)
        {
            result.val[i] =p.val[i];
        }
    }
    else
    {
        for (int i = minimum; i < this->num; i++)
        {
            result.val[i] = val[i];
        }
    }

    return result;
}

Poli Poli::operator-(Poli& p)
{
    Poli result(max(num, p.num));
    int minimum = min(num, p.num);
    int a;

    for(a = 0; a < minimum; a++)
    {
        result.val[a] = val[a] - p.val[a];
    }

    if (p.num > this->num)
    {
        for (int i = 0; i < p.num; i++)
        {
            result.val[i] = -p.val[i];
        }
    }
    else
    {
        for (int i = minimum; i < num; i++)
        {
            result.val[i] = val[i];
        }
    }
    
    return result;
}

Poli Poli::operator=(const Poli& p)
{
    num = p.num;
    delete [] val;
    val = new double[num];

    for (int i = 0; i < p.num; i++)
    {
        val[i] = p.val[i];
    }

    return *this;
}

double Poli::operator[](int index)
{
    if((index > num) || (index <= 0))
    {
        throw out_of_range("Indice invalido para o polinomio!");
    }
    else
    {
        return val[index];
    }
}

Poli Poli::derivative()
{
    Poli derivative(num - 1);

    for (int i = 1; i < num; i++)
    {
        derivative.val[i-1] = i*val[i];
    }
    
    return derivative;
}


float Poli::calculate(float point)
{
    float result = 0;
    for (int i = 0; i < num; i++)
    {
        result += val[i] * pow(point, i);
    }

    return result;
}

float Poli::NewtonsMethod(float Xo, int m)
{
    Poli copy(*this);
    float result;

    Poli derivada = copy.derivative();

    for (int i = 0; i < m; i++)
    {
        result = Xo - (copy.calculate(Xo) / derivada.calculate(Xo));
        Xo = result;
    }
    
    return result;
}