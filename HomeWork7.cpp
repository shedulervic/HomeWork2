#include <iostream>
using namespace std;

#define DIAPAZON(x,y)  (((x) < (y)) && ((x) > (0))? true : false)
#define POINTER(x) (std::cout << (*x) << std::endl)
#define AMOUNT(a) (std::cout << (sizeof(a)/ sizeof(*a)) << std::endl)
int main()
{
    //Описать макрокоманду, проверяющую, входит ли переданное ей число в диапазон от нуля (включительно) до переданного ей второго аргумента (исключительно)
    int x = 5;
    int y = 6;
    std::cout << DIAPAZON(x, y) << std::endl;
    x = 6;
    y = 5;
    std::cout << DIAPAZON(x, y) << std::endl;

    //Описать макрокоманду, получающую доступ к элементу двумерного массива (организованного динамически) посредством разыменования указателей
    int num = 9;
    int* arr = new int[num];
    for (int i = 0; i < num; i++)
    {
        arr[i] = i;
    }
    int* ptr = &arr[4];
    POINTER(ptr);

    //Описать макрокоманду, возвращающую количество элементов локального массива, принимающую на вход ссылку на массив и его тип
    int arr2[7]{ 1,2,3,4,5,6,7 };
    int(&a)[7] = arr2;
    AMOUNT(a);

}

