/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.hpp                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 12:46:18 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 15:38:18 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DOG_HPP
# define DOG_HPP
# include "Animal.hpp"
# include "Brain.hpp"

class Dog : public Animal
{
	public:
		Dog();
		Dog(const string type);
		Dog(const Dog& cpy);
		~Dog();

		Dog&	operator=(const Dog& cpy);
		void	makeSound() const;
		Brain*	getBrain() const;
	
	private:
		Brain*	_brain;
};

#endif
