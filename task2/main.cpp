//
// Created by denser on 27.01.2022.
//

#include <iostream>
#include "Circle.hpp"

int main(int argc, char **argv)
{
	int		xyr[3];

	if( argc != 3)
		return 1;
	Circle::getXYR(argv[1], xyr);
	Circle	c(xyr);
	Circle::getXY(argv[2], c);

//	std::cout << "For circle: x = " << c.x << ", y = " << c.y
//			  << ", r = " << c.r << std::endl;

	c.pointIterator(c, c.checkPointArea);

	return 0;
}
