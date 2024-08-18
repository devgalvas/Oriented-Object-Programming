#ifndef RECTANGLE_H
#define RECTANGLE_H

class Rectangle
{
    private:
    int height, length;
    char edge, fill;

    public:
    Rectangle();                     // Construtor do objeto
    Rectangle(int, int, char, char); // Construtor de parâmetros
    ~Rectangle();                    // Destrutor

    int per();
    int area();
    void printRect();
    void att();
    void isValid(int, int, char, char);
    bool isSquare();
};

#endif
