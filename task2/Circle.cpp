//
// Created by denser on 27.01.2022.
//

#include "Circle.hpp"

Circle::Circle( int xyr[3]) : x( xyr[0] ), y ( xyr[1] ), r( xyr[2] ) {}

void	Circle::getXYR( char *file, int *xyr )
{
	std::ifstream in( file );
	if (in.is_open())
	{
		in >> xyr[0];
		in >> xyr[1];
		in >> xyr[2];
	}

	in.close();
}

void	Circle::getXY( char *file, Circle &c )
{
	std::ifstream in( file );
	if ( in.is_open() )
	{
		std::string line;

		while ( !in.eof() )
		{
			std::getline( in, line );
			if (line.size() < 1)
				break ;
			std::istringstream iss( line );
			int x, y;
			iss >> x;
			iss >> y;
			c.addPoint(x, y);
		}
	}

	in.close();
}

float	Circle::checkPointArea( Circle &c, int x, int y )
{
	float	dis;
	int		dx, dy;

//	std::cout << "Check ( " << x << ":" << y << " )" << std::endl;
	dx = abs(c.x - x);
	dy = abs(c.y - y);
	dis = sqrtf( dx * dx + dy * dy );
//	std::cout << "Distance = " << dis << "; ans => ";
	if ( (float )c.r > dis )
		return 1;
	if ( (float )c.r < dis )
		return 2;
	return 0;
}

void Circle::pointIterator(Circle &c, float (&f)(Circle &, int, int))
{
	for (std::vector<std::pair<int, int>>::iterator it = c.point.begin(); it != c.point.end() ; ++it )
	{
		std::cout << f(c, it->first, it->second) << std::endl;
	}
}

void Circle::addPoint(int x, int y)
{
	point.push_back( std::make_pair(x , y));
}
