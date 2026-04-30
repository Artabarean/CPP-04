#pragma once

#include <string>
#include <iostream>
#include <algorithm>
#include <sstream>

class Brain
{
	public:
		Brain(void);
		Brain(const Brain&);
		~Brain(void);
		Brain *clone(void) const;
		void change_idea(int num, std::string new_idea);
		void print_ideas(void);
        Brain& operator=(const Brain&);

	protected:
		std::string ideas[100];
};