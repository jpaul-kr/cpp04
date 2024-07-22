/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:14:09 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 13:14:28 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat") 
{
	std::cout << "Cat default constructor called" << std::endl;
	_type = "Cat";
}

Cat::Cat(const string type) : Animal(type) 
{
	std::cout << "Cat init constructor called" << std::endl;
	_type = type;
}

Cat::Cat(const Cat& cpy) : Animal(cpy) 
{
	std::cout << "Cat copy constructor called" << std::endl;
	*this = cpy;
}

Cat::~Cat() 
{
	std::cout << "Cat default destructor called" << std::endl;
}

Cat&	Cat::operator=(const Cat& cpy)
{
	std::cout << "Cat copy assignment operator called" << std::endl;
	this->_type = cpy._type;
	return *this;
}

void	Cat::makeSound() const
{
	std::cout << "Miau!" << std::endl;
}
