#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal()
{
	std::cout << "WrongAnimal default constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const string type) : _type(type)
{
	std::cout << "WrongAnimal init constructor called" << std::endl;
}


WrongAnimal::WrongAnimal(const WrongAnimal& cpy)
{
	
	std::cout << "WrongAnimal copy constructor called" << std::endl;
	*this = cpy;
}
WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal&	WrongAnimal::operator=(const WrongAnimal& cpy)
{
	std::cout << "WrongAnimal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	WrongAnimal::setType(const string type)
{
	_type = type;
}

string	WrongAnimal::getType() const
{
	return this->_type;
}

void	WrongAnimal::makeSound() const {}
