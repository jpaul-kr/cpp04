#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat") 
{
	std::cout << "WrongCat default constructor called" << std::endl;
	_type = "WrongCat";
}

WrongCat::WrongCat(const string type) : WrongAnimal(type) 
{
	std::cout << "WrongCat init constructor called" << std::endl;
	_type = type;
}

WrongCat::WrongCat(const WrongCat& cpy) : WrongAnimal(cpy) 
{
	std::cout << "WrongCat copy constructor called" << std::endl;
	*this = cpy;
}

WrongCat::~WrongCat() 
{
	std::cout << "WrongCat default destructor called" << std::endl;
}

WrongCat&	WrongCat::operator=(const WrongCat& cpy)
{
	std::cout << "WrongCat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	WrongCat::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
