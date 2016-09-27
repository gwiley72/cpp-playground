#include "stdafx.h"

namespace life
{
	auto meaning = 42;
	auto* pm = &meaning;
	auto& rm = meaning;
}

int main()
{
	std::cout << "We like fuzzy pickles." << std::endl;

	std::cout << life::meaning << " takes up " << 
		sizeof(life::meaning) << " bytes" << std::endl;

	*life::pm = 43;

	std::cout << life::meaning << std::endl;

	life::rm = 42;

	std::cout << life::meaning << std::endl;

	getchar();
	return 0;
}

