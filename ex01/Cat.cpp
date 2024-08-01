/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:14:09 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 16:27:05 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
	_brain = new Brain();
}

Cat::Cat(const string type) : Animal(type) 
{
	std::cout << "Cat init constructor called" << std::endl;
	_type = type;
	_brain = new Brain();
}

Cat::Cat(const Cat& cpy) : Animal(cpy) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
}

Cat::~Cat() 
{
	std::cout << "Cat destructor called" << std::endl;
	delete _brain;
}

Cat&	Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	*(this->_brain) = *(cpy._brain);
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}

Brain*	Cat::getBrain() const
{
	return this->_brain;
}
