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
	std::string line;
	std::ifstream in("news.txt");
	std::ofstream out(FileName, std::ios::app);
	if (in.is_open())
	{
		out << in.rdbuf();
	}
	
	
}
