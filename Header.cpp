#include "Header.h"
#include <fstream>
#include <filesystem>
#include <iostream>


using namespace std;

void fileFunctions::CreateFile(string FileName)
{
	std::ofstream cof(FileName);
}

void fileFunctions::WriteFile(std::string FileName)
{
	std::ifstream in("news.txt");
	std::ofstream out(FileName, std::ios::app);
	if (in.is_open())
	{
		out << in.rdbuf(); //про rbuf нарыл в инете docs.microsoft.com/ru-ru/previous-versions/k7hz8258(v=vs.140)
	}
	in.close();
}

void fileFunctions::GluingFile(std::string FileName1, std::string FileName2)
{
	namespace fs = std::filesystem;
	 // получим размер файлов
	std::ifstream one(FileName1);
	int sizeone = fs::file_size(fs::current_path() / FileName1);
	std::ifstream two(FileName2);
	int sizetwo = fs::file_size(fs::current_path() / FileName2);
	// выделяем память
	char *textOne = (char*) calloc(sizeone, sizeof(int));
	char* textTwo = (char*)calloc(sizetwo, sizeof(int));
	std::ofstream textGluing;
    // буфферизация
	while (!one.eof())
	{
		one.getline(textOne, sizeone);
	}
	while (!two.eof())
	{
		two.getline(textTwo, sizetwo);
	}
	//не понял почему при использовании eof попадает только первое предложение
	//записываем в файл
	std::ofstream gluingFile("Gluing.txt", std::ios::app);
	gluingFile << textOne << textTwo;
}
