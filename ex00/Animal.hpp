/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jpaul-kr <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/22 10:57:02 by jpaul-kr          #+#    #+#             */
/*   Updated: 2024/07/22 13:16:03 by jpaul-kr         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef ANIMAL_HPP
# define ANIMAL_HPP
# include <iostream>
# include <string>

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
