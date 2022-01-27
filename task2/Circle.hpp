//
// Created by denser on 27.01.2022.
//

#ifndef PERFORMANCE_LAB_RU_CIRCLE_HPP
# define PERFORMANCE_LAB_RU_CIRCLE_HPP

# include <iostream>
# include <string>
# include <fstream>
# include <sstream>
# include <vector>
# include <cmath>

class Circle
{
	std::vector<std::pair<int, int>>	point;

public:
	const int	x;
	const int	y;
	const int	r;

	Circle( int xyr[3] );

	void			addPoint(int x, int y);
	void			pointIterator(Circle &c, float (&f)(Circle&, int, int));

	static float	checkPointArea(Circle &c, int x, int y);
	static void		getXYR( char *file, int xyr[3] );
	static void		getXY( char *file, Circle &c );
};


#endif //PERFORMANCE_LAB_RU_CIRCLE_HPP
