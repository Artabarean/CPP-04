#pragma once

#include <string>
#include <iostream>
#include <algorithm>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		~Brain(void);
        Brain& operator=(const Brain&);

	protected:
		std::string ideas[100];
};