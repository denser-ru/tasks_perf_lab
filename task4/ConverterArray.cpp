//
// Created by denser on 27.01.2022.
//

#include "ConverterArray.hpp"

void ConverterArray::getFromFile(char *file)
{
	std::ifstream	in( file );
	std::string 	line;

	if ( in.is_open() )
	{
		while (!in.eof())
		{
			std::getline(in, line);
			if (line.size() < 1)
				break;
			std::istringstream iss(line);
			int n;
			iss >> n;
			arr.push_back(n);
		}
	}
	in.close();

	std::sort( arr.begin(), arr.end() );
}

int ConverterArray::inOne()
{
	int		m, sum;

	m = arr.size() / 2;
	sum = 0;
	for (int i=0; i < (int)arr.size(); i++)
	{
		sum += abs(arr[i] - m);
//		std::cout << "i = " << arr[i] << "; m = " << sum << std::endl;
	}

	return sum;
}
