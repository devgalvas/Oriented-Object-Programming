#ifndef CPILE_H
#define CPILE_H

using namespace std;

template <typename T>

class CPile
{
private:
    T *data;
    int length;
    int top;

public:
    CPile(int m = 0);
    ~CPile() { delete[] data; }

    bool push(T &);
    bool pop(T &);

    bool isEmpty()
    {
        if (top == -1)
            return true;
        else
            return false;
    }

    bool isFull()
    {
        if (top == (length - 1))
            return true;
        else
            return false;
    }
};

#endif