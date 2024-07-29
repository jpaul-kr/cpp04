/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AAnimal.cpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:57:20 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/29 11:30:22 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AAnimal.hpp"

AAnimal::AAnimal()
{
	std::cout << "Animal default constructor called" << std::endl;
}


AAnimal::AAnimal(const string type) : _type(type)
{
	std::cout << "Animal init constructor called" << std::endl;
}


AAnimal::AAnimal(const AAnimal& cpy)
{
	
	std::cout << "Animal copy constructor called" << std::endl;
	*this = cpy;
}
AAnimal::~AAnimal()
{
	std::cout << "Animal destructor called" << std::endl;
}

AAnimal&	AAnimal::operator=(const AAnimal& cpy)
{
	std::cout << "Animal copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	AAnimal::setType(const string type)
{
	_type = type;
}

string	AAnimal::getType() const
{
	return this->_type;
}

void	AAnimal::makeSound() const {}
