/* Primeiro código com propósito de teste de Hierarquias. Criaremos uma classe político, com subclasses como:
Presidente, Governador e  Prefeito*/

#include <iostream>
#include <string>

#ifndef POLITICIAN_H
#define POLITICIAN_H

using namespace std;

class Politician
{
protected:
    string nome, numero, partido;

public:
    Politician(string n = "", string nu = "", string p = "") : nome(n), numero(nu), partido(p)
    {
        //cout << "Construindo político... " << endl;
    }
    virtual ~Politician()
    {
        //cout << "\nPolítico Destruído... " << endl;
    }

    virtual void print()
    {
        cout << "\n ==== Dados do Político ====\n";
        cout << "Nome: " << nome << endl;
        cout << "Partido: " << partido << endl;
        cout << "Numero: " << numero << endl;
    }

    virtual void read()
    {
        cout << "Digite o nome do político: ";
        cin >> nome;

        cout << "Digite o partido do político: ";
        cin >> partido;

        cout << "Digite o número do político: ";
        cin >> numero;
    }

    friend ostream& operator <<(ostream& out, Politician& po)
    {
        po.print();
        return out;
    }

    friend istream& operator >>(istream& in, Politician& po)
    {
        po.read();
        return in;
    }
};

class President: public Politician
{
    string country;

    public:
        President(string n = "", string nu = "",
        string p = "", string c = ""): Politician(n, nu, p), country(c)
        {
           // cout << "Presidente construído..." << endl;
        }
        ~President()
        {
            //cout << "\nPresidente destruído...\n";
        }

        void print()
        {
            Politician::print();
            cout << "País: " << country << endl;
        }

        void read()
        {
            Politician::read();
            cout << "Digite o país do político: ";
            cin >> country;
        }
};

class Governor: public President
{
    protected:
        string state;

    public:
        Governor(string n = "", string nu = "", string p = "",
                string c = "", string s = ""): President(n, nu, p, c), state(s)
        {
            //cout << "Governador construído" << endl;
        }

        ~Governor()
        {
            //cout << "Governador destruído" << endl;
        }

        void print()
        {   
            President::print();
            cout << "Estado: " << state << endl;
        }

        void read()
        {
            President::read();
            cout << "Digite o Estado do político: ";
            cin >> state;
        }
};

class Mayor: public Governor
{
    protected:
        string town;

    public:

        Mayor(string n = "", string nu = "", string p = "",
        string c = "", string s = "", string t = ""): Governor(n, nu, p, c, s), town(t)
        {
           // cout << "Prefeito construído" << endl;
        }

        ~Mayor()
        {
            // cout << "\nPrefeito destruído" << endl;
        }

        void print()
        {
            Governor::print();
            cout << "Cidade: " << town << endl;
        }

        void read()
        {
            Governor::read();
            cout << "Digite a cidade do político: ";
            cin >> town;
        }
};

#endif