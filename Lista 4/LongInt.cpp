#include <iostream>
#include "LongInt.h"

using namespace std;

LongInt::LongInt()
{}

LongInt::LongInt(int n)
{
    for (int i = 0; i < 31; i++)
    {
        num[i] = 0; // inicializando todo o vetor com zeros
    }
}

LongInt::~LongInt()
{}

void LongInt::Read()
{
    string n;
    cout << "Insira um longo numero inteiro: ";
    cin >> n;
    cout << endl;

    size = n.length();

    for (int i = 0; i < size; i++)
    {
        num[i] = n[i] - '0'; // transformacao de numero -> string
    }
}

void LongInt::Print()
{
    for (int i = 0; i < size; i++)
    {
        cout << num[i];
    }
    cout << endl;
}

LongInt LongInt::Sum(LongInt x)
{
    LongInt y;
    y.size = max(size, x.size);         // verificando qual o maior numero
    int goOne = 0;                      // variavel de soma

    if(x.size < size) // 
    {
        // calculando a diff para determinar qts digitos precisam ser add no comeco de b
        int offset = size - x.size; 
        
        LongInt nuevo;                  //  novo numero gerado pela adicao dos outros 2
        nuevo.size = size;              // espera-se que esse numero tenha o tamanho igual ao do maior

        // Bits do meu novo ate o offset setado como 0:
        for (int j = 0; j < offset; j++)
        {
            nuevo.num[j] = 0;
        }
        
        for (int j = offset; j < size; j++)
        {
            nuevo.num[j] = x.num[j - offset]; 
        }

        x = nuevo;
    }

    if (size < x.size)
    {
        int offset = x.size - size;
        LongInt nuevo;
        nuevo.size = x.size;

        // Mesma logica
         for (int j = 0; j < offset; j++)
        {
            nuevo.num[j] = 0;
        }

        // Bits do offset ate size do meu novo, com os bits do num construido
        for (int j = offset; j < size; j++)
        {
            nuevo.num[j] = num[j - offset]; 
        }

        for (int k = 0; k < nuevo.size; k++)
        {
            num[k] = nuevo.num[k];
        }
    }
    
    // Soma
    for (int i = y.size - 1; i >= 0; i--)
    {
        int g = goOne;
        if(i < size) g += num[i];
        if(i < x.size) g += x.num[i];
        y.num[i] = g % 10;
        goOne = g / 10;
    }
    
    while (y.size > 1 && y.num[0] == 0)
    {
        y.size--;
    }
    
    return y;
}

LongInt LongInt::Sub(LongInt x)
{
    LongInt y;
    y.size = 0;
    for (int i = 0; i < max(size, y.size); i++)
    {
        int a = 0;
        if (i < size)
        {
            a += num[i];
        }
        if(i < x.size) 
        {
            a -= x.num[i];
        }
        else
        {
            a += 10 - x.num[i];
            num[i+1]--;
        }
        y.num[y.size++] = a;
    }
    return y;
}

LongInt LongInt:: operator+(const LongInt &n) {return this-> Sum(n);}
LongInt LongInt:: operator-(const LongInt &n) {return this->Sub(n);}

bool operator||(string i, string n)
{
        if(i == "Sim" || n == "Sim") return true;
        return false;
}

string operator!(string n)
{
    if (n == "Sim") return "Nao";
    if (n == "Nao") return "Sim";

    return "Não sei";
}   

string LongInt::operator<(const LongInt& n) 
{
        if(size != n.size)
        {
            if(size < n.size) return "Sim";
            else return "Nao";
        }
        else
        {
            for (int i = size - 1; i >= 0; i--)
            {
                if(num[i] < n.num[i]) return "Sim";
                else if (num[i] > n.num[i]) return "Nao";
            }
        }
        return "Nao";
}

string LongInt::operator>(const LongInt& n) 
{
        if(size != n.size)
        {
            if(size > n.size) return "Sim";
            else return "Nao";
        }
        else
        {
            for (int i = size - 1; i >= 0; i--)
            {
                if(num[i] > n.num[i]) return "Sim";
                else if (num[i] < n.num[i]) return "Nao";                
            }
        }
        return "Nao";
}

string LongInt::operator<=(const LongInt& n)
{
    if((*this) < n || (*this) == n) return "Sim";
    else return "Nao";
}

string LongInt::operator>=(const LongInt& n)
{
    if(*this > n || *this == n) return "Sim";
    else return "Nao";
}

string LongInt::operator==(const LongInt& n)
{
    if(size == n.size)
    {
        for(int i = 0; i < size; i++)
        {
            if(num[i] != n.num[i]) return "Nao";
            
        }
        return "Sim";
    }
    return "Nao";
}

string LongInt::operator!=(const LongInt& n)
{
    return !(*this == n);
}

