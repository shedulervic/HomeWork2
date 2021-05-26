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
