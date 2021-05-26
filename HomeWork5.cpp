#include <iostream>
#include "myFunctions.h"

int main()
{
    // Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [1, 1, 0, 0, 1, 0, 1, 1, 0, 0]
    //.Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (**без применения if - else, switch, () ? : );

    const int SZ = 7;
    int arr[SZ]{ 1, 0, 0, 1, 1, 0, 1 };
    ReverseMassiveElement(arr, SZ);
    
    
}

