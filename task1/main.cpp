//
// Created by denser on 27.01.2022.
//

#include <iostream>
#include "CircleArray.hpp"

int main(int argc, char **argv)
{
	CircleArray	*arr;
	int 		n;
	int 		m;

	if( argc != 3)
		return 1;
	n = atoi(argv[1]);
	m = atoi(argv[2]);
	if (n < 1 || m < 1)
		return 1;
	arr = new CircleArray( n, m );
	std::cout << arr->get() << std::endl;
	delete arr;
	return 0;
}
