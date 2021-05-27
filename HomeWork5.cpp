﻿#include <iostream>
#include "myFunctions.h"

int main()
{
    // Задать целочисленный массив, состоящий из элементов 0 и 1. Например: [1, 1, 0, 0, 1, 0, 1, 1, 0, 0]
    //.Написать функцию, заменяющую в принятом массиве 0 на 1, 1 на 0 (**без применения if - else, switch, () ? : );

    const int SZ = 7;
    int arr[SZ]{ 1, 0, 0, 1, 1, 0, 1 };
    myFunc::ReverseMassiveElement(arr, SZ);
    
    // Задать пустой целочисленный массив размером 8. Написать функцию, которая с помощью цикла заполнит его значениями 1 4 7 10 13 16 19 22

    const int SZ2 = 8;
    int arr2[SZ2]{};
    myFunc::InitMassiveElements(arr2, SZ2);
    for (int i = 0; i < SZ2; i++)
    {
        std::cout << arr2[i] << " ";
    }
    std::cout << std::endl;
    // Написать функцию, в которую передается не пустой одномерный целочисленный массив, функция должна вернуть истину если в массиве есть место,
    // в котором сумма левой и правой части массива равны.Примеры: checkBalance([1, 1, 1, || 2, 1]) → true, checkBalance([2, 1, 1, 2, 1]) → false,
    // checkBalance([10, || 1, 2, 3, 4]) → true.Абстрактная граница показана символами || , эти символы в массив не входят.
    const int SZ3 = 5;
    int arrSum[SZ3] = { 1,1,1,2,1 };         //true
    myFunc::CheckMassiveSum(arrSum, SZ3);
    int arrSum2[SZ] = {2,1,1,2,1};           //false
    myFunc::CheckMassiveSum(arrSum2, SZ3);
    int arrSum3[SZ] = { 10,1,2,3,4};          // true
    myFunc::CheckMassiveSum(arrSum3, SZ3);
}

