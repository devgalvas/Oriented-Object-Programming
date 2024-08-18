#include <iostream>
#ifndef POLINOMIO_H
#define POLINOMIO_H

using namespace std;

class Poli
{
private:
    int num;

public:
    double *val;
    Poli();
    Poli(int degree);
    Poli(const Poli&);
    ~Poli() { delete [] val;}

    Poli operator+(Poli&);
    Poli operator-(Poli&);
    Poli operator=(const Poli&);
    double operator[](int);

    int getDegree() { return this->num; }
    Poli derivative();

    float calculate(float);
    float NewtonsMethod(float, int);

    friend ostream& operator<<(ostream& out, Poli& p)
    {   
        for (int i = 0; i < p.num; i++)
        {
            if(i != p.num - 1) out << p.val[i] << "a^" << i << " + ";
            else out << p.val[i] << "a^" << i << " = 0";
        }
        
        cout << "\n";

        return out;
    }

    friend istream& operator>>(istream& in, Poli& p)
    {
        cout << "Polinomio: C0 + C1X1 + C2X2 + ... + CnXn = 0 \n";
        cout << "Digite o grau do polinomio que sera apresentado: ";
        in >> p.num;

        p.val = new double[p.num];
        for (int i = 0; i < p.num; i++)
        {
            cout << "Insira o valor do elemento C[" << i << "]" << ": ";
            in >> p.val[i];
        }

        return in;
    }

};

#endif