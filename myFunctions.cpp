#include "myFunctions.h"
#include <iostream>
#include <cstdarg>

//** Написать все функции в отдельных файлах в одном пространстве имён, вызвать их на исполнение в основном файле программы используя указатели на функции.


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

void myFunc::CicleShift(int* a, int ln)
{
    const int SZ = 5;
    int b[SZ]{};
    if (ln < 0)
    {
        ln = -ln;
        if (ln > SZ)
        {
            ln = ln % SZ;
        }
        for (int i = 0; i < SZ; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < SZ; i++)
        {
            if (i < ln)
            {
                int t = i + ln + 1;
                a[t] = b[i];
            }
            else
            {
                int t = i - ln;
                a[t] = b[i];
            }
        }
        for (int i = 0; i < SZ; i++)
        {
            std::cout << a[i] << " ";
        }

    }
    else
    {
        if (ln > SZ)
        {
            ln = ln % SZ;
        }
        for (int i = 0; i < SZ; i++)
        {
            b[i] = a[i];
        }
        for (int i = 0; i < SZ; i++)
        {
            if (ln < SZ - i)
            {
                int t = i + ln;
                a[t] = b[i];
            }
            else
            {
                int t = (i + ln) % SZ;
                a[t] = b[i];
            }
        }
        for (int i = 0; i < SZ; i++)
        {
            std::cout << a[i] << " ";
        }
    }

    std::cout << std::endl;
}


void myFunc::ReverseMassiveElementVar(int a[], int SZ5, ...)
{
    float result = 0;
    va_list lst;
    va_start(lst, SZ5);
    for (int i = 0; i < SZ5; i++)
    {
        result += va_arg(lst, int);
    }
    for (int i = 0; i < SZ5; i++)
    {
        std::cout << "old: " << a[i] << " ";
        a[i] = 1 - a[i];
        std::cout << "new: " << a[i] << std::endl;
    }
}
