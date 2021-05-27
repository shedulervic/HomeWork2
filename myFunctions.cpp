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

void myFunc::CheckMassiveSum(int* a, int SZ3)
{
    bool answ = false;
    for (int i = 0; i < SZ3; i++)
    {
        int sumRight = 0;
        int sumLeft = 0;
        for (int j = i+1; j < SZ3; j++)
        {
            sumRight += a[j];
        }
        for (int j = 0; j <= i; j++)
        {
            sumLeft += a[j];
        }
        if (sumLeft == sumRight)
        {
            answ = true;
            break;
        }
    }
    std::cout << (answ ? "true" : "false") << std::endl;
   
    
}
