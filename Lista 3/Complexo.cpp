#include "Complexo.h"
#include <cmath>

using namespace std;

// inicializacao da contagem
int Complexo::count = 0;

// Funcao de soma
Complexo Complexo::Sum(Complexo _Complexo)
{
    Complexo temp(getReal() + _Complexo.getReal(), 
                  getImag() + _Complexo.getImag());

    return temp;
}

Complexo Complexo::Sub(Complexo _Complexo)
{
    Complexo temp(getReal() - _Complexo.getReal(), 
                  getImag() - _Complexo.getImag());

    return temp;
}

Complexo Complexo::Mult(Complexo _Complexo)
{
    Complexo temp(getReal() * _Complexo.getReal() -
                  getImag() * _Complexo.getImag(), 
                  getReal() * _Complexo.getImag());

    return temp;
}

Complexo Complexo::Div(Complexo _Complexo)
{
    double r = (real *_Complexo.real + imaginaria*_Complexo.imaginaria) /
               (pow(_Complexo.real, 2) + pow(_Complexo.imaginaria, 2));
    double i = (_Complexo.real * imaginaria - real * _Complexo.imaginaria) /
               (pow(_Complexo.real, 2) + pow(_Complexo.imaginaria, 2));
    
    Complexo temp(r, i);
    
    return temp;
}

double Complexo::Mod()
{
    return sqrt(pow(getReal(), 2) + pow(getImag(), 2));
}

void Complexo::PrintComplex()
{
    cout << getReal() << " ";
    if(getImag() < 0) cout << getImag() << "i" << endl;
    else cout << " + " << getImag() << "i" << endl;
}

float Complexo::PolarToRect()
{
    double Zt = sqrt(pow(getReal(), 2) + pow(getImag(), 2));
    double alpha = atan2(getImag(), getReal()) * 180 / M_PI;

    cout << "Forma polar: " << Zt << "|_ " << alpha << " ___ " << endl;
}
