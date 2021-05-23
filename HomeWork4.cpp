

#include <iostream>

int main()
{
    // Написать программу, проверяющую что сумма двух чисел лежит в пределах от 10 до 20 (включительно), если да – вывести true, в противном случае – false;

    // true
    int a = 9;
    int b = 8;
    int c = a + b;
    if (c <= 20 && c >= 10)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    //false
    int a1 = 11;
    int b1 = 12;
    int c1 = a1 + b1;
    if (c1 <= 20 && c1 >= 10)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    // Написать программу, проверяющую, является ли некоторое число - натуральным простым.Простое число - это число, 
    // которое делится без остатка только на единицу и себя само.

    int n;
    n = 6;
    bool prime = true;
    for (int i = 2; i <= n; i++)
    {
        if (n % i == 0)
        {
            prime = false;
        }
    }
    if (prime)
    {
        std::cout << "a prime number" << std::endl;
    }
    else
    {
        std::cout << "not a prime number" << std::endl;
    }

    // Написать программу, выводящую на экран “истину”, если две целочисленные константы, объявленные в её начале либо равны десяти сами по себе,
    // либо их сумма равна десяти.
    const int a2 = 10;
    const int b2 = 10;
    int c2 = a2 + b2;
    if (c2 == 10)
    {
        std::cout << "true" << std::endl;
    }
    else if (a2 == 10 && b2 == 10)
    {
        std::cout << "true" << std::endl;
    }
    else
    {
        std::cout << "false" << std::endl;
    }
    // Написать программу, которая заполняет диагональные элементы квадратной матрицы единицами. Размеры матрицы нужно задать константными числами, 
    // матрицу нужно инициализировать нулями.
    const int X = 6;
    const int Y = 6;
    int matrix[Y][X] =
    {
        {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0},
        {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}, {0, 0, 0, 0, 0, 0}
    };
    

    int x = X;
    int y = Y;

    // выводим и добавляем единички
    for (int j = 0; j < y; j++)
    {
        std::cout << " " << std::endl;
        for (int i = 0; i < x; i++)
        {
            int sum = j + i;
            if (j == i || sum == Y - 1)
            {
                matrix[j][i] = 1;
            }
            std::cout << matrix[j][i] << " ";
        }

    }
    std::cout << "" << std::endl;
    std::cout << "" << std::endl;
    // Написать программу, которая определяет является ли год високосным.
    // Каждый 4-й год является високосным, кроме каждого 100-го, при этом каждый 400-й – високосный.
    //Для проверки работы вывести результаты работы программы в консоль
    // гугл переводчик говорит что високкосный год это - leap year
        
    int year = 1; 
        while (year !=0)
        {
            std::cout << "enter year number, or enter 0 for exit" << std::endl;
            std::cin >> year;
            if (year % 100 == 0 && year % 400 != 0)
            {
                std::cout << "not leap year:" << std::endl;
            }
            else if (year % 4 == 0)
            {
                std::cout << "leap year" << std::endl;
            }
            else
            {
                std::cout << "not leap year" << std::endl;
            }
        }
    }
    
   


