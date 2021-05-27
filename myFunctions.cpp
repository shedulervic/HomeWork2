#include "myFunctions.h"
#include <iostream>

void myFunc::ReverseMassiveElement(int a[], int num)
{
    for (int i = 0; i < num; i++)
    {
        std::cout << "old: " << a[i] << " ";
        a[i] = 1 - a[i];
        std::cout << "new: " << a[i] << std::endl;
    }
}



void myFunc::InitMassiveElements(int* a, int SZ)
{
    int n = 0;
    for (int i = 0; i <= (SZ - 1); i++)
    {
        n += 3;
        a[i] = n - 2;
    }
}
