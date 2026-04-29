#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "New Brain has been created" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        this->ideas[i] = "idea:" + std::to_string(i + 1);
        std::cout << this->ideas[i] << std::endl;
    }
}

Brain::Brain(const Brain &other)
{
	*this = other;
	std::cout << "Copy constructor for a Brain called" << std::endl;
}

Brain::~Brain(void)
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
        std::copy_n(other.ideas, 100, ideas);
	return (*this);
}
