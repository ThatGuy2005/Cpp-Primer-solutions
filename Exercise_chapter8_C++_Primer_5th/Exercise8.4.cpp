
#include <iostream>
#include <fstream>
#include <vector>
#include <string>

std::fstream& Read(std::fstream& Myfile, std::vector<std::string>& vec)
{
	std::string line;
	Myfile.open("code.txt", std::ios::in);
	if (Myfile.is_open())
	{
		while (Myfile >> line)
		{
			vec.push_back(line);
		}
		Myfile.close();
	}
	return Myfile;
}

int main()
{
	std::fstream Myfile;
	std::vector<std::string> vec;
	Myfile.open("code.txt", std::ios::out);
	if (Myfile.is_open())
	{
		Myfile << "Hello I mean " << std::endl;
		Myfile << "Hello," << std::endl;
		Myfile << "World!" << std::endl;
		Myfile.close();
	}
	Read(Myfile, vec);
	std::vector<std::string>::iterator begin = vec.begin();
	std::vector<std::string>::iterator end = vec.end();
	while (begin != end)
	{
		std::cout << *begin << std::endl;
		begin++;
	}
	return 0;
}
