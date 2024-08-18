//arquivo pilha.h
//header file para classe pilha
#ifndef PILHA_H
#define PILHA_H

#include <iostream>

using namespace std;

class CPilha
{
    private:
        int *m_dados; // ponteiro para dados da pilha
        int m_ponteirodaPilha; // apontador do topo da pilha
        int m_tamanho; // espaço de memória reservado para o objeto
    
    public:
        CPilha (int m=0); // construtor com parâmetros
        // CPilha ( void ); // construtor sem parâmetros
        ~CPilha ( void ) { delete [] m_dados; } // destrutor

        int pop ( int &pop_to ); // puxar dados da pilha
        int push ( int push_this ); // empurrar dados para a pilha

        CPilha(const CPilha&); //construtor de cópia
        CPilha& operator = (const CPilha&); // operador de atribuição

        friend ostream& operator<<(ostream&, const CPilha&);
        friend istream& operator>>(istream&, CPilha&);
};

#endif