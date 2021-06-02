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
		out << in.rdbuf(); //про rbuf нарыл в инете но пока не разобрался что он на самом деле такое
	}
}
