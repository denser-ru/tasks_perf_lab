//
// Created by denser on 28.01.2022.
//

#ifndef PERFORMANCE_LAB_RU_CONVERTERARRAY_HPP
# define PERFORMANCE_LAB_RU_CONVERTERARRAY_HPP

# include <iostream>
# include <vector>
# include <fstream>
# include <sstream>
# include <algorithm>
# include <cmath>

class ConverterArray
{
	std::vector<int>	arr;

public:
	void	getFromFile( char *file);
	int 				inOne( void );
};


#endif //PERFORMANCE_LAB_RU_CONVERTERARRAY_HPP
