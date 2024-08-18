#ifndef CRECTANGLE_H
#define CRECTANGLE_H

class CRectangle
{
private:
    int length, height;
    char edge, fill;
public:
    CRectangle(); // construtor
    CRectangle(int l, int h); // construtor de parametros
    ~CRectangle(); // destrutor

    int getHeight()
    {
        return height;
    }
    int getLength()
    {
        return length;
    }
    int perimeter();
    int area();
    void personalChoice();
    void printRect();
    void isValid();
    void isSquare();

};

#endif
