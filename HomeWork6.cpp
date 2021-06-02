#include <iostream>
#include "Header.h"

int main()
{
   // Написать программу, которая создаст два текстовых файла, примерно по 50 - 100 символов в каждом(особого значения не имеет);
	fileFunctions::CreateFile("First.txt");       // Создаем файлы
	fileFunctions::CreateFile("Second.txt");

	fileFunctions::WriteFile("First.txt"); // Забиваем текстом
	fileFunctions::WriteFile("Ыусщтв.txt");
}

