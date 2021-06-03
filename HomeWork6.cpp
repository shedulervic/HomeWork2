#include <iostream>
#include "Header.h"

int main(int argc, char *argv[])
{
	std::string fileOne = "First.txt";
	std::string fileTwo = "Second.txt";
   // Написать программу, которая создаст два текстовых файла, примерно по 50 - 100 символов в каждом(особого значения не имеет);
	fileFunctions::CreateFile(fileOne);       // Создаем файлы
	fileFunctions::CreateFile(fileTwo);

	fileFunctions::WriteFile(fileOne); // Забиваем текстом
	fileFunctions::WriteFile(fileTwo);

	// Написать функцию, «склеивающую» эти файлы, предварительно буферизуя их содержимое в динамически выделенный сегмент памяти нужного размера.
	fileFunctions::GluingFile(fileOne, fileTwo);

	//Написать программу, которая проверяет присутствует ли указанное пользователем при запуске программы слово в указанном пользователем файле
	//(для простоты работаем только с латиницей).
	std::string filename;
	std::string word;
	if (argc > 2)
	{
		filename = argv[1];
		word = argv[2];
		fileFunctions::WordInFile(filename, word);
	}
}

