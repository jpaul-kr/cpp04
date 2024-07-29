/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:44:18 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/29 11:56:59 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : AAnimal("Dog") 
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
	_brain = new Brain();
}

Dog::Dog(const string type) : AAnimal(type) 
{
	std::cout << "Dog init constructor called" << std::endl;
	_type = type;
	_brain = new Brain();
}

Dog::Dog(const Dog& cpy) : AAnimal(cpy) 
{
	std::cout << "Dog copy constructor called" << std::endl;
	this->_type = cpy._type;
	this->_brain = new Brain(*cpy._brain);
}

Dog::~Dog() 
{
	std::cout << "Dog destructor called" << std::endl;
	delete _brain;
}

Dog&	Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	*(this->_brain) = *(cpy._brain);
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}

Brain*	Dog::getBrain() const
{
	return this->_brain;
}
