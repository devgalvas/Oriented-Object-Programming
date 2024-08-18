#ifndef CPOLI_H
#define CPOLI_H

class Cpoli
{
private:
    int number_of_sides, length;

public:
    Cpoli();
    Cpoli(int, int);
    ~Cpoli();

    int perimeter();
    float area();
    void printNameOfPoli();
};

#endif