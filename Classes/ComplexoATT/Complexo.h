#include <iostream>

#ifndef COMPLEXO_H
#define COMPLEXO_H

using namespace std;

class Complexo
{
private:
    double real, imaginaria;
    static int count;

public:

    // Construtor s/ param inline    
    Complexo()
    {
        real = 1;
        imaginaria = 1;
        count++;
    }
    Complexo(double r, double i) : real{r}, imaginaria{i} {count++;}
    ~Complexo() {count--;}

    // Metodos de acesso
    double getReal(void) {return real;}
    double getImag(void) {return imaginaria;}
    void setReal(double r) {real = r;}
    void setImag(double i) {imaginaria = i;}
    int getCount() {return count;}
    
    // Metodos Aritmeticos
    Complexo Sum(Complexo _C);
    Complexo Sub(Complexo _C);
    Complexo Mult(Complexo _C);
    Complexo Div(Complexo _C);

    // Sobrecarga de operadores para metodos aritmeticos:
    Complexo operator+(Complexo&);
    Complexo operator-(Complexo&);
    Complexo operator*(Complexo&);
    Complexo operator/(Complexo&);

    Complexo& operator++();
    Complexo operator++(int);

    double Mod();
    // Metodos de conversao
    float PolarToRect(void);
    operator int();

    void PrintComplex(void);
};

#endif