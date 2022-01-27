//
// Created by denser on 27.01.2022.
//

#include "CircleArray.hpp"

CircleArray::CircleArray( float n, float m ) : n( n ), m ( m )
{
	cr = (int *)malloc(sizeof(int) * n);
	if (!cr)
		exit(1);
	for (int i = 0; i < n; ++i)
		cr[i] = i + 1;
}

CircleArray::~CircleArray( void )
{
	free( cr );
}

int CircleArray::get( void )
{
	std::stringstream	ss;
	int					i, res;

	i = 0;
	do
	{
		ss << cr[i];
		i = (i + m - 1) % n;
	} while (cr[i] != cr[0]);

	ss >> res;
	return res;
}