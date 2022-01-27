//
// Created by denser on 27.01.2022.
//

#ifndef PERFORMANCE_LAB_RU_CIRCLEARRAY_HPP
# define PERFORMANCE_LAB_RU_CIRCLEARRAY_HPP

# include <iostream>
# include <sstream>
# include <cstdlib>

class CircleArray
{
	int			*cr;

public:
	const int	n;
	const int	m;

	CircleArray( float n, float m );
	~CircleArray( void );
	int 	get( void );
};


#endif //PERFORMANCE_LAB_RU_CIRCLEARRAY_HPP
