#include <cstring>
#include <iostream>

int main()
{
    // Создать и инициализировать переменные пройденных типов данных
    char someLetter;
    someLetter = 'b';
    float f;
    f = 3.155;
    bool b = false;
    int someInt = 34;

    // Создать перечисление с возможными вариантами символов для игры в крестики-нолики

    enum ticTacToe {x, o, e};
    using TicTacToe = enum ticTacToe;
    TicTacToe currentCell = o;

    // Создать массив, способный содержать значения такого перечисления и инициализировать его.

    char matrix[3][3] = { 
        {x, o, e},
        {o, o, x},
        {x, x, o}
    };
    TicTacToe matrix[3][3] ={
    {x, o, e},
        {o, o, x},
        {x, x, o}
    };

    // Создать структуру данных «Поле для игры в крестики-нолики» и снабдить его всеми необходимыми свойствами
        
    struct sTicTacToe
    {
        char mTicTacToe[3][3] = {
            {x, o, e},
        {o, o, x},
        {x, x, o}
        };
        int scoreGemerb[2];
        char GamerTTT[2] = {'b', 'g' };
    };

    //Создать объединение и структуру с битовыми флагами указывающими какого типа значение в данный момент содержится в объединении

    union MyUnion
    {
        unsigned int a : 1;
        double fl;
        char b;
    }; 
    union  MyUnion someUnion;
    someUnion.b = 'A';
    someUnion.a = 1;

    struct MyStruct
    {
        char nameApprentice[15];
        unsigned int homeWorkCompleted : 1;
    };
    using Apprentice = MyStruct;
    Apprentice me;
    strcpy_s(me.nameApprentice, "Victor");
    me.homeWorkCompleted = 1;


    std::cout << "Create and initialise variable" << std::endl;
    std::cout << "char" << std::endl;
    std::cout << someLetter << std::endl;
    std::cout << "float" << std::endl;
    std::cout << f << std::endl;
    std::cout << "bool" << std::endl;
    std::cout << b << std::endl;
    std::cout << "int" << std::endl;
    std::cout << someInt << std::endl;
    std::cout << "\n"<< std::endl;
    std::cout << "Create enum TicTacToe" << std::endl;
    std::cout << currentCell << std::endl;
    std::cout << "Create union " << std::endl;
    std::cout << "char is true" << " ";
    std::cout << someUnion.a << std::endl;
    std::cout << "Create struct" << std::endl;
    std::cout << me.nameApprentice << std::endl;
    std::cout << "Home work completed" << " ";
    std::cout << me.homeWorkCompleted << std::endl;




}


