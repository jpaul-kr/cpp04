#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain default constructor called" << std::endl;
}

Brain::Brain(const Brain& cpy)
{
	std::cout << "Copy constructor called" << std::endl;
	this->ideas = cpy.ideas;
}

Brain::~Brain()
{
	std::cout << "Brain destructor called" << std::endl;
}

Brain&	Brain::operator=(const Brain& cpy)
{
	std::cout << "Brain copy assignment operator called" << std::endl;
	this->ideas = cpy.ideas;
	return *this;
}
