#include <iostream>
#include "myFunctions.h"

int main()
{
    // Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [1, 1, 0, 0, 1, 0, 1, 1, 0, 0]
    //.Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (**без применения if - else, switch, () ? : );

    const int SZ = 7;
    int arr[SZ]{ 1, 0, 0, 1, 1, 0, 1 };
    ReverseMassiveElement(arr, SZ);
    
    // Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22
    const int SZ2 = 8;
    int arr2[SZ2]{};
    InitMassiveElements(arr2, SZ2);
    for (int i = 0; i < SZ2; i++)
    {
        std::cout << arr2[i] << " ";
    }
    
}

