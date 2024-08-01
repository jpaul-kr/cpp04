/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:57:02 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/08/01 16:36:30 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>
# include "Brain.hpp"

using std::string;

class Animal
{
	public:
		Animal();
		Animal(const string type);
		Animal(const Animal& cpy);
		virtual ~Animal();

		Animal&		operator=(const Animal& cpy);
		virtual void	makeSound() const;
		void		setType(const string type);
		string		getType() const;

	protected:
		string	_type;
};


#endif
