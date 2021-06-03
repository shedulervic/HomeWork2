#include "Header.h"
#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>


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
	std::ifstream one(FileName1, std::ios::binary);
	int sizeone = fs::file_size(fs::current_path() / FileName1);
	std::ifstream two(FileName2, std::ios::binary);
	int sizetwo = fs::file_size(fs::current_path() / FileName2);
	// выделяем память
	char* textTwo = (char*)calloc(sizetwo + 1, sizeof(char));
	int sizegluing = sizeone + sizetwo;
	char* textOne = (char*)calloc(sizegluing+1, sizeof(char));
	
	
	//текст в память
	
		
		one.seekg(0, one.beg);
		one.read(textOne, sizeone);
		one.close();
	
		
		two.seekg(0, two.beg);
		two.read(textTwo, sizetwo);
		two.close();
	
	strcat(textOne, textTwo);
	//записываем в файл
	std::ofstream gluingFile("Gluing.txt", std::ios::app);
	gluingFile << textOne;
	gluingFile.close();
	free(textOne);
	free(textTwo);
}

void fileFunctions::WordInFile(std::string FileName, std::string Word)
{
	std::ifstream file(FileName, std::ios::app);
	string line;
	while (getline(file, line))
	{
		if (line.find(Word) != string::npos)
		{
			std::cout << "this word is here";
			return;
		}
	}
	std::cout << "this word is missing here";
}
