#include <iostream>
#include <cmath>

#ifndef PONTOCART_H
#define PONTOCART_H
#define pi 3.141593

using namespace std;

class PontoCart
{
private:
    double x, y;

public:
    PontoCart
(double xx = 0, double yy=0): x{xx}, y{yy} {}
    ~PontoCart
() {}


    virtual double area(){return 0;}
    virtual double volume(){return 0;}


    virtual void read()
    {
        cout << "Digite os pontos x e y, respectivamente: ";
        cin >> x >> y;
    }

    virtual void print()
    {
        cout << "x = " << x << " ; " << "y = " << y << endl;
    }

    friend ostream& operator << (ostream&, PontoCart
&);
    friend istream& operator >> (istream &, PontoCart
&);

};

class Circle : public PontoCart
{
    protected:
        int radius;

    public:
        Circle(double xx = 0, double yy = 0, int r = 0): PontoCart(xx, yy), radius(r){}
        ~Circle(){}

        double area()
        {   
            double a = pi*pow(radius, 2);
            return a;
        }

        double volume(){return 0;}

        void read()
        {
            PontoCart::read();
            cout << "Digite o valor do raio do círculo: ";
            cin >> radius;
        }

        void print()
        {   
            cout << "== Circulo == " << endl;
            PontoCart::print();
            cout << "Raio: " << radius << endl;
        }
};

class Cylinder: public Circle
{
    protected:
        int height;
    
    public:
        Cylinder (double xx = 0, double yy = 0, int r = 0, int h = 0): Circle(xx, yy, r), height(h){}
        ~Cylinder (){}

        double area()
        {
            double partial = Circle::area();
            double a = 2*partial + (2*pi*radius*height);
            return a;
        }

        double volume()
        {
            double v = pi*pow(radius, 2) * height;
            return v;
        }

        void read()
        {   
            Circle::read();
            cout << "Digite a altura do cilindro: ";
            cin >> height;
        }

        void print()
        {   
            cout << "== Cilindro == " << endl;
            Circle::print();
            cout << "Altura: " << height << endl;
        }
};  





#endif