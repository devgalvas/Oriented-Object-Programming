#ifndef LONGINT_H
#define LONGINT_H
#include <string>
#include <iostream>

using namespace std;

class LongInt
{

private:

    int num[31];
    int size;

public:
    
    LongInt();
    LongInt(int);
    ~LongInt();

    void Read(); // leitura
    void Print(); // imprimindo numero
    LongInt Sum(LongInt);
    LongInt Sub(LongInt);

    // Operadores de soma / subtracao
    LongInt operator+(const LongInt&);
    LongInt operator-(const LongInt&);
    
    // Operadores de Comparação
    string operator>(const LongInt&);
    string operator>=(const LongInt&);
    string operator<(const LongInt&);
    string operator<=(const LongInt&);
    string operator==(const LongInt&);
    string operator!=(const LongInt&);
    

    // Funcoes friend para a sobrecarga de operadores de entrada e de saida
    friend ostream& operator<<(ostream& out, LongInt& n)
    {
        for (int i = 0; i < n.size; i++)
        {
            out << n.num[i];
        }
    // Com isso, consigo imprimir o numero em um cout como se ele fosse uma variavel
        return out;
    }

    friend istream& operator>>(istream& in, LongInt& n)
    {
        string p;
        in >> p;

        n.size = p.length();

        for (int i = 0; i < n.size; i++)
        {
            n.num[i] = p[i] - '0'; // conversao ASCII
        }

        return in;
    }
};

#endif