#include "CPile.h"

using namespace std;

template <typename T>
CPile<T>::CPile(int m)
{
    length = (m > 0 ? m : 0);
    top = -1;
    data = new T[m];
}

template <typename T>
bool CPile<T>::push(T &value)
{
    if (isFull())
        return false;

    top++;
    data[top] = value;
    return true;
}

template <typename T>

bool CPile<T>::pop(T &value)
{
    if (isEmpty())
        return false;

    value = data[top];
    top--;
    return true;
}
