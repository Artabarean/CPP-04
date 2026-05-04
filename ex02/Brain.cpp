#include "Brain.hpp"

Brain::Brain(void)
{
    std::cout << "New Brain has been created" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        std::stringstream tmpstr;
        tmpstr << "idea:" << i;
        this->ideas[i] = tmpstr.str();
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

Brain *Brain::clone(void) const
{
    Brain *new_brain = new Brain;
    *new_brain = *this;
    return (new_brain);
}

void Brain::change_idea(int num, std::string new_idea)
{
    if (num >= 0 && num <= 99)
        this->ideas[num] = new_idea;
}

void Brain::print_ideas(void)
{
    std::cout << "Printing the ideas of a Brain" << std::endl;
    for(int i = 0; i < 100; i++)
    {
        std::cout << this->ideas[i] << std::endl;
    }
}

Brain& Brain::operator=(const Brain& other)
{
	if (this != &other)
    {
        for(int i = 0; i < 100; i++)
        {
            this->ideas[i] = other.ideas[i];
        }
    }
	return (*this);
}
