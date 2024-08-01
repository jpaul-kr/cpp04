/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:57:20 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 16:31:39 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal()
{
	std::cout << "Animal default constructor called" << std::endl;
}


Animal::Animal(const string type) : _type(type)
{
	std::cout << "Animal init constructor called" << std::endl;
}


Animal::Animal(const Animal& cpy)
{
	
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}
Animal::~Animal()
{
	std::cout << "Animal destructor called" << std::endl;
}

Animal&	Animal::operator=(const Animal& cpy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	Animal::setType(const string type)
{
	_type = type;
}

string	Animal::getType() const
{
	return this->_type;
}

void	Animal::makeSound() const {}
