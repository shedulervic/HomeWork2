#include "myFunctions.h"
#include <iostream>

void ReverseMassiveElement(int a[], int num)
{
    for (int i = 0; i < num; i++)
    {
        std::cout << "old: " << a[i] << " ";
        a[i] = 1 - a[i];
        std::cout << "new: " << a[i] << std::endl;
    }
}

void InitMassiveElements(int a[], int SZ)
{
    int n = 0;
    for (int i = 0; i <= (SZ - 1); i++)
    {
        n = n + 3;
        a[i] = n - 2;
        std::cout << a[i] << " ";
    }
}



