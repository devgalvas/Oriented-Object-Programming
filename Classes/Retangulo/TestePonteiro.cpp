#include <iostream>
#include "CRectangle.h"

using namespace std;

int main ()
{
    CRectangle R;
    R.personalChoice();
    
    CRectangle *pointer = &R;


    pointer->isSquare();

    cout << pointer->getHeight(); 
}