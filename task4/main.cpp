//
// Created by denser on 28.01.2022.
//

#include <iostream>
#include "ConverterArray.hpp"

int main(int argc, char **argv)
{
	if( argc != 2)
		return 1;

	ConverterArray	arr;
	arr.getFromFile(argv[1]);

	std::cout << arr.inOne() << std::endl;

	return 0;
}
