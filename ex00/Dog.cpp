/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:44:18 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 13:14:17 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog") 
{
	std::cout << "Dog default constructor called" << std::endl;
	_type = "Dog";
}

Dog::Dog(const string type) : Animal(type) 
{
	std::cout << "Dog init constructor called" << std::endl;
	_type = type;
}

Dog::Dog(const Dog& cpy) : Animal(cpy) 
{
	std::cout << "Dog copy constructor called" << std::endl;
	*this = cpy;
}

Dog::~Dog() 
{
	std::cout << "Dog default destructor called" << std::endl;
}

Dog&	Dog::operator=(const Dog& cpy)
{
	std::cout << "Dog copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	Dog::makeSound() const
{
	std::cout << "Woof!" << std::endl;
}
