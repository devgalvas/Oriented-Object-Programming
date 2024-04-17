#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <iostream>

class Triangulo
{
private:

    int a, b, c;

public:

    Triangulo();
    Triangulo(int, int, int);
    ~Triangulo();

    bool ver(int, int, int);
    void SumT();

};

#endif